#include <stdio.h>
#include <stdlib.h>

void printstar()
{
     int i;

     for (i = 0; i < 10; i++)
         printf("*");
}

int main(void)
{
    printstar();
    printstar();
    printstar();
    
  system("PAUSE");	
  return 0;
}
