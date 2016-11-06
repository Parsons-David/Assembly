.globl nCr
        .type   nCr, @function
nCr:
  # Your code for nCr should go here

  pushl %ebp          /*pushes base pointer*/
  movl %esp, %ebp     /*copies stack pointer into base pointer*/

  movl 8(%ebp), %ecx  /*puts first paramater 'n' into ecx*/
  subl 12(%ebp), %ecx /*subtracts the value of the second paramater 'r' from ecx resultring in 'n-r'*/

  pushl %ecx          /*makes ecx the first paramater for the next call*/
  call Factorial      /*calls factorial on ecx*/
  addl $4, %esp       /*unallocates space for parameter*/

  movl %eax, %ecx     /*copies eax '(n-r)!' into ecx*/

  movl 12(%ebp), %ebx /*copies second paramter 'r' into ebx*/

  pushl %ebx          /*pushes value in ebx so its the first parameter in the next call*/
  call Factorial      /*calls factorial on ebx - eax contains 'r!'*/
  addl $4, %esp       /*unallocates space for parameter*/

  imull %eax, %ecx    /*multiplies eax and ecx, so now ecs contains 'r!*(n-r)!'*/

  movl 8(%ebp), %ebx  /*puts first paramater 'n' into ebx*/

  pushl %ebx          /*makes ebx the first paramater for the next call*/
  call Factorial      /*calls factorial on ebx - eax contains 'n!'*/
  addl $4, %esp       /*unallocates space for parameter*/

  movl $0, %edx
  idivl %ecx          /*divides eax by ecs or 'n!' / 'r!*(n-r)!'*/

  jmp .L4

.L3:

  movl $0, %eax

.L4:

  leave
  ret
  .size nCr, .-nCr


.globl Factorial
        .type   Factorial, @function
Factorial:
  # Your code for Factorial should go here

  pushl %ebp
  movl %esp, %ebp
  movl 8(%ebp), %eax
  cmp $1, %eax
  jg .L1
  movl $1, %eax
  jmp .L2
.L1:
  subl $1, 8(%ebp)
  imull 8(%ebp), %eax
  cmp $2, 8(%ebp)
  jnl .L1
.L2:
  leave
  ret
  .size	Factorial, .-Factorial
