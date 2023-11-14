/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:13:26 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/13 15:22:27 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		result;
	char	c;

	result = 1;
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, "8", 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		c = n % 10 + 48;
	}
	else
		c = n + '0';
	write(fd, &c, 1);
}
// int main()
// {

//     int fd = open("foo.txt", O_CREAT| O_RDWR);
//     ft_putnbr_fd(-2147483648,fd);
//     return (0);
// }
