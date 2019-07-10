#include <stdio.h>
#include <stdarg.h>

void print_arguments( int num, ... ) {
  va_list valist;
  
  va_start(valist, num);

  char **data = va_arg(valist, char**);

  int index;
  for( index = 0; index < num; index++ ){    
    printf( "%s ", *data++);
  }
  printf("\n");  

  va_end(valist);  
}

int main( int argc, char **argv ){  
  char **spliced = ++argv;
  
  print_arguments( argc-1, spliced );

  return 0;
} 