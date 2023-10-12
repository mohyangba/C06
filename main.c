#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b)
{
     int sum = a + b;
     return sum;
     //return(a+b)로 해도 가능. 
}

int square(int n)
{
    int squared = n*n;
    return squared;
    // return n*n 가능. 
}

int get_max(int x, int y)
{
    int max;
    
    if(x<y)
           max = y;
    if(x>y)
           max = x;
    else
        max = x = y;
        
    return max;
}
    
int main(int argc, char *argv()){
    
    int a, b;
    a=3;
    b=9;
    sumTwo(3, 9);
    printf("sunTwo result will be %i\n", sumTwo(3,9));
    
    square(8);
    printf("square result will be %i\n", square(8));
    
    int x, y; 
    x=11;
    y=11;
    
    get_max(11, 11);
    printf("two integers will be %d and %d, so the max value will be %d.\n", x, y, get_max(11,11));

  system("PAUSE");	
  return 0;
} 
