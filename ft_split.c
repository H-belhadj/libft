/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:18:31 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/10/24 23:38:55 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_world(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

static	char	**ft_split_world(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		simobb;

	dest = malloc(sizeof(char *) * (ft_count_world(s, c) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_count_world(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		simobb = 0;
		while (s[i] && s[i] != c)
		{
			simobb++;
			i++;
		}
		dest[j] = ft_substr(s, (i - simobb), simobb);
		j++;
	}
	dest[j] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = ft_split_world(s, c);
	return (dest);
}
/*
int main()
{
	char s[] = "**hello**maguir**";
	char c = '*';
	int i;
	i=0;
	char **arr;
	arr = ft_split(s, c);
	while(arr[i])
	{
		printf("%s\n",arr[i]);
		i++;
	}
	return (0);
}*/