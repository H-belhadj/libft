/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:26:04 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/10/24 23:39:29 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	while (i < ft_strlen(s1))
		s3[j++] = s1[i++];
	i = 0;
	while (i < ft_strlen(s2))
		s3[j++] = s2[i++];
	s3[j] = '\0';
	return (s3);
}
/*
int main()
{
	printf("%s",ft_strjoin("HEllo ","MAGUIRE"));
	return 0;
}*/