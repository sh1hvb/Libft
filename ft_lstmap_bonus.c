/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:27:12 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/18 15:47:22 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;
	void	*temp;

	if (!lst)
		return (0);
	result = 0;
	while (lst)
	{
		temp = f(lst->content);
		new = ft_lstnew(temp);
		if (!new)
		{
			ft_lstclear(&result, del);
			del(temp);
			return (0);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	new = 0;
	return (result);
}
// void	*example_function(void *content)
// {
// 	int *value = (int *)content;
// 	int *result = (int *)malloc(sizeof(int));
// 	*result = *value * 2;
// 	return (result);
// }

// // Function to free the content of a node
// void	free_content(void *content)
// {
// 	free(content);
// }

// int		main(void)
// {
// 	t_list *list = NULL;
// 	// t_list *mapped_list = NULL;
// 	t_list *new_node;
// 	int a = 0;
// 	while (++a <= 5)
// 	{
// 		printf("%i\n", a);
// 		new_node = ft_lstnew(&a);
// 		// printf("%i",i);
// 		ft_lstadd_back(&list, new_node);
// 	}
// 	printf("Original List: %d\n", a);
// 	while (list)
// 	{
// 		printf("%d ", *(int *)(list->content));
// 		list = list->next;
// 	}
// 	// printf("\n");
// 	// mapped_list = ft_lstmap(current, &example_function, &free_content);
// 	// printf("Mapped List: ");
// 	// current = mapped_list;
// 	// while (current)
// 	// {
// 	// 	printf("%d ", *(int *)(current->content));
// 	// 	current = current->next;
// 	// }
// 	printf("\n");

// 	// Cleaning up memory
// 	// ft_lstclear(&list, &free_content);
// 	// ft_lstclear(&mapped_list, &free_content);

// 	return (0);
// }
