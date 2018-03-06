#include <stdio.h>

//Define definition
#define LOWER 0
#define UPPER 300
#define STEP 20

int main (void) {

	/* First create the variables */
	int celsius, fahr;

	// Next define the variables
	fahr = LOWER;

	/* Calculate celcius, then print out celcius and fahrenheit, then increase fahrenheit
	while (fahr <= UPPER) {
		float celsius = 5.0f * ((float)fahr - 32) / 9.0f;
		printf("%d\t%f\n", fahr, celsius);
		fahr = fahr + STEP;
	}*/

	for (fahr =LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
