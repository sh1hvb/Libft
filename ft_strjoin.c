/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:57:54 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 16:48:03 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *p;
	int i;
	size_t lens1 = ft_strlen((char *)s1);
	size_t lens2 = ft_strlen((char *)s2);

	p = (char*)malloc(sizeof(char ) * lens1 + lens2 + 1);
	if(!p)
	return NULL;
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	int j = 0;
	while (s2[j])
	{
		p[i] =s2[j];
		j++;
		i++;
	}
	p[i]='\0';
	return p;
}