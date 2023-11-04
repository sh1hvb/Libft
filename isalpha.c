/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:19:54 by mchihab           #+#    #+#             */
/*   Updated: 2023/10/31 08:59:26 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_isalpha(char c){
	if ((c >='a' && c <= 'z') ||( c >= 'A' && c <= 'Z'))
		return 1;
	return 0;
}
