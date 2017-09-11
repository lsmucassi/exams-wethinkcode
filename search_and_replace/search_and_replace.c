/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 09:36:23 by exam              #+#    #+#             */
/*   Updated: 2017/07/19 10:56:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = i;
	if (argc != 4)
		write(1, "\n",1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{
				argv[1][i] = argv[3][j];
			}
			i++;
		}
		i = 0;
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
