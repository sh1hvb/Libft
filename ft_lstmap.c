/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:27:12 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/14 17:36:10 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list result;
    t_list new;
    void *tmp;
    if(!lst)
        return (0);
    result = 0;
    while (lst)
    {
         tmp = f(lst->content);
         new = tmp;
         if(!new)
         {
            ft_lstclear(&result,del);
            return (0);
         }
         ft_lstadd_back(&result,new);
    }
    new = 0;
    return (result);
    
}