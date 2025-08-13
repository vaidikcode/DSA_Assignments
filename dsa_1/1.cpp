// 1) Menu-driven program for array operations
#include <stdio.h>

int main() {
	int arr[100], n = 0, choice, pos, val, i, search, found;
	while (1) {
		printf("\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n");
		scanf("%d", &choice);
		if (choice == 1) {
			scanf("%d", &n);
			for (i = 0; i < n; i++) scanf("%d", &arr[i]);
		} else if (choice == 2) {
			for (i = 0; i < n; i++) printf("%d ", arr[i]);
		} else if (choice == 3) {
			scanf("%d %d", &pos, &val);
			for (i = n; i > pos; i--) arr[i] = arr[i-1];
			arr[pos] = val;
			n++;
		} else if (choice == 4) {
			scanf("%d", &pos);
			for (i = pos; i < n - 1; i++) arr[i] = arr[i+1];
			n--;
		} else if (choice == 5) {
			scanf("%d", &search);
			found = 0;
			for (i = 0; i < n; i++) if (arr[i] == search) { found = 1; break; }
			if (found) printf("Found at %d", i);
			else printf("Not Found");
		} else if (choice == 6) break;
	}
	return 0;
}
