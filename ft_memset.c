/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:35:01 by wlee              #+#    #+#             */
/*   Updated: 2021/09/13 22:35:02 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*dup;

	dup = str;
	while (n)
	{
		*dup = c;
		dup++;
		n--;
	}
	return (str);
}