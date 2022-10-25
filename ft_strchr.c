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
	while (*s != (char)c)
	{
		if (*s == '\0' && (char)c != '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}
/*
int main(void) {
	const char str[] = "teste";
	const char str2[] = "teste";
	const char ch = '\0';
	char *res1;
	char *res2;

	// --> Original library test :
	printf("\n*-* Oficial Test *-*");
	printf("\n\tString before |%c| is - |%s| pos: %p", ch, str, &str);
	res1 = strchr(str, ch);
	printf("\n\tString after |%c| is - |%s| pos: %p\n", ch, res1, &*res1);
	
	// --> My library test :
	printf("\n*-* My function Test *-*");
	printf("\n\tString before |%c| is - |%s| pos: %p", ch, str2, &str2);
	res2 = ft_strchr(str2, ch);
	printf("\n\tString after |%c| is - |%s| pos: %p\n\n", ch, res2, &*res2);
	return 0;
}*/