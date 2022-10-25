/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:42:39 by video-fl          #+#    #+#             */
/*   Updated: 2022/09/16 15:42:40 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	while (size >= 0)
	{
		if (s[size] == (char)c)
			return ((char *)s + size);
		size--;
	}
	return (NULL);
}
/*
int	main(void)
{
    const char str[] = "poi.ee.com";
    const char ch = 'o';
    char *ptr1;
    char *ptr2;

    // Teste da libreria original 
    ptr1 = strrchr(str, ch);
    printf("\n*-* Oficial Test *-*");
    printf("\n\tTest 1: %s\n\n", ptr1);
    // Teste da  minha libreria 
    printf("*-* My function Test *-*");
    ptr2 = ft_strrchr(str, ch);
    printf("\n\tTest 2: %s\n\n", ptr2);
}
*/