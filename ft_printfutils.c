/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekundur <mekundur@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:03:08 by mekundur          #+#    #+#             */
/*   Updated: 2024/02/19 02:34:07 by mekundur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	set_iteration(const char *format, t_type *flags)
{
	int	i;

	i = 0;
	while (format[i] >= '0' && format[i] <= '9')
		++i;
	return (i + 1);
	flags = flags + 0;
}

int	ft_diglen(long long num)
{
	int	len;

	len = 0;
	if (num <= 0)
	{
		len++;
		num *= -1;
	}
	while (num >= 1)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13) || *nptr == '0')
		nptr++;
	if (*nptr == '0')
		return (0);
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		num *= 10;
		num += (*nptr - 48);
		nptr++;
	}
	return (sign * num);
}
