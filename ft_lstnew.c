/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:30:03 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/13 21:21:06 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;
    new = malloc(sizeof(t_list));
    if(!new)
        return NULL;
    new->content = content;
    new->next = NULL;
    return new;
}
// int main()
// {
//     int c =  1;
//     t_list *b = ft_lstnew(&a);
//     printf("%d",*((int *)b->content));
// }