/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee <wlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:06:28 by wlee              #+#    #+#             */
/*   Updated: 2021/10/03 18:06:29 by wlee             ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_bonus(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}