#include <stdio.h>
#include <stdlib.h>

void square1(int a)
{
     a= a*a;
}

int square2(int b)
{
    return b*b;
}

int main(){
    
    int a=2;
    square1(a); 
    
    printf("a=%i\n", a);
                     // void 의 값은 행동이 동작한 후 날라가므로 당연히 a는 2라고 나오게 된다 
    
    int b=5;
    b = square2(b);
    printf("b=%i\n", b);
    
  system("PAUSE");	
  return 0;
} 
