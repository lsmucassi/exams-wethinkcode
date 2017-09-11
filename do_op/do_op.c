/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 09:48:17 by exam              #+#    #+#             */
/*   Updated: 2017/08/02 10:36:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int n1;
	int n2;
	int res;

	n1 = 0;
	n2 = 0;
	res = 0;
	if (argc != 4)
		printf("\n");
	else{
		if (argv[2][1] == '\0'){
			n1 = atoi(argv[1]);
			n2 = atoi(argv[3]);
			if (argv[2][0] == '+'){
				res = n1 + n2;
				printf("%i\n", res);
			}
			else if (argv[2][0] == '-'){
				res = n1 - n2;
				printf("%i\n", res);
			}
			else if (argv[2][0] == '*'){
				res = n1 * n2;
				printf("%i\n", res);
			}
			else if (argv[2][0] == '/'){
				res = n1 / n2;
				printf("%i\n", res);
			}
			else if (argv[2][0] == '%'){
				res = n1 % n2;
				printf("%i\n", res);
			}
			else
				printf("\n");
		}
	}
	return (0);
}
