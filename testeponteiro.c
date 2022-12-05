#include <stdio.h>

void f(int *var){
    *var = 30; 
}

int main() {
  int n = 10;

  f(&n);

  printf("Ponteiro: %d\n", n);
  return 0;
}