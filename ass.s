.file "ass.s"
; .LC0:
; .string	"Result: %i\n"
.text
.global	main
.type	main, @function
main:
pushl %ebp
movl %esp, %ebp
subl $8, %esp
movl $5, -4(%ebp)
movl $0, -8(%ebp)
movl -4(%ebp), %edx
movl -8(%ebp), %eax
imull %edx, %eax
; movl $.LC0, %eax
; call printf
popq %rbp
leave
ret
