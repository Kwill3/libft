/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:19:44 by wlee              #+#    #+#             */
/*   Updated: 2021/09/14 11:26:15 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		len;
	char	*last;

	i = 0;
	len = ft_strlen(*str);
	last = 0;
	while (i <= len)
	{
		if (c == str[i])
			last = str[i];
		i++;
	}
	return (last);
}
