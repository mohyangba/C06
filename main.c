#include <stdio.h>
#include <stdlib.h>

void f1(void)
{
     int x;
     printf("f1 x is at %p\n", &x);
     //&x x가 어느 메모리의 주소에 있는지 알려주는 연산자. = 변수의 메모리 주소지  
}

int main(void){
    
    int x;
    printf("main x is at %p\n", &x);
    f1();

  system("PAUSE");	
  return 0;
}
