/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:25:05 by sgil-moy          #+#    #+#             */
/*   Updated: 2023/06/06 16:43:02 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	result = 'N';
	if (n < 0)
	{
		write(1, &result, 1);
	}
	else
	{
		result = 'P';
		write(1, &result, 1);
	}
}
