#include <stdlib.h>
#include <stdio.h>

void f(void)
{
  printf("start: f() \n");
  int* x = malloc(10 * sizeof(int));
  x[10] = 0;        // problem 1: heap block overrun
  printf("end: f() \n");
}                    // problem 2: memory leak -- x not freed

int main(void)
{
  printf("start: main() \n");
  f();
  printf("end: main() \n");
  return 0;
}
