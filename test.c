#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern void	*ft_memcpy(void *dst, void *src, unsigned int len);
extern void	*ft_memchr(const void *dst, int	c, unsigned int	len);
extern int	ft_memcmp(const void *s1, const void *s2, unsigned int len);

int	main()
{
	char	s1[] = "Hello";
	char	s2[] = "Hella";

	printf("%d\n", memcmp(s1, s2, sizeof(s1)));
	printf("========\n");
	printf("%d\n", ft_memcmp(s1, s2, sizeof(s1)));
	printf("========\n");

	printf("u char : %lu\n", sizeof(unsigned char));
	printf("  char : %lu\n", sizeof(char));
	return (0);
}
