/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishihar <tishihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:45:12 by tishihar          #+#    #+#             */
/*   Updated: 2024/06/18 13:17:22 by tishihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	ft_puthexl_ui(unsigned int ui)
{
	char	*base;

	base = "0123456789abcdef";
	if (ui < 16)
	{
		ft_putchar_fd(base[ui % 16], STDOUT_FILENO);
		return (1);
	}
	return (ft_puthexl_ui(ui / 16) + ft_puthexl_ui(ui % 16));
}

int	ft_printf_x(unsigned int c)
{
	int	len;

	len = ft_puthexl_ui(c);
	return (len);
}
