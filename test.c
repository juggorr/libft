#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	tgt[3] = "tgt";
	char	src[10] = "source";

	printf("before : %s\n", tgt);
	memcpy(tgt, src, sizeof(4));
	printf("afterr : %s\n", src);
	return (0);
}
