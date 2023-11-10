/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:42:15 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/09 13:53:44 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ndest;
	unsigned char	*nsrc;

	i = 0;
	ndest = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	if (ndest == nsrc)
	{
		return (ndest);
	}
	while (i < n)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	return (dest);
}
// int main(){
//     char *dest = "ab" ;
//     char *src = "abefe";
//     memcpy(NULL,src,2);
//     // ft_memcpy(dest,src,2);
//     // printf("%s\n",ft_memcpy(dest,src,2));
//     printf("%s\n",memcpy(dest,src,2));
// }