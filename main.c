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
                     // void �� ���� �ൿ�� ������ �� ���󰡹Ƿ� �翬�� a�� 2��� ������ �ȴ� 
    
    int b=5;
    b = square2(b);
    printf("b=%i\n", b);
    
  system("PAUSE");	
  return 0;
} 
