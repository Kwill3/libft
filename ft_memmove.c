/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:34:48 by wlee              #+#    #+#             */
/*   Updated: 2021/09/15 13:34:50 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dup_d;
	const unsigned char	*dup_s;

	dup_d = dest + n;
	dup_s = src + n;
	while (n--)
		*--dup_d = *--dup_s;
	return (dest);
}
