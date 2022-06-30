/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:19:28 by rpercy            #+#    #+#             */
/*   Updated: 2022/05/31 09:47:46 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			++i;
		}
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "aAaAaAbbb";
	ft_str_is_lowercase(str);
	printf("%d", ft_str_is_lowercase(str));
}*/
