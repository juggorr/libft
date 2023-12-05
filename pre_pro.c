#include <stdio.h>

int	main(void)
{
	int	idx;
	int	jdx;

	idx = 0;
	jdx = 0;
	while (idx++ < 10)
		printf("post: %d\n", idx);
	while (++jdx < 10)
		printf("pre : %d\n", jdx);
	return 0;
}
