// 5) Sum of every row and column in a 2D array
#include <stdio.h>

int main() {
	int a[10][10], n, m, i, j, sum;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) for (j = 0; j < m; j++) scanf("%d", &a[i][j]);
	for (i = 0; i < n; i++) {
		sum = 0;
		for (j = 0; j < m; j++) sum += a[i][j];
		printf("Row %d sum = %d\n", i, sum);
	}
	for (j = 0; j < m; j++) {
		sum = 0;
		for (i = 0; i < n; i++) sum += a[i][j];
		printf("Col %d sum = %d\n", j, sum);
	}
	return 0;
}
