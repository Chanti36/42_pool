/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:16:52 by sgil-moy          #+#    #+#             */
/*   Updated: 2023/06/21 12:46:48 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_length(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	length;
	int	sep_length;

	length = 0;
	sep_length = 0;
	while (sep[sep_length])
		++sep_length;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			++j;
		length += j;
		++i;
		if (i < size)
			length += sep_length;
	}
	length += 1;
	return (length);
}

void	concat(char *dest, char *src, int *i)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dest[*i] = src[j];
		++j;
		++*i;
	}
}

void	copy_str(char *arr, int size, char **strs, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		concat(arr, strs[i], &length);
		++i;
		if (i < size)
		{
			concat(arr, sep, &length);
		}
	}
	arr[length] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		length;
	int		i;
	int		j;

	j = 0;
	i = 0;
	length = 0;
	if (size == 0)
	{
		arr = (char *)malloc(0);
		return (arr);
	}
	length = check_length(size, strs, sep);
	arr = (char *)malloc(length);
	copy_str(arr, size, strs, sep);
	return (arr);
}
