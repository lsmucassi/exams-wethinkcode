/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 09:04:40 by exam              #+#    #+#             */
/*   Updated: 2017/08/16 10:25:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int *arr;
	int i;

	i = 0;
	arr = (int *)malloc(sizeof(int) + 1);
	if (!arr)
		return (0);
	else
	{
		if (end < start)
			while (start >= end)
			{
				arr[i] = start;
				start--;
				i++;
			}
		else
			while (start <= end)
			{
				arr[i] = start;
				i++;
				start++;
			}	
	}
	return (arr);
} 
