/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:56:53 by sgil-moy          #+#    #+#             */
/*   Updated: 2023/06/21 17:34:40 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '\t' || base[i] == '\n' || base[i] == '\v')
			return (0);
		if (base[i] == '\f' || base[i] == '\r' || base[i] == ' ')
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
		}
		++i;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	check_sign(char *nbr)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while(nbr[i])
	{
		if (nbr == '-')
			sign *= -1;
		++i;		
	}
	return (sign);
}

int	check_val (char *c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if(*c == base[i]
			return (i);
		++i;
	}
	return (-1);
}

int	pow(int val)
{
	int	val;
	
	val	= 1;
	while (val > 0)
		val * =10;
	return (val);	
}

int	to_decimal(char *num, char *base)
{
	//sum the products(value of each digit in the base by the digit val)
	int	length;
	int	result;
	int	val;

	length = 0;
	result = 0;
	while (num[length])
		++length;
	while (length > 0)
	{
		val = check_val(num[length], base);
		if(val == -1)
			return (-1);
		result += (val * pow(length));
		--length;
	}
	return (result);
}

char	*to_base(char* result, int num, int num_length, int num_pos, char *base)
{
	if (num > 9)
	{
		tobase();
		result[] = ...
	}
	else
	{
		result[0] = base[num];
	}
	return (result);
}

//void    ft_write(char *base, long int nbr, long length)
//{
//    if (nbr >= length)
//    {
//        ft_write(base, (nbr / length), length);
//        write(1, &base[nbr % length], 1);
//    }
//    else
//        write (1, &base[nbr], 1);
//}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int	num;
	if(check_base(base_from != 1) || check_base(base_to) != 1)
		return (NULL);
	num = to_decimal(nbr, base_from);
	if(num == -1)
		printf("%s","error");		
	else
		to_base(result, num, base_to);
	return (result);
}
