/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 21:16:29 by wlee              #+#    #+#             */
/*   Updated: 2021/09/13 21:16:31 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *pattern, size_t len)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (pattern[0] == '\0')
		return (str);
	while (str[i])
	{
		count = 0;
		while ((pattern[count] == str[i + count]) && str[i + count])
		{
			if (pattern[count + 1] == '\0' || count >= len)
			{
				return (&str[i]);
			}
			count++;
		}
		i++;
	}
	return (0);
}
