#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  int i;
  int max = 45;
  
  srand( (unsigned)time(NULL) );
  
  for (i = 1; i < 6; i++)
  {
      int randum = rand();
      printf(" %d(%d) ", randum % max, randum);
  }


  system("PAUSE");	
  return 0;
}
