#include <string.h>
#include <stdio.h>
#include <stdlib.h>


  int num[200]; // line 114 of mystery.c 32/4 = 4 -> 800/4 = 200

  /*
   * lines 3:12 of mystery.s
   * Pushes base pointer copies stack pointer
   * puts second parameter into return pointer
   * sums first parameter and return pointer (i.e. sum of first and second parameters)
   * pops base pointer, returns return pointer (eax)
   */
  int add(int x, int y){
    return x + y;
  }

  /*
   * lines 13:71 of mystery.c
   * an optimized fibonnaci calculator
   */

  int fibb(int input){
    /*
     * 16:19 Pushes base pointer copies stack pointer and puts second parameter into return pointer
     */
    int output; //line 19, space allocated for local variables
    /*
     * lines 20:23
     * compares the paramter poisition of the array to -1
     * basically testing if the paramters fibonnaci value has been calculated
     * jumps to .L4 or directly to output stage if -1 is equal to the "calculated fib number"
     */
    if(num[input] == -1){
      int local1 = -1; // line 29
      if(0 == input){ // line 30
        local1 = 0; // line 32
      } else if (1 == input) { // line 35
        local1 = 1; // line 37
      } else { // .L10
        // lines 40:52
        local1 = add(fibb(input - 2), fibb(input - 1));
      }

      // .L9 this is really redundant and it appears .L9 does this so...
      if (num[input] == -1){ // lines 58:60
        num[input] = local1;
      }

      // .L12
      output = num[input];

    } else { // lines 24:26

      output = num[input];

    }
    return output;
  }

  int main(int argc, char ** argv){
    int input = atoi(argv[1]); // lines 89:91
    int i = 0; // line 90
    while(i < 199){ // line 99
      /*
       * .L17
       */
      num[i] = -1; // lines 95 and 96
      i++; // line 97
    }
    printf("%d\n", fibb(input)); // lines 101:106
    return 0;
  }
