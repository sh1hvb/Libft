/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:32:04 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/19 14:27:43 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear(char ***arr, int i)
{
	while (i >= 0)
		free((*arr)[i--]);
	free(*arr);
}

static int	count_word(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c && str[i])
		{
			i++;
			continue ;
		}
		count++;
		while (str[i] != c && str[i])
		{
			i++;
		}
	}
	return (count);
}

static void	fill_arr(char **arr, const char *str, char c)
{
	size_t	i;
	int		index;
	size_t	isep;

	i = 0;
	index = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			continue ;
		}
		isep = i;
		while (str[i] != c && str[i])
			i++;
		arr[index] = (char *)malloc(i - isep + 1);
		if (! arr[index])
		{
			clear(&arr, index);
			return ;
		}
		ft_strlcpy(arr[index], str + isep, i - isep + 1);
		index++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		wrdcnt;

	if (!s)
		return (0);
	wrdcnt = count_word(s, c);
	arr = malloc((wrdcnt + 1) * sizeof(char *));
	if (!arr)
		return (0);
	fill_arr(arr, s, c);
	arr[wrdcnt] = 0;
	return (arr);
}
// int main() {
//     char *a="123";
//     char c =' ';
//     char **arr= ft_split(a,c);
//     size_t i = 0;
//        printf("%p\n",arr);
//     return (0);
// }