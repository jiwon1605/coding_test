#include <stdio.h>
#include <stdlib.h>

#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

int bubble_sort(int a, int b, int c) {
	int i, j, temp;
	int list[3] = { a, b, c };
	for (i = 3; i > 0; i--) {
		for (j = 0; j < i - 1; j++)
			if (list[j] < list[j + 1])
				SWAP(list[j], list[j + 1], temp);
	}
	return list[1];
}

int main(void) {
	int A, B,C;
	scanf("%d %d %d", &A, &B, &C);
	if (A < 1 || A>100 || B < 1 || B>100 || C < 1 || C>100) {
		printf(stderr, "입력 정수 범위 초과 오류");
		exit(1);
	}
	printf("%d", bubble_sort(A, B, C));

	return 0;
}