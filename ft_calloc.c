/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:26:55 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/05 17:16:16 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
void *p;
p = (char *)malloc(size * count);
if(!p)
return NULL;
ft_bzero(p,size);
return p;
}