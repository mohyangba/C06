#include <stdio.h>
#include <stdlib.h>


int factorial(int n) {
    int i;
    int result = 1;
    for (i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int combination(int n, int r)
{
    int div1, div2; // div1=����, div2=�и� 
    
    div1 = factorial(n);
    div2 = factorial(n-r)*factorial(r);
    
    return (div1/div2);
}

int main(int argc, char *argv()){
    int n, r;
    int div1, div2;
    int result;
    

    // 1. �Է°�
    
        // n�Է�
    printf("input n: \n");
    scanf("%d", &n);
    
        // r�Է�
    printf("input r: \n");
    scanf("%d", &r);
    
    // 2. �и�/���� ���
    result = combination(n,r);
       // n! n-r! r! ���
       // �и� / ���� ���
     
    // 3. ���� �� ���
    printf("the combination of %d and %d will be : %.21f", n, r, result);
     // �и�/���� ����
       // ��� �� ���  
     
  system("PAUSE");	
  return 0;
} 
