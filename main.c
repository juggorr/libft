#include<stdio.h>
#include<string.h>
#include<stdlib.h>

extern int ft_isalpha(int c);
extern int ft_isdigit(int c);
extern int ft_isalnum(int c);
extern int ft_isascii(int c);
extern int ft_isprint(int c);
extern unsigned long	ft_strlen(char *s);
extern int ft_toupper(int c);
extern int ft_tolower(int c);
extern unsigned long	ft_strlcpy(char *dst, char *src, unsigned int size);
extern unsigned long	ft_strlcat(char *dst, char *src, unsigned int size);
extern void	*ft_memset(void *b, int c, unsigned long len);
extern void	*ft_bzero(void *s, unsigned long n);

int	main(void)
{
	printf("FT_ISALPHA\n");
	printf("ft_isalpha('a') : %d\n", ft_isalpha('a'));
	printf("ft_isalpha('A') : %d\n", ft_isalpha('A'));
	printf("ft_isalpha('1') : %d\n", ft_isalpha('1'));
	printf("==========================================================\n");
	
	printf("FT_ISDIGIT\n");
	printf("ft_isdigit('a') : %d\n", ft_isdigit('a'));
	printf("ft_isdigit('A') : %d\n", ft_isdigit('A'));
	printf("ft_isdigit('1') : %d\n", ft_isdigit('1'));
	printf("==========================================================\n");
	
	printf("FT_ISALNUM\n");
	printf("ft_isalnum('a') : %d\n", ft_isalnum('a'));
	printf("ft_isalnum('A') : %d\n", ft_isalnum('A'));
	printf("ft_isalnum('1') : %d\n", ft_isalnum('1'));
	printf("ft_isalnum('!') : %d\n", ft_isalnum('!'));
	printf("==========================================================\n");
	
	printf("FT_ISASCII\n");
	printf("ft_isascii('a') : %d\n", ft_isascii('a'));
	printf("ft_isascii(0) : %d\n", ft_isascii(0));
	printf("ft_isascii(255) : %d\n", ft_isascii(255));
	printf("ft_isascii(256) : %d\n", ft_isascii(256));
	printf("==========================================================\n");
	
	printf("FT_ISPRINT\n");
	printf("ft_isprint('a') : %d\n", ft_isprint('a'));
	printf("ft_isprint(31) : %d\n", ft_isprint(31));
	printf("ft_isprint(32) : %d\n", ft_isprint(32));
	printf("ft_isprint(126) : %d\n", ft_isprint(126));
	printf("ft_isprint(127) : %d\n", ft_isprint(127));
	printf("==========================================================\n");
	
	printf("FT_STRLEN\n");
	printf("ft_strlen('') : %lu\n", ft_strlen(""));
	printf("ft_strlen('a') : %lu\n", ft_strlen("a"));
	printf("ft_strlen('ab') : %lu\n", ft_strlen("ab"));
	printf("ft_strlen('abc') : %lu\n", ft_strlen("abc"));
	printf("==========================================================\n");
	
	printf("FT_TOUPPER\n");
	printf("ft_toupper('b') : %c\n", ft_toupper('b'));
	printf("ft_toupper('A') : %c\n", ft_toupper('A'));
	printf("ft_toupper('1') : %c\n", ft_toupper('1'));
	printf("ft_toupper('!') : %c\n", ft_toupper('!'));
	printf("==========================================================\n");
	
	printf("FT_TOLOWER\n");
	printf("ft_tolower('b') : %c\n", ft_tolower('b'));
	printf("ft_tolower('A') : %c\n", ft_tolower('A'));
	printf("ft_tolower('1') : %c\n", ft_tolower('1'));
	printf("ft_tolower('!') : %c\n", ft_tolower('!'));
	printf("==========================================================\n");
	
	printf("FT_STRLCPY\n");
	char	dst_cpy[5];
	char*	src_cpy = "a";
	char*	src_cpy1 = "abcd";
	char*	src_cpy2 = "abcd";
	printf("ft_strlcpy('a & 1') : %lu\n", ft_strlcpy(dst_cpy, src_cpy, 1));
	printf("dst : %s\n", dst_cpy);
	printf("ft_strlcpy('abcd & 4') : %lu\n", ft_strlcpy(dst_cpy, src_cpy1, 4));
	printf("dst : %s\n", dst_cpy);
	printf("ft_strlcpy('abcd & 5') : %lu\n", ft_strlcpy(dst_cpy, src_cpy2, 5));
	printf("dst : %s\n", dst_cpy);
	printf("==========================================================\n");
	
	printf("FT_STRLCAT\n");
	char	dst_cat[10] = "abcde";
	char	src_cat[4] = "123";
	printf("strlcat('10 & 6') : %lu\n", strlcat(dst_cat, src_cat, 4));
	printf("dst : %s\n", dst_cat);
	printf("ft_strlcat('10 & 6') : %lu\n", ft_strlcat(dst_cat, src_cat, 4));
	printf("dst : %s\n", dst_cat);
	printf("ft_strlcat('10 & 12') : %lu\n", ft_strlcat(dst_cat, src_cat, 12));
	printf("dst : %s\n", dst_cat);
	printf("==========================================================\n");
	
	printf("FT_MEMSET\n");
	void	*b = (void*)malloc(sizeof(char) * 4);
	printf("memset(b, 51, 3) : %s\n", memset(b, 51, 3));
	printf("ft_memset(b, 51, 3) : %s\n", ft_memset(b, 51, 3));
	printf("memset(b, 52, 4) : %s\n", memset(b, 52, 4));
	printf("ft_memset(b, 52, 4) : %s\n", ft_memset(b, 52, 4));
	printf("memset(b, 53, 5) : %s\n", memset(b, 53, 5));
	printf("ft_memset(b, 53, 5) : %s\n", ft_memset(b, 53, 5));
	printf("==========================================================\n");

	printf("FT_BZERO\n");
	void	*s = malloc(4);
	void	*s2 = malloc(4);
	bzero(s, 3);
	printf("bzero(s, 3) : %s\n", s);
	ft_bzero(s2, 3);
	printf("ft_bzero(s2, 3) : %s\n", s2);
	printf("==========================================================\n");

	return (0);
}
