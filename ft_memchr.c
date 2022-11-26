/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:38:46 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/10/28 13:43:25 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	if (c == 0 && n == 0)
		return (0);
	i = 0;
	while (i < n)
	{		
		if (str[i] == (unsigned char)c)
		{
			return ((unsigned char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
	char s[] = "hellobro";
	char c = 'e';
	printf("%s",ft_memchr(s, c ,8));
	return 0;
}*/
