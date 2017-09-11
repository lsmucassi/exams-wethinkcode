/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 17:24:35 by lmucassi          #+#    #+#             */
/*   Updated: 2017/09/05 17:45:52 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	PRINT(char c)
{
	write(1, &c, 1);
}

void	ft_puts(char *str)
{
	while (*str && *str != ' ' && *str != '\t')
		write(1, str++, 1);
}

int		main(int ac, char **gv)
{
	int i;
	int len;

	i = 0;
	if (ac == 2)
	{
		len = 0;
		while (gv[1][i])
			i++;
		i--;
		len = i;
		while ( len > 0)
		{
			while ((gv[1][i] != ' ' && gv[1][i] != '\t') && i > 0)
					i--;
			ft_puts(gv[1] + i + (i == 0 ? 0 : 1));
			if (i > 0)
				PRINT(' ');
			while ((gv[1][i] == ' ' || gv[1][i] == '\t') && i > 0)
				i--;
			len = i;
		}
	}
	PRINT('\n');
	return (0);
}
