#include<stdio.h>

extern int ft_isalpha(int c);
extern int ft_isdigit(int c);
extern int ft_isalnum(int c);
extern int ft_isascii(int c);
extern int ft_isprint(int c);

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

	return (0);
}
