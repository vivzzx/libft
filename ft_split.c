/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:44:49 by video-fl          #+#    #+#             */
/*   Updated: 2022/11/16 23:41:19 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**set_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
	return(NULL);
}
// criar uma regra para quando a palavra eh igual o c
static size_t	total_words(const char *s, char c)
{
	int	i;
	int	words;
	int	len;

	i = 0;
	words = 0;
	len = ft_strlen(s);
	//if (*s == '\0')
	//	return (words);
	
	/* naaaao sei o que fazer com esse terminador caraiooo 
	if (c == '\0')
	{
		printf("\n entrou \n");
		while (s[i] + 1 != c)
		{
			if ((i == 0) && (s[0] != c))
			{
				printf("\n if 1 \n");
				words += 1;
			}
			if ((s[i] == c) && (s[i + 1] != c))
			{
				printf("\n if 2 \n");
				words += 1;
			}
			printf("\n i: %d \n", i);
			i++;
		}
		return (words);
	}
	*/ 
	while (s[i])
	{
		if ((i == 0) && (s[0] != c))
			words += 1;
		if ((s[i] == c) && (s[i + 1] != c) && s[i + 1] != '\0')
			words += 1;
		/* if ((c == '\0') && (s[i] != '0'))
		{
			printf("\t\t entrou no if\n");
			if (s[i - 2] == '\\' && s[i - 1] == '0')
				words += 1;
			if (i == len - 1)
				words += 1;
		} */
		//if (s[i] == c && words)
		i++;
	}
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
	// talvez colocar o free aqui??
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
		return (set_free(result));
	if (total_words(s, c) == 0)
		return (set_free(result));
	while (word < total_words(s, c))
	{
		if ((s[i] != c && s[i - 1] == c) || (s[i] != c && i == 0))
		{
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

int	main(void)
{
	char	*s;
	char	c;
	char	**result1;

	s = "\0aa\0bbb";
	c = '\0';
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
}