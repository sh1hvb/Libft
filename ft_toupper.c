/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:44:32 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/04 12:44:34 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_toupper(int ch)
{
    if(ch >= 'a' && ch <= 'z')
        ch =- 32;
    return ch;
}