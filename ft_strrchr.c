/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:43:19 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/13 15:56:51 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)str + len);
	while (len)
	{
		len--;
		if (str[len] == (char)c)
		{
			return ((char *)str + len);
		}
	}
	return (NULL);
}
//  int main()
//  {
//      printf("%s",strrchr(0, 't'));
// }
