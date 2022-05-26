#include <stdio.h>

main()
{
	float far, cel;
	float lower, upper, step;

	lower = 0.0;
	upper = 300.0;
	step = 25.0;

	far = lower;

	while (far < upper) 
	{
		cel = (5.0/9.0) * (far - 32.0);
		printf("%3.0f\t%6.1f\n", far, cel);
		far = far + step;
	}
}