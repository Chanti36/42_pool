/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:18:26 by sgil-moy          #+#    #+#             */
/*   Updated: 2023/06/20 16:16:30 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;
	int	*arr;

	length = max - min;
	if (length <= 0)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		arr[i] = min + i;
		++i;
	}
	*range = arr;
	return (length);
}
