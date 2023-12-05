/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juggorr <juggorr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:17:40 by juggorr           #+#    #+#             */
/*   Updated: 2023/12/05 19:24:54 by juggorr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int				ft_atoi(char const *s1);
void			ft_bzero(void *s, unsigned long n);
void			*ft_calloc(size_t number, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
char			ft_digits_cnt(int n);
void			ft_memchr(const void *s, int c, unsigned long n);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);
void			*ft_memcpy(void *dst, void *src, unsigned long n);
void			*ft_memset(void *b, int c, unsigned long len);
void			*ft_memmove(void *dst, void const *src, unsigned int len);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
int				ft_count_words(char const *s, char c);
char			*ft_strchr(char *s, int c);
char			*ft_strdup(const char *str);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
unsigned long	ft_strlcat(char *dset, char *src, unsigned long size);
unsigned int	ft_strlcpy(char *dst, char *str, unsigned int size);
unsigned int	ft_strlen(const char *s);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, unsigned long n);
char			*ft_strnstr(const char *s1, const char *s2, unsigned long n);
char			*ft_strrchr(char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			**ft_split(char const *s, char c);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif
