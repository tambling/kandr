#include <stdio.h>

int main() {
	int spaces = 0;
	char c;

	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
			spaces ++;
	}

	printf("%d spaces.\n", spaces);
}
