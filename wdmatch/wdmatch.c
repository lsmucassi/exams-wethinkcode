/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 10:04:55 by exam              #+#    #+#             */
/*   Updated: 2017/05/13 12:48:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_wdmatch(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i] != '\0' && str2[j] != '\0')
	{
		if (str1[i] == str2[j])
		{
			i++;
			j++;
		}
		else
			j++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		i = ft_strlen(argv[1]);
		j = ft_wdmatch(argv[1], argv[2]);	
		if ( j == i)
		{
			j = 0;
			while ( j < i)
			{
				write(1, &argv[1][j], 1);
				j++;
			}
		}
		write(1, "\n", 1);
	}
	
	return (0);
}
