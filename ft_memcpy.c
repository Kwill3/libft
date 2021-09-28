/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:34:41 by wlee              #+#    #+#             */
/*   Updated: 2021/09/15 13:34:42 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dup_d;
	const unsigned char	*dup_s;

	dup_d = dest;
	dup_s = src;
	while (n--)
		*dup_d++ = *dup_s++;
	return (dest);
}
