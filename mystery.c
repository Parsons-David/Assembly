int add (){
  return 0;
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
