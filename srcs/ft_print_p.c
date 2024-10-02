#include "ft_printf.h"

int p_len(unsigned long n)
{
	int l = 0;
	while (n != 0)
	{
		l++;
		n = n / 16;
	}
	return l;
}

int ft_print_p(void *p)
{
    int l = 0;

    if ((unsigned long)p == 0)
        l += write(1, "(nil)", 5);
    else
    {
    	l += write(1, "0x", 2);
        ft_puthex((unsigned long)p, 'x');
        l += p_len((unsigned long)p);
    }
    return l;
}