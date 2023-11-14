/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:28:11 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/14 15:30:28 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(!lst)
        return;
    del(lst->content);
    free(lst);
}