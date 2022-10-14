/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:43:07 by video-fl          #+#    #+#             */
/*   Updated: 2022/10/14 12:34:11 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*str;

	a = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == a)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char s[] =  "Lorem ipsum";
	char c = 'i';
    char *result1;
    char *result2;
	size_t n  = 7;

    // Original library test 
    printf("\n*-* Oficial Test *-*");
    result1 = memchr(s, c, n);
    printf("\n\tResult 1 = %s\n", result1);
    // My library test 
    printf("\n*-* My function Test *-*");
    result2 = ft_memchr(s, c, n);
    printf("\n\tResult 2 = %s\n", result2);
    
    return(0);
}
*/
