#include <string.h>
#include <stdio.h>

extern size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main()
{
	char	*d1 = NULL;
	char	d2[4] = "123";
	const char	*s1 = NULL;
	const char	*s2 = "abc";
	size_t	z1 = 0;
	size_t	z2 = 4;

	printf("%lu\n", strlcat(d1, s2, 0));
	printf("%lu\n", ft_strlcat(d1, s2, 0));
}
