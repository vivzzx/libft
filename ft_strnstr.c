/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:43:24 by video-fl          #+#    #+#             */
/*   Updated: 2022/10/26 12:26:43 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *n, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*str;

	i = 0;
	str = (char *)haystack;
	n_len = ft_strlen(n);
	if (n[0] == '\0')
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while ((str[i + j] != '\0') && (n[j] != '\0')
			&& (str[i + j] == n[j]) && (i + j < len))
			j++;
		if (j == n_len)
			return (str + i);
		i++;
	}
	return (0);
}
/*
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
*/
