/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishihar <tishihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:51:45 by tishihar          #+#    #+#             */
/*   Updated: 2024/06/18 15:53:36 by tishihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(const char *format, va_list ap)
{
	if (*format == 'd' || *format == 'i')
		return (ft_printf_d(va_arg(ap, int)));
	else if (*format == 's')
		return (ft_printf_s(va_arg(ap, char *)));
	else if (*format == 'c')
		return (ft_printf_c(va_arg(ap, int)));
	else if (*format == 'u')
		return (ft_printf_u(va_arg(ap, unsigned int)));
	else if (*format == 'x')
		return (ft_printf_x(va_arg(ap, unsigned int)));
	else if (*format == 'X')
		return (ft_printf_x_upper(va_arg(ap, unsigned int)));
	else if (*format == 'p')
		return (ft_printf_p(va_arg(ap, void *)));
	else if (*format == '%')
		return (ft_printf_c('%'));
	else
		return (0);
}

static int	ft_runprintf(const char *format, va_list ap)
{
	int	sum;

	sum = 0;
	while (*format)
	{
		if (*format == '%')
			sum += handle_format(++format, ap);
		else
			sum += ft_printf_c(*format);
		format++;
	}
	return (sum);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		rv;

	if (!format)
		return (-1);
	va_start(ap, format);
	rv = ft_runprintf(format, ap);
	va_end(ap);
	return (rv);
}
