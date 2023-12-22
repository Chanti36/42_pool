/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:04:33 by sgil-moy          #+#    #+#             */
/*   Updated: 2023/06/20 15:17:58 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	length;
	int	*arr;

	length = max - min;
	if (max <= min)
		return (NULL);
	if (length < 0)
		length *= -1;
	arr = (int *) malloc (length * sizeof(int));
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		++i;
	}
	return (arr);
}
