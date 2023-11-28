#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	main(void)
{
	int		a = 1234;
	char	cnt = 0;

	while (a > 0)
	{
		a = a / 10;
		cnt++;
	}
	printf("%d\n", cnt);
	return (0);
}
