/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:06:38 by wlee              #+#    #+#             */
/*   Updated: 2021/10/03 18:06:39 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev_bonus(char *str, int len)
{
	int	start;
	int	end;

	start = 0;
	end = len;
	while (start < end)
	{
		ft_swap_bonus(&str[start], &str[end]);
		start++;
		end--;
	}
}
