#include <stdio.h>

template <typename T>

T Recursive(T n) {
	
	if (n <= 1) {
		return (100);
	}

	return (Recursive(n - 1) * 2) - 50;
}

int main() {


	int hour = 9;
	int result = Recursive<int>(hour);

	int normal = 1072 * hour;
	
	printf("%d\n", result);
	printf("%d\n", normal);


	return 0;
}