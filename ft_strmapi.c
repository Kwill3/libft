/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:47:00 by wlee              #+#    #+#             */
/*   Updated: 2021/10/03 11:47:02 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	uns_i;
	char			*str;

	uns_i = 0;
	str = malloc(sizeof(*s) * (ft_strlen(s) + 1 ));
	if (str == NULL)
		return (NULL);
	while (s[uns_i])
	{
		str[uns_i] = f(uns_i, s[uns_i]);
		uns_i++;
	}
	str[uns_i] = '\0';
	return (str);
}
