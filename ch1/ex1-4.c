#include <stdio.h>

int main()
{
	float fahr, cels;
	float lower, upper, step;

	lower = 0;
	upper = 100;
	step = 10;

	cels = lower;

	printf("%3c %6c\n", 'C', 'F');

	while(cels <= upper) {
		fahr = (9.0/5.0) * cels + 32.0;
		printf("%3.0f %6.1f\n", cels, fahr);
		cels = cels + step;
	}
}
