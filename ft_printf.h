/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishihar <tishihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:12:19 by tishihar          #+#    #+#             */
/*   Updated: 2024/06/18 15:50:55 by tishihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf_d(int n);
int	ft_printf_s(char *str);
int	ft_printf_c(char c);
int	ft_printf_u(unsigned int n);
int	ft_printf_x(unsigned int c);
int	ft_printf_x_upper(unsigned int c);
int	ft_printf_p(void *p);

int	ft_printf(const char *format, ...);
#endif