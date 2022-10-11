/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:42:57 by video-fl          #+#    #+#             */
/*   Updated: 2022/09/16 15:42:58 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
    // Var testes
    char s1[] = "oisi";
    char s2[] = "aruch";
    int res1;
    int res2;
    size_t n = 4;

    // Teste da libreria original 
    printf("\n*-* Oficial Test *-*");
    res1 = strncmp(s1, s2, n);
    printf("\n\tTest 1:\n\t\ts1: %s / s2: %s -> Result: %d", s1, s2, res1);

    // Teste da minha lib 
    printf("\n*-* My function Test *-*");
    res2 = ft_strncmp(s1, s2, n);
    printf("\n\tTest 2:\n\t\ts1: %s / s2: %s -> Result: %d", s1, s2, res2);

    return (0);
} */