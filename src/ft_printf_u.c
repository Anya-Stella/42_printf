/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishihar <tishihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:44:47 by tishihar          #+#    #+#             */
/*   Updated: 2024/06/18 13:24:27 by tishihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	ft_putui(unsigned int n)
{
	if (n < 10)
	{
		ft_putchar_fd('0' + n, STDOUT_FILENO);
		return (1);
	}
	return (ft_putui(n / 10) + ft_putui(n % 10));
}

int	ft_printf_u(unsigned int n)
{
	int	len;

	len = ft_putui(n);
	return (len);
}
