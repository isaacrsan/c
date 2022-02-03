#include <stdio.h>

int main()
{
  int c, nl, bs, tab;

  nl = bs = tab = 0;

  while( (c = getchar() ) != EOF )
  {
    if( c == '\n' )
      ++ nl;
    if( c == ' ' )
      ++ bs;
    if( c == '\t' )
      ++ tab;
  }

  printf( "%d lines, %d white spaces and %d tabs\n" , nl , bs , tab );
}
