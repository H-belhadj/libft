/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:05:05 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/10/18 19:57:31 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	char	*p;
	char	*new;

	new = (char *)s1;
	if (!s1 || !set)
		return (NULL);
	while (*new && ft_strchr(set, *new))
		new++;
	j = ft_strlen(new);
	while (j && ft_strchr(set, new[j]))
		j--;
	p = ft_substr(new, 0, j + 1);
	return (p);
}
