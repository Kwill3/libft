/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:06:18 by wlee              #+#    #+#             */
/*   Updated: 2021/09/13 14:06:23 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	sign;
	int	base;

	count = 0;
	sign = 1;
	base = 0;
	while (!(str[count] >= '0' && str[count] <= '9'))
		count++;
	if (str[count - 1] == '-')
		sign *= -1;
	while (str[count] >= '0' && str[count] <= '9')
	{
		base = (base * 10) + (str[count] - '0');
		count++;
	}
	base *= sign;
	return (base);
}
