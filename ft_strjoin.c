/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:19:06 by wlee              #+#    #+#             */
/*   Updated: 2021/09/27 16:19:08 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		len_s1;
	int		len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dest = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1, (len_s1 + 1));
	ft_strlcat(dest, s2, (len_s1 + len_s2 + 1));
	return (dest);
}
