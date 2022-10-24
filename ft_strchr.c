/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:42:28 by video-fl          #+#    #+#             */
/*   Updated: 2022/09/22 13:55:29 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

int main(void) {
	const char str[] = "teste";
	const char ch = 'e';
	char *ret;
	char *ret2;

	// --> teste oficial:
	ret = strchr(str, ch);
	printf("Test Oficial Lib\n");
	printf("\tString after |%c| is - |%s|\n", ch, ret);
	// --> teste my lib:
	ret2 = ft_strchr(str, ch);
	printf("\nTest My Lib\n");
	printf("\tString after |%c| is - |%s|\n", ch, ret2);
	return 0;
}