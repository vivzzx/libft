/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:44:49 by video-fl          #+#    #+#             */
/*   Updated: 2022/11/16 18:13:26 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// criar uma regra para quando a palavra eh igual o c
static size_t	total_words(const char *s, char c)
{
	int	i;
	int	words;
	int	len;

	i = 0;
	words = 0;
	len = ft_strlen(s);
	if (*s == '\0')
		return (words);
	while (i < len)
	{
		if ((s[i - 1] == c) && (s[i] != c))
			words += 1;
		if ((i == 0) && (s[i] != c))
			words += 1;
		//if (s[i] == c && words)
		i++;
	}
	//if (words == 0)
	//	return (NULL);
	return (words);
}
// liberar com free quando nao tem palavra
static char	*just_word(const char *s, char c, size_t pos)
{
	size_t	i;
	size_t	r;
	size_t	counter;
	char	*result;

	i = pos;
	r = 0;
	counter = 0;
	while (s[pos] != c)
	{
		counter++;
		pos++;
	}
	result = malloc((counter + 1) * sizeof(char));
	if (!result)
	// talvez colocar o free aqui
		return (NULL);
	while (counter > 0)
	{
		result[r] = (char)s[i];
		counter--;
		r++;
		i++;
	}
	result[r] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word;
	size_t	i;

	word = 0;
	i = 0;
	result = (char **)malloc((total_words(s, c)) * sizeof(char *));
	if (!result)
		return (NULL);
	
	while (word < total_words(s, c))
	{
		if ((s[i] != c && s[i - 1] == c) || (s[i] != c && i == 0))
		{
			//result[word] = (char *)malloc(ft_strlen(just_word(s, c, i) + 1)
			//		* sizeof(char *));
			//printf("\t\ta palavra eh: %s\n", just_word(s, c, i));
			result[word] = ft_strdup(just_word(s, c, i));
			word++;
			i += ft_strlen(just_word(s, c, i));
		}
		i++;
	}
	//printf("\nsaiu do loop. word: %zu\n", word);
	//result[word] = ft_strdup("\0");
	return (result);
}
/*
int	main(void)
{
	char	*s;
	char	c;
	char	**result1;

	s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	c = ' ';
	// My library test
	printf("\n*-* My function Test *-*");
	printf("\n\tTest 1:\n");
	printf("\n\tString: %s | Delimiter: [%c]\n", s, c);
	printf("\tTotal words: %zu\n", total_words(s, c));
	result1 = ft_split(s, c);
	
	for (size_t i = 0; i < total_words(s, c); i++)
	{
		printf("index = %zu: %s\n", i, result1[i]);
	}
	return (0);
} */