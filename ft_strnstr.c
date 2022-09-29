/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:43:24 by video-fl          #+#    #+#             */
/*   Updated: 2022/09/16 15:43:25 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t  i;
	size_t  j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while ((needle[i] == haystack[i]) && (needle[i] != '\0'))
		{
            
			if (needle[i] == haystack[i])
			{
				result[r] = needle[i];
				i++;
			}

		}
		result[r] = needle[i];
		i++;
	}
	return (0);
}

int	main(void)
{
	const char	*largestring;
	const char	*smallstring;
    char *ptr;
    char *ptr1;

    largestring = "Foo Bar Baz BOIAS";
    smallstring = "Bar";
    
    // Teste da libreria original 
    ptr = strnstr(largestring, smallstring, 8);
    printf("\t*-* Oficial Test *-*");
    printf("\n\tTest 1: %s\n\n", ptr);
    // Teste da  minha libreria 
    printf("*-* My function Test *-*");
    ptr1 = ft_strnstr(largestring, smallstring, 8);
    printf("\n\tTest 2: %s\n\n", ptr); 
}