/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 11:36:37 by lmucassi          #+#    #+#             */
/*   Updated: 2017/08/15 12:09:48 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

void	ft_epur_str(char *s)
{
	char sp;
	int i;

	sp = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t')
		{
			if (sp == 1)
				ft_putchar(' ');
			sp = 0;
			ft_putchar(s[i]);
		}
		else if (sp == 0)
			sp = 1;
		i++;
	}
}

int		main(int ac, char **gv)
{
	if (ac == 2)
		ft_epur_str(gv[1]);
	ft_putchar('\n');
	return (0);
}
