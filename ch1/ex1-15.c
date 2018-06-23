#include <stdio.h>

float fahr_to_cels(float fahr);

int main()
{
  float fahr, cels;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("%3c %6c\n", 'F', 'C');

  while(fahr <= upper) {
    cels = fahr_to_cels(fahr);
    printf("%3.0f %6.1f\n", fahr, cels);
    fahr = fahr + step;
  }
}

float fahr_to_cels(float fahr) {
  return (5.0/9.0) * (fahr - 32.0);
}
