/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:18:07 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/10/28 15:30:49 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*results;

	if (s == NULL)
		return (ft_strdup("\0"));
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	if (len >= ft_strlen(s) - start)
		results = (char *)malloc(sizeof(char) * ft_strlen(s) - start + 1);
	else
		results = (char *)malloc(sizeof(char) * (len + 1));
	if (!results)
		return (NULL);
	s = s + start;
	while (s[i] && i < len)
	{
		results[i] = s[i];
		i++;
	}
	*(results + i) = '\0';
	return (results);
}
