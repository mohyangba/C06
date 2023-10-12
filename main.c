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
    int div1, div2; // div1=분자, div2=분모 
    
    div1 = factorial(n);
    div2 = factorial(n-r)*factorial(r);
    
    return (div1/div2);
}

int main(int argc, char *argv()){
    int n, r;
    int div1, div2;
    int result;
    

    // 1. 입력값
    
        // n입력
    printf("input n: \n");
    scanf("%d", &n);
    
        // r입력
    printf("input r: \n");
    scanf("%d", &r);
    
    // 2. 분모/분자 계산
    result = combination(n,r);
       // n! n-r! r! 계산
       // 분모 / 분자 계산
     
    // 3. 최종 값 출력
    printf("the combination of %d and %d will be : %.21f", n, r, result);
     // 분모/분자 나눔
       // 결과 값 출력  
     
  system("PAUSE");	
  return 0;
} 
