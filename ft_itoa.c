/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:18:13 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/10/26 21:51:16 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_mitro(int mitro)
{
	int	i;

	i = 0;
	if (mitro <= 0)
	{
		i++;
		mitro *= -1;
	}
	while (mitro)
	{
		i++;
		mitro = mitro / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*khaba3;
	int		i;
	long	nbr;

	nbr = n;
	khaba3 = malloc(sizeof(char) * (ft_mitro(nbr) + 1));
	if (!khaba3)
		return (NULL);
	i = ft_mitro(nbr);
	khaba3[0] = '-';
	khaba3[i] = '\0';
	if (nbr < 0)
		nbr *= -1;
	i--;
	if (nbr == 0)
		khaba3[0] = 0 + '0';
	while (nbr)
	{
		khaba3[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	return (khaba3);
}
/*
int main()
{
	printf("%s",ft_itoa(788));
	return 0;
}*/