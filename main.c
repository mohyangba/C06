#include <stdio.h>
#include <stdlib.h>

void f1(void)
{
     int x;
     printf("f1 x is at %p\n", &x);
     //&x x�� ��� �޸��� �ּҿ� �ִ��� �˷��ִ� ������. = ������ �޸� �ּ���  
}

int main(void){
    
    int x;
    printf("main x is at %p\n", &x);
    f1();

  system("PAUSE");	
  return 0;
}
