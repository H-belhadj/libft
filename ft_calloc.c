/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:09:03 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/10/23 18:21:11 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc (count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, size * count);
	return (str);
}
/*
int main()
{
	char *s = ft_calloc(5, 1);
}*/
