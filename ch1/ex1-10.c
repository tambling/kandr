#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\\' || c == '\t' || c == '\b') {
			putchar('\\');
			if (c == '\\')
				putchar('\\');
			else if (c == '\t')
				putchar('t');
			else if (c == '\b')
				putchar('b');
		} else {
			putchar(c);
		}
	}
}
