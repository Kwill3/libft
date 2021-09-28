/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:32:48 by wlee              #+#    #+#             */
/*   Updated: 2021/09/15 13:32:50 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*dup;

	dup = (unsigned char *)s;
	while (n--)
	{
		if (*dup != (unsigned char)c)
			dup++;
		else
			return (dup);
	}
	return (0);
}
