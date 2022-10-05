/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:42:18 by video-fl          #+#    #+#             */
/*   Updated: 2022/09/16 15:42:19 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = ft_strlen(dst);
    j = 0;
    if (size <= i)
        return (size + ft_strlen(src));
    while (src[j] != '\0' && i + 1 < size)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (ft_strlen(dst) + ft_strlen(&src[j]));
} 

int	main(void)
{
    const char src[] = "e jaca.";
    char dst[] = "Eu gosto de suco d";
    //char *test1 = NULL;
    int test2;
    /*
    // Teste da libreria original
    test1 = strlcat(dst, src, 5);
    printf("\n*-* Oficial Test *-*");
    printf("\n\tTest 1: %s\n\n", test1);
    */
    // Teste da  minha libreriar
    printf("\n*-* My function Test *-*");
    printf("\nBEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: 5\n", src, dst);
    test2 = ft_strlcat(dst, src, 10);
    //printf("\n\tTest 2: %d\n\n", test2);
    printf("AFTER\n\tsrc: %s\n\tdes: %s\n size dst: %d\n\n", src, dst, test2);
    
    return (0);
} 
