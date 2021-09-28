/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:27:46 by wlee              #+#    #+#             */
/*   Updated: 2021/09/15 13:27:47 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*dup;

	dup = malloc(nmemb * size);
	if (dup == NULL)
		return (NULL);
	else
	{
		ft_bzero(dup, nmemb * size);
		return (dup);
	}
}
