/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:47:36 by rpercy            #+#    #+#             */
/*   Updated: 2022/06/11 14:48:30 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*duplicate;

	i = 0;
	while (src[i])
	{
		i++;
	}
	duplicate = (char *)malloc(i * sizeof(char));
	if (!duplicate)
	{
		duplicate = NULL;
		return (duplicate);
	}
	else
	{
		i = 0;
		while (src[i])
		{
			duplicate[i] = src[i];
			i++;
		}
		duplicate[i] = '\0';
		return (duplicate);
	}
}
/*
int	main(void)
{
	char	str[] = "hello";
	printf("%s\n", ft_strdup(str));
}*/
