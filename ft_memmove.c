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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	//size_t j;

	i = 0;
	//j = ft_strlen(dst);
	if (len > ft_strlen(dst))
	{
		//printf("\n\tpassou no if -- len: %zu -- size dst: %zu\n", len, j);
		return (NULL);
	}
	while (i != len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		//printf("i: %zu\n", i);
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	size_t len = 33;
	char		dst[] = "A while back I needed to count to";
	char		dst1[] = "A while back I needed to count to";

	const char	src[] = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";

    // Teste da libreria original 
    printf("\n*-* Oficial Test *-*");
    printf("\n\tTest 1:\n\t\tDst Before: %s | Src: %s", dst, src);
    memmove(dst, src, len);
    printf("\n\t\tDst After : %s | Src: %s\n", dst, src);
    
    // Teste da  minha libreria 
    printf("\n*-* My function Test *-*");
    printf("\n\tTest 2:\n\t\tDst Before: %s | Src: %s", dst1, src);
    //printf("\n");
    ft_memmove(dst1, src, len);
    printf("\n\t\tDst After : %s | Src: %s\n", dst1, src);
    return (0);
} */