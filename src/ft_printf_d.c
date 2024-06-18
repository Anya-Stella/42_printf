/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishihar <tishihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:43:54 by tishihar          #+#    #+#             */
/*   Updated: 2024/06/18 13:24:12 by tishihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static size_t	ft_countdigit_helper(long n, size_t count)
{
	if (n == 0 && count == 0)
		return (1);
	else if (n == 0)
		return (count);
	return (ft_countdigit_helper(n / 10, count + 1));
}

static size_t	ft_countdigit(long n)
{
	return (ft_countdigit_helper(n, 0));
}

int	ft_printf_d(int n)
{
	size_t	len;

	len = ft_countdigit(n) + (n < 0);
	ft_putnbr_fd(n, STDOUT_FILENO);
	return (len);
}
