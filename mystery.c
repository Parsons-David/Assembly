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
