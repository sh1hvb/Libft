/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:25:24 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/15 18:17:38 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main()
// {
//      t_list node0;
//     t_list node1;
//     t_list node2;
//     t_list node3;
//     node0.content = "habibi";
//     node0.next = &node1;
//     node1.content = "habiibi 1";
//     node1.next = &node2;
//     node2.content = "habibi 2";
//     node2.next = &node3;
//     node3.content = "habiibi 3";
//     node3.next = NULL;
//     t_list *p = &node0;
//     t_list *a = ft_lstlast(p);
//     printf("%s",a->content);
// }