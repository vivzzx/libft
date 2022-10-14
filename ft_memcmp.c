/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:43:15 by video-fl          #+#    #+#             */
/*   Updated: 2022/10/14 13:44:01 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)(str1[i]) - (unsigned char)(str2[i]));
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char s1[] = "abcdef";
    char s2[] = "ABCDEF";
    size_t n = 6;
    int result1;
    int result2;

    // Original library test 
    printf("\n*-* Oficial Test *-*");
    result1 = memcmp(s1, s2, n);
    printf("\n\tResult 1 = %d\n", result1);

    // My library test 
    printf("\n*-* My function Test *-*");
    result2 = ft_memcmp(s1, s2, n);
    printf("\n\tResult 2 = %d\n", result2);

    return (0);
}
*/
