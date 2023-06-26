#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int N;
int *a;


//void input() {
//	srand(time(NULL));
//	int i = 0; //지역변수 i
//	N = rand() % 11; //총 정수의 개수 N 난수 생성
//	printf("%d\n", N);
//	a = (int*)malloc(sizeof(int) * N); //N의 갯수만큼 동적 할당
//	for (i = 0; i < N; i++) {
//		a[i] = rand() % 11;
//		for (int j = 0; j < i; j++) {
//			if (a[i] == a[j]) i--;
//		}
//	}
//	for (i = 0; i < N; i++) {
//		printf("%d\n", a[i]);
//		
//	}
//}

int compare(const void*x, const void*y) {
	int num1 = *(int*)x;
	int num2 = *(int*)y;

	if (num1 > num2)
		return 1;
	else if (num1 < num2)
		return -1;
	else
		return 0;
}

int main(void) {
	//input();

	scanf("%d", &N);
	if (N > 1000) {
		fprintf(stderr,"개수 범위 초과 오류");
		exit(1);
	}
	a = (int*)malloc(sizeof(int) * N); //N의 갯수만큼 동적 할당
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
		if (a[i] > 1000) {
			fprintf(stderr, "요소 범위 초과 오류");
			exit(1);
		}
	}

	qsort(a, N, sizeof(int), compare);
	

	for (int i = 0; i < N; i++) {
		printf("%d\n", a[i]);
	}

	free(a);
	return 0;
}