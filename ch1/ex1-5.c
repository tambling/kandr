#include <stdio.h>

int main()
{
	float fahr, cels;
	float lower, upper, step;

	printf("%3c %6c\n", 'F', 'C');

	
	for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
		cels = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, cels);
	}
}
