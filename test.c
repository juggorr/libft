#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	str1[] = "Geeks";
	char	str2[] = "Quiz";

	printf("str2: %s\n", str2);
	printf("sizeof: %lu\n", sizeof(str2));
	printf("lenof: %lu\n", strlen(str2));
	return 0;
}
