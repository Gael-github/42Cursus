/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:36:26 by nobenham          #+#    #+#             */
/*   Updated: 2025/02/19 11:47:57 by nobenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H 
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char x);
int	ft_puthex(unsigned long long n, char a);
int	ft_putunsg(unsigned int n);
int	ft_pointer(uintptr_t ptr);
int	ft_putstr(char *s);
int	ft_putnbr(int n);

#endif