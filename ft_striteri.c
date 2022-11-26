/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:48:25 by hbelhadj          #+#    #+#             */
/*   Updated: 2022/10/19 17:04:31 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{	
		f(i, &s[i]);
		i++;
	}
}
// void myf(unsigned int i, char *str)
// {
	// (void )i; 
	// printf("%c",*str);	
// }

// int main()
// {
// 	ft_striteri("Hello World",myf);
// 	return 0;
// }