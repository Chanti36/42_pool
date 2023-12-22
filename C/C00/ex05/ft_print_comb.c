/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:10:44 by sgil-moy          #+#    #+#             */
/*   Updated: 2023/06/08 10:29:46 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	output [3];
	char	tab [2];

	tab [0] = ',';
	tab [1] = ' ';
	output[0] = '0';
	while (output[0] <= '7')
	{
		output[1] = output[0] + 1;
		while (output[1] <= '9')
		{
			output[2] = output[1] + 1;
			while (output[2] <= '9')
			{
				write(1, &output, sizeof(output));
				if (output[0] != '7' || output[1] != '8' || output[2] != '9')
				{
					write(1, &tab, sizeof(tab));
				}
				++output[2];
			}
			++output[1];
		}
		++output[0];
	}
}
