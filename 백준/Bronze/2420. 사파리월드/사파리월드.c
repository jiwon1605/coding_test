#include <stdlib.h>
#include <stdio.h>

int main(void){
	long long int N = 0;
	long long int M = 0;
	scanf("%lld %lld", &N, &M);
	printf("%lld", llabs(N-M));
	
	return 0;
}