#include <stdio.h>

int main() {
	char str_null = "";
	char str1[] = "lyw";
	char str2[] = {
		'G', 'O', 'O', 'D'
	};

	printf("%ld %ld %ld\n", sizeof(str_null), sizeof(str1), sizeof(str2));
	return 0;
}

