/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:46:37 by sgil-moy          #+#    #+#             */
/*   Updated: 2023/06/09 14:01:01 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check_max(int *arr, int max, int index)
{
	if (arr[index] <= 10 - max + index)
	{
		return (1);
	}
	return (0);
}

void	update(int *arr, int max, int index)
{
	if (check_max(arr, max, index) == 0)
	{
		if (index > 0)
		{
			++arr [index - 1];
			update(arr, max, index - 1);
			arr [index] = arr [index - 1] + 1;
		}
	}
}

void	ft_write(int *comb, int max)
{
	char	c;
	int		index;

	index = 0;
	while (index < max)
	{
		c = comb[index] + '0';
		write(1, &c, 1);
		++index;
	}
	if (comb [0] < 10 - max)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	cifras [10];
	int	i;

	if (n > 9)
	{
		n = 9;
	}
	if (n < 1)
	{
		n = 1;
	}
	i = 0;
	while (i < n)
	{
		cifras[i] = i;
		++i;
	}
	while (check_max(cifras, n, n - 1) == 1)
	{
		ft_write(cifras, n);
		++cifras [n - 1];
		update(cifras, n, n - 1);
	}
}
