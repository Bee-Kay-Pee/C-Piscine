/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:33:19 by rpercy            #+#    #+#             */
/*   Updated: 2022/06/07 12:46:47 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = argc - 1;
	a = 0;
	if (argc > 1)
	{
		while (i > 0)
		{
		a = 0;
			while (argv[i][a] != '\0')
			{
				write (1, &argv[i][a], 1);
			a++;
			}
			write(1, "\n", 1);
		i--;
		}
	}
	return (0);
}
