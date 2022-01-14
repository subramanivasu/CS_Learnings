#include <stdio.h>

int func(int n) {
	static int x = 0;
	if (n > 0) {
		x++;
		return func(n - 1) + x;
	}
}

int main() {

	int a = 5;
	printf("%d\n", func(a));
	return 0;
}