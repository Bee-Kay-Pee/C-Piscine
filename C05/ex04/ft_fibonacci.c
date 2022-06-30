/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 13:22:09 by rpercy            #+#    #+#             */
/*   Updated: 2022/06/06 11:55:06 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int nb)
{
	if (nb < 0)
		return (-1);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	else
		return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(6));
	return (0);
}
*/
