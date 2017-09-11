/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 17:22:28 by lmucassi          #+#    #+#             */
/*   Updated: 2017/08/28 17:37:30 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
void	swap(int *fst, int *snd)
{
	int temp;

	temp = *fst;
	*fst = *snd;
	*snd = temp;
}

t_list		*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *begin;
	t_list *p_n;

	begin = lst;
	while (lst)
	{
		p_n = lst->next;
		while (p_n)
		{
			if (!(*cmp)(lst->data, p_n->data))
				swap(&lst->data, &p_n->data);
			p_n = p_n->next;
		}
		lst = lst->next;
	}
	return (begin);
}
