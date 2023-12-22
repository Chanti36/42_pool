/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:12:42 by sgil-moy          #+#    #+#             */
/*   Updated: 2023/06/08 10:47:12 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			write(1, "-", 1);
			nb *= -1;
			ft_putnbr(nb);
		}		
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_write((nb % 10) + '0');
		}
		else
		{
			ft_write(nb + '0');
		}
	}
}
