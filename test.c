#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char *s;

	s = strnstr("abc", "", 1);
	write(1, s, 1);
	return (0);
}
