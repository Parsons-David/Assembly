#include "nCr.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>

int main(int argc, char ** argv){
  struct timeval tvS, tvE;
  int i = 0;
  int power = atoi(argv[1]);
  if(strcmp(argv[1], "-h") == 0){
    printf("Usage: formula <positive integer>\n");
    return 0;
  }
  if(argc != 2){
    printf("ERROR: Please give one integer argument.\n");
    return 1;
  }

  gettimeofday(&tvS, NULL);

  printf("(1 + x)^%d = 1", power);
  for(i = 1; i <= power; i++){
    printf(" + %d*x^%d",  nCr(power, i), i);
  }
  printf("\n");

  gettimeofday(&tvE, NULL);

  printf("Time Required: %i microseconds\n", (int) (((double)tvE.tv_sec*1000000 + (double)tvE.tv_usec) - ((double)tvS.tv_sec*1000000 + (double)tvS.tv_usec)));

  return 0;
}
