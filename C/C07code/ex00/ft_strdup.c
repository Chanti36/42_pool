/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil-moy <sgil-moy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:44:27 by sgil-moy          #+#    #+#             */
/*   Updated: 2023/06/21 12:03:52 by sgil-moy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*p;

	i = 0;
	while (src[i])
		++i;
	p = (char *) malloc (i * sizeof(char));
	i = 0;
	while (src[i])
	{
		p[i] = src[i];
		++i;
	}
	p[i] = '\0';
	return (p);
}
