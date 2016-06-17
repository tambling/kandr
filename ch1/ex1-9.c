#include <stdio.h>

int main() {
	int c, in_space;
	in_space = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (in_space == 0) {
				putchar(c);
				in_space = 1;
			}
		} else {
			in_space = 0;
			putchar(c);
		}
	}
}

