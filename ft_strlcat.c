/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:31:17 by wlee              #+#    #+#             */
/*   Updated: 2021/09/10 17:31:19 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = ft_strlen(dst);
	if (size <= count || size == 0)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && count + i < size - 1)
	{
		dst[count + i] = src[i];
		i++;
	}
	dst[count + i] = '\0';
	return (count + ft_strlen(src));
}
