/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:56:39 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/10/20 15:40:24 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;

	if (!s)
		return (NULL);
	s1 = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
// #include <stdio.h>
// int main ()
// {
// 	char *s  = "hello";
// 	char *rs =  ft_strmapi(s, f);

// 	printf("%s", rs);
// }
