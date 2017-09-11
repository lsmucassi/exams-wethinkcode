/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 10:37:25 by exam              #+#    #+#             */
/*   Updated: 2017/08/09 10:51:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 3)
		ft_putchar('\n');
	else
	{
		while (argv[2][i] != '\0')
		{
			if (argv[1][j] == argv[2][i])
			{
				j++;
				i++;
			}
			else
				i++;
		}
		if (ft_strlen(argv[1]) == j)
				ft_putchar('1');
		else
			ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
