#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int add(int x, int y){
  return x + y;
}
int fibb(int tar){
  if(tar > 2){
    return add(fibb(tar - 1), fibb(tar - 2));
  } else if (tar < 1){
    return 0;
  } else {
    return 1;
  }
}
int main(int argc, char ** argv){
  printf("%d\n", fibb(atoi(argv[1])));
  return 1;
}

int atoi(char * input){
  // stores int value
  unsigned int val = 0;
  // sums each int based of position
  int pos = 0;
  for(pos = 0; pos < strlen(input); pos++){
   val *= 10;
   val += input[pos] - '0';
  }
  return val;
}

int main(int argc, char **argv){

  return 0;
}
