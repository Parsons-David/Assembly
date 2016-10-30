#include <stdio.h>
#include <string.h>
#include <sys/time.h>

int Factorial(int n){
  if(n == 0){
    return 1;
  }
  int output = n;
  int i = 0;
  for(i = n - 1; i > 0; i--){
    output *= i;
  }
  return output;
}

int nCr(int n, int r){
  int output = Factorial(n);
  output /= Factorial(r) * Factorial(n-r);
  return output;
}

int main(int agrc, char ** argv){
  struct timeval tv;
  double curtime;
  gettimeofday(&tv, NULL);
  curtime = (double)tv.tv_sec*1000000 + (double)tv.tv_usec;
  printf("%f\n", curtime);

  int power = 0;
  int i = 0;
  for(i = 0; i < strlen(argv[1]); i++){
    power *= 10;
    power += (argv[1][i]) - '0';
    //printf("%d\n", power);
  }

  printf("(1 + x)^%d = 1", power);
  for(i = 1; i <= power; i++){
    printf(" + %d*x^%d", nCr(power,i), i);
  }
  printf("\n");

  struct timeval tv2;
  gettimeofday(&tv2, NULL);
  curtime -= (double)tv2.tv_sec*1000000 + (double)tv2.tv_usec;
  curtime *= -1;
  printf("Time Required: %d microseconds\n", (int) curtime);
  return 0;
}
