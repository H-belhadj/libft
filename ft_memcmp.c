/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:34:20 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/10/26 21:55:55 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				rest;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	rest = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			rest = str1[i] - str2[i];
			break ;
		}
		i++;
	}
	return (rest);
}
/*
int main()
{
	char s1[] = "a";
	char s2[] = "A";
	printf("%d",ft_memcmp(s1, s2, 1));
	return 0;
}*/