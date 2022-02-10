#include <stdio.h>

int main()
{
  int celsius, fahr;
  int min, max;

  celsius = min = 0;
  max = 100;

  printf("==================================\n");
  printf("Tabla de conversion de temperatura\n");
  printf("      Celsius a Fahrenheit\n");
  printf("==================================\n");

  while( celsius <= max )
  {
    fahr = ((9/5) * celsius) + 32;
    printf("%3d\t%3d\n", celsius , fahr );
    celsius = celsius + 10;
  }
}
