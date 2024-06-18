/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishihar <tishihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:44:14 by tishihar          #+#    #+#             */
/*   Updated: 2024/06/18 15:56:04 by tishihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	ft_puthex_ul(unsigned long ul)
{
	char	*base;

	base = "0123456789abcdef";
	if (ul < 16)
	{
		ft_putchar_fd(base[ul % 16], STDOUT_FILENO);
		return (1);
	}
	return (ft_puthex_ul(ul / 16) + ft_puthex_ul(ul % 16));
}

int	ft_printf_p(void *p)
{
	unsigned long	ul;
	int				len;

	ul = (unsigned long)p;
	ft_putstr_fd("0x", STDOUT_FILENO);
	len = ft_puthex_ul(ul) + 2;
	return (len);
}
