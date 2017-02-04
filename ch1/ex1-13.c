#include <stdio.h>

#define IN 1
#define OUT 0

int main () {
  int c, i, j, length, lengths[10], state;

  length = 0;

  for (i = 0; i < 10; i++) {
    lengths[i] = 0;
  }

  while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
        if (length > 10) length = 10;
        lengths[length - 1]++;
        length = 0;
				state = OUT;
			}
		} else {
			state = IN;
      length++;
		}
  }

  for (i = 0; i < 9; i++) {
    printf("%d   ", i + 1);
    for(j = 1; j <= lengths[i]; j++) {
      printf("X");
    }
    printf("\n");
  }
  
  printf("10+ ");
  for(j = 1; j <= lengths[9]; j++) {
    printf("X");
  }
  printf("\n");
}
