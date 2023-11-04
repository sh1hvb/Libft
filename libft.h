/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:26:18 by mchihab           #+#    #+#             */
/*   Updated: 2023/11/03 20:34:20 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*int ft_isalpha(char c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isprint(int c);*/
void *ft_memove(void *dst, const void *src, size_t len);
size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dest, char *src, size_t n );
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
