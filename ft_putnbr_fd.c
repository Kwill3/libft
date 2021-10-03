/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:36:41 by wlee              #+#    #+#             */
/*   Updated: 2021/10/03 11:36:44 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	uns_i;

	uns_i = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		uns_i = (unsigned int)(n * -1);
	}
	else
		uns_i = (unsigned int)n;
	if (uns_i < 10)
	{
		ft_putchar_fd(uns_i + '0', fd);
		return ;
	}
	else
		ft_putnbr_fd(uns_i / 10, fd);
	ft_putnbr_fd(uns_i % 10, fd);
}
