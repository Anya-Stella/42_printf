/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_upper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishihar <tishihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:45:02 by tishihar          #+#    #+#             */
/*   Updated: 2024/06/18 13:18:12 by tishihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	ft_puthexu_ui(unsigned int ui)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (ui < 16)
	{
		ft_putchar_fd(base[ui % 16], STDOUT_FILENO);
		return (1);
	}
	return (ft_puthexu_ui(ui / 16) + ft_puthexu_ui(ui % 16));
}

int	ft_printf_x_upper(unsigned int c)
{
	int	len;

	len = ft_puthexu_ui(c);
	return (len);
}
