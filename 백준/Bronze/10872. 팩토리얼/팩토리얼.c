#include <stdio.h>
int factorial(int a){
    int result = 1;

    for(int i=1;i<=a;i++){
        result = i*result;
    }
    
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int answer = factorial(n);
    printf("%d", answer);
    
    return 0;
}