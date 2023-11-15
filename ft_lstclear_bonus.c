/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:31:55 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/15 18:16:51 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

    if (!lst || !del)
        return ;
	p = *lst;
	while (p)
	{
		*lst = p->next;
		del(p->content);
		free(p);
		p = *lst;
	}
}
