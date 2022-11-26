/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:43:14 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/10/26 23:16:55 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*ps;

	ps = (char *)b;
	i = 0;
	while (i < len)
	{
		ps[i] = c;
		i++;
	}
	return ((void *)ps);
}
/*int main()

{
	char s[] = "hello";
	char c = '0';
	printf("%s",ft_memset(s, c, 5));
	return 0;
}*/
