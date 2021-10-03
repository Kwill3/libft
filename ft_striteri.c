/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:47:00 by wlee              #+#    #+#             */
/*   Updated: 2021/10/03 12:01:56 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	uns_i;

	uns_i = 0;
	if (s && f)
	{
		while (s[uns_i])
		{
			f(uns_i, &s[uns_i]);
			uns_i++;
		}
	}
}
