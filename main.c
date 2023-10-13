#include <stdio.h>
#include <stdlib.h>


int factorial(int n) {
        
    if(n==0||n==1){
    return 1;// 1! & 0!
    }
    else if (n<0){
    return 0; //means error
    }
    else{
    int i;
    int result = 1; // initializing 'result' variable to 1
    for (i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
    }
}

int combination(int n, int r)
{
    int div1, div2; // div1=분자, div2=분모 
    
    div1 = factorial(n);
    div2 = factorial(n-r)*factorial(r);
    
    return (div1/div2);
}
// printf scanf 모듈화 
int input(int norr)
{ 
    int num;
    
     printf("input an integer: ");
     scanf("%d", &num);
     
     return num;
}
int main(){

    int n, r;
    int result;
    
    // 1. input n, r
    n=input(n);
    r=input(n);
    
    // 2. calculate div1 & div2
    result = combination(n,r);
     
    // 3. print the reult
    printf("the combination of %d and %d will be : %d\n", n, r, result);

  system("PAUSE");	
  return 0;
} 
