#include <stdio.h>

#define LOWER 0			/* Symbolic Constants */
#define UPPER 300
#define STEP 25

main()
{
	float far, cel;

	far = LOWER;

	while (far < UPPER) 
	{
		cel = (5.0/9.0) * (far - 32.0);
		printf("%3.0f\t%6.1f\n", far, cel);
		far = far + STEP;
	}
}