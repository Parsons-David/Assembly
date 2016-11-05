#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int num[200];

int add(int x, int y){
  return x + y;
}

int fibb(int input){
  // 7 local variables
  int output;
  if(num[input] == -1){
    if(input == 1 || input == 0){
      return input;
    } else {
      return fibb(input - 1) + fibb(input - 2);
    }
  }
  output = num[input];
  return output;
}

int main(int argc, char ** argv){
  int i = 0;
  while(i < 200){
    num[i] = -1;
    i++;
  }
  printf("%d\n", fibb(atoi(argv[1])));
  return 1;
}
