/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:41:58 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/16 21:51:20 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// int check(const char s)
// {
// 	while (ft_isdigit(s))
// 	{

// 		if (a > 0 && result >= 9223372036854775807)
// 			return (-1);
// 		if (a < 0 && result > 9223372036854775807)
// 			return (0);
// 	}
// }

// int	ft_atoi(const char *str)
// {
// 	int	a;
// 	int	i;
// 	size_t	result;

// 	a = 1;
// 	i = 0;
// 	result = 0;
// 	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
// 		i++;
// 	if (str[i] == '+' || str[i] == '-')
// 	{
// 		if (str[i] == '-')
// 		{
// 			a = -1;
// 			i++;
// 		}
// 		else if (str[i] == '+')
// 			i++;
// 	}
// 	while (ft_isdigit(str[i]))
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		if (a > 0 && result >= 9223372036854775807)
// 			return (-1);
// 		if (a < 0 && result > 9223372036854775807)
// 			return (0);
// 		i++;
// 	}
// 	return (result * a);
// }

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static void	ft_handle_sign(const char *str, int *index, int *sign)
{
	if (str[*index] == '+' || str[*index] == '-')
	{
		if (str[*index] == '-')
		{
			*sign = -1;
			(*index)++;
		}
		else if (str[*index] == '+')
		{
			(*index)++;
		}
	}
}

int	ft_atoi(const char *str)
{
	int		index;
	int		sign;
	size_t	result;

	index = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[index]))
		index++;
	ft_handle_sign(str, &index, &sign);
	while (ft_isdigit(str[index]))
	{
		result = result * 10 + (str[index] - '0');
		if (sign > 0 && result >= 9223372036854775807)
			return (-1);
		if (sign < 0 && result > 9223372036854775807)
			return (0);
		index++;
	}
	return (result * sign);
}

// #include <stdlib.h>

// int	main(void)
// {
// 	char p[] = "+-95855";
// 	printf("%d \n", ft_atoi(p));
// 	printf("%d \n", atoi(p));
// }