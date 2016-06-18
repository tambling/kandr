#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c, state;
	state = OUT;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (state == OUT) {
				putchar(c);
				state = IN;
			}
		} else {
			state = OUT;
			putchar(c);
		}
	}
}

