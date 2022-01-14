#include <stdio.h>
int funcA(int n);
int funcB(int n);

int funcA(int n) {
	if (n > 0) {
		funcB(n - 1);
		printf("%d\n", n);
		
	}
}

int funcB(int n) {
	if (n > 1) {
		funcA(n/2);
		printf("%d\n", n);
	}
}

int main() {
	int a = 30;
	funcA(a);
	return 0;
}