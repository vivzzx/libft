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
	unsigned int	i;

	//if (len > ft_strlen(dst) || (dst == NULL && src == NULL))
	if (!dst && !src)
	{
		printf("\n\tpassou no NULL\n");
		return (NULL);
	}
	if (dst < src)
	{
		printf("\n if \n");
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			//printf("i: %zu\n", i);
			i++;
		}
	}
	else {
		printf("\nelse\n");
		i = len;
		printf("\ni: %d\n", i);
		while (i > 0)
		{
			((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
			printf("\ni: %d\n", i);
			i--;
		}
	}
	return (dst);
}

int	main(void)
{
	size_t len = 5;
	char		dst[] = "dest";
	char		dst1[] = "dest";

	const char	src[] = "source";

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
}