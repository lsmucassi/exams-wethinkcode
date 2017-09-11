/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 11:15:11 by lmucassi          #+#    #+#             */
/*   Updated: 2017/09/04 11:17:15 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		issp(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

int		main(int ac, char **av)
{
	int	i;
	int	fws;
	int	fwlen;

	if (ac > 1)
	{
		fws = 0;
		while (issp(av[1][fws]) && av[1][fws] != '\0')
			fws++;
		fwlen = 0;
		while (!issp(av[1][fws + fwlen]))
			fwlen++;
		i = fws + fwlen;
		while (av[1][i] != '\0')
		{
			while (issp(av[1][i]) && av[1][i] != '\0')
				i++;
			if (av[1][i] == '\0')
				break;
			if (ac == 0)
				write(1, " ", 1);
			ac = 0;
			while (!issp(av[1][i]))
			{
				write(1, av[1] + i++, 1);
			}
		}
		if (fwlen && ac == 0)
			write(1, " ", 1);
		write(1, av[1] + fws, fwlen);
	}
	write(1, "\n", 1);
	return (0);
}
