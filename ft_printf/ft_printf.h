

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putcharf(char c);
int	ft_putstrf(char *s);
int	ft_putnbrf(int nb);
int	ft_numhex(unsigned long long nb, char c);
int	ft_nosigne(unsigned int n);
int	ft_pointer(intptr_t ptr);

int	ft_printf(char const *str, ...);

#endif