/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:45:19 by video-fl          #+#    #+#             */
/*   Updated: 2022/11/08 17:18:53 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	my_func(unsigned int i, char *s)
{
	printf("My function: index = %d and %s\n", i, s);
}

int	main(void)
{
	char	*s;

	s = "hello";
	printf("\n*-* My function Test *-*");
	printf("\n\tTest 1:\n");
    ft_striteri(s, my_func);
	return (0);
}
*/