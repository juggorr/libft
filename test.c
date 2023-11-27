#include<unistd.h>
#include<stdio.h>
#include<string.h>

void	chglob(size_t *num)
{
	*num += 1;
	return ;
}

int	main(void)
{
	size_t	num;
	size_t	*pnum;

	num = 0;
	*pnum = num;
	printf("num: %lu\n", *pnum);
	chglob(pnum);
	printf("num: %lu\n", *pnum);
	return (0);
}
