/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:12:09 by sgil-moy          #+#    #+#             */
/*   Updated: 2023/06/07 10:28:10 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		num[2];
	char	c[5];

	num[0] = 0;
	num[1] = 0;
	c[2] = ' ';
	while (num[0] < 99)
	{
		num[1] = num[0] + 1;
		while (num[1] < 100)
		{
			c[0] = (num[0] / 10) + '0';
			c[1] = (num[0] % 10) + '0';
			c[3] = (num[1] / 10) + '0';
			c[4] = (num[1] % 10) + '0';
			write(1, c, 5);
			if (c[0] != '9' || c[1] != '8' || c[3] != '9' || c[4] != '9')
			{
				write(1, ", ", 2);
			}
			num[1]++;
		}
		num[0]++;
	}
}