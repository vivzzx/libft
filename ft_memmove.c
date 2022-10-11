/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:41:42 by video-fl          #+#    #+#             */
/*   Updated: 2022/09/16 15:41:44 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len > ft_strlen(dst))
		return (0);
	while (i != len)
	{
		((char *)dst)[i] = ((char *)src)[i];
		//printf("i: %zu\n", i);
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char		dst[] = "lorem ipsum dolor sit a";
	const char	src[] = "lorem ipsum dolor sit amet";
	char		dst1[] = "lorem ipsum dolor sit a";
	const char	src1[] = "lorem ipsum dolor sit amet";

    // Teste da libreria original 
    printf("\n*-* Oficial Test *-*");
    printf("\n\tTest 1:\n\t\tDst Before: %s | Src: %s", dst, src);
    memmove(dst, src, 22);
    printf("\n\t\tDst After : %s | Src: %s\n", dst, src);
    
    // Teste da  minha libreria 
    printf("\n*-* My function Test *-*");
    printf("\n\tTest 2:\n\t\tDst Before: %s | Src: %s", dst1, src1);
    printf("\n");
    ft_memmove(dst1, src1, 22);
    printf("\n\t\tDst After : %s | Src: %s\n", dst1, src1);
    return (0);
}
*/