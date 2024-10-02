#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>

int p_len(unsigned long n);
int ft_print_p(void *p);
int ft_print_format(va_list ar, const char s);
int ft_printf(const char *str, ...);
int ft_print_nbr(int n);
int ft_print_str(char *str);
int ft_print_u(unsigned int u);
int nbr_len(int n);
int ft_putchar(char c);
int	ft_hexlen(unsigned	int num);
void	ft_puthex(unsigned long num, const char format);
int	ft_print_x(unsigned int num, const char format);

#endif
