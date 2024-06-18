/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishihar <tishihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:44:35 by tishihar          #+#    #+#             */
/*   Updated: 2024/06/17 22:42:48 by tishihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

int	ft_printf_s(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", STDOUT_FILENO);
		return (6);
	}
	ft_putstr_fd(str, STDOUT_FILENO);
	return (ft_strlen(str));
}

/*
int	main(void)
{
	char	*str;
	int		*p;
	int		rv;

	str = NULL;
	p = NULL;
	rv = printf("%p", p);
	printf("%d", rv);
	return (0);
}
//*/
