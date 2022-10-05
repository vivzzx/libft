/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:42:04 by video-fl          #+#    #+#             */
/*   Updated: 2022/10/01 12:24:53 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			sizesrc;

	i = 0;
	sizesrc = ft_strlen(src);
	if (size == 0)
		return (sizesrc);
	if (src == 0)
		return (0);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sizesrc);
}
/*
int	main(void)
{
    const char src[] = "Eu gosto de suco de maçã e também de baguetes";
    char dst[] = "Destination";
    //int test1;
    int test2;

    // Teste da libreria original
    // test1 = strlcpy(dst, src, 24);
    // printf("\n*-* Oficial Test *-*");
    // printf("\n\tTest 1: %d\n\n", test1);

    // Teste da  minha libreria
    printf("\n*-* My function Test *-*");
    printf("\nBEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: 24\n", src, dst);
    test2 = ft_strlcpy(dst, src, 24);
    //printf("\n\tTest 2: %d\n\n", test2);
    printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tretorno: %d\n\n", src, dst, test2);

    return (0);
} 
para testar o modo oficial:, usar a seguinte flag depois do comando gcc: -lbsd;
incluir tb a library: #include <bsd/string.h>
*/