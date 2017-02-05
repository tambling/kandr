#include <stdio.h>

int main () {
  int letters_space = 'z' - 'A' + 1;
  int c, i, j, letters[letters_space];

  for (i = 0; i < letters_space; i++) {
    letters[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    letters[c - 'A']++;
  }

  for (i = 0; i < letters_space; i++) {
    printf("%c: ", i + 'A');
    for (j = 1; j <= letters[i]; j++) {
      printf("X");
    }
    printf("\n");
  }
}
