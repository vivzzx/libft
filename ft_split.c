/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:44:49 by video-fl          #+#    #+#             */
/*   Updated: 2022/11/22 18:47:54 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	//if (len == 1 && c == '\0' && s[i] != c)
	//	return (1);
	while (i < len)
	{
		if (c == '\0' && (i == len - 1 || (len == 1 && s[0] != c)))
		{
			//printf("\ncase 1");
			return (1);
		}
		if ((s[i - 1] == c) && (s[i] != c))
		{
			//printf("\ncase 2");
			words += 1;
		}
		if ((i == 0) && (s[i] != c) && (c != '\0'))
		{
			//printf("\ncase 3");
			words += 1;
		}
		i++;
	}
	return (words);
}

static size_t	len_word(const char *s, char c, size_t pos)
{
	size_t	result;

	result = 0;
	while (s[pos] != c && pos < ft_strlen(s))
	{
		result++;
		pos++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word;
	size_t	i;
	size_t	len;

	word = 0;
	i = 0;
	result = (char **)malloc(((total_words(s, c)) * sizeof(char *)) + 8);
	if (!result)
		return (NULL);
	while (word < total_words(s, c))
	{
		len = 0;
		if ((s[i] != c && s[i - 1] == c) || (s[i] != c && i == 0))
		{
			len = len_word(s, c, i);
			result[word] = ft_substr(s, i, len);
			word++;
			i += len;
		}
		i++;
	}
	result[word] = NULL;
	return (result);
}
/*
int	main(void)
{
	//char	*s = "hello!";
	char	*s = "U";
	char	c = '_';
	char	**result1;

	// My library test
	printf("\n*-* My function Test *-* \n\tTest 1: ");
	printf("\n\t\tString: %s | Delimiter: [%c]\n", s, c);
	printf("\t\tTotal words: %zu\n", total_words(s, c));
	result1 = ft_split(s, c);
	for (size_t i = 0; i <= total_words(s, c); i++)
		printf("index = %zu: %s\n", i, result1[i]);
	return (0);
}
*/
/*
int main()
{
	int i;
	char **m = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse\0",' ');
	for (i = 0; m[i]; i++)
		printf("s = %s\n", m[i]);
	return 0;
}
*/