#include <stdio.h>

#define TRUE 1

int main()
{
  char command[50];

  printf( "Simple Shell\n");

  while (TRUE)
  {
    printf( "$ " );
    scanf("%s", command);
    printf( "%s is not a command.\n" , command);
  }
}
