/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:19:44 by wlee              #+#    #+#             */
/*   Updated: 2021/09/13 14:19:47 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(*string);
	while (i <= len)
	{
		if (c == string[i])
			return (&string[i]);
		i++;
	}
	return (0);
}
