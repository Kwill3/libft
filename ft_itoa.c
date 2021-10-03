/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:08:05 by wlee              #+#    #+#             */
/*   Updated: 2021/10/03 18:08:06 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*s;
	int				i;
	unsigned int	nb;

	i = 0;
	nb = 0;
	s = malloc(sizeof(s) * (ft_intlen_bonus(n) + 1));
	if (s == NULL)
		return (NULL);
	if (n < 0)
		nb = (unsigned int)(n * -1);
	else if (n == 0)
		s[i++] = nb + '0';
	else
		nb = (unsigned int)n;
	while (nb != 0)
	{
		s[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		s[i++] = '-';
	ft_strrev_bonus(s, i - 1);
	s[i] = '\0';
	return (s);
}
