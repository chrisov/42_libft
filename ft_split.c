/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysov <dchrysov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:02:02 by dchrysov          #+#    #+#             */
/*   Updated: 2024/10/17 16:25:15 by dchrysov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static size_t	ft_count_delim(const char *s, char delim)
{
	int	res;

	res = 0;
	while (*s)
	{
		if (*s == delim)
			res++;
		s++;
	}
	return (res);
}

char	**ft_split(const char *s, char delim)
{
	char	**table;
	char	**ptr;
	size_t	str_len;
	size_t	i;

	i = 0;
	str_len = 0;
	table = (char **)malloc(ft_count_delim(s, delim) + 1);
	if (table == NULL)
		return (NULL);
	ptr = table;
	while (*s)
	{
		if (*s == delim)
		{
			*table = (char *)malloc(str_len + 1);
			if (*table == NULL)
				return (NULL);
			strlcpy(*table, *ptr, str_len + 1);
			*ptr[str_len] = '\0';
			printf("%s\n", *ptr);
			*ptr += str_len;
			str_len = 0;
			ptr++;
			s++;
		}
		printf("%c\n", *s);
		str_len++;
		s++;
	}
	while (i < ft_count_delim(s, delim + 1))
		free(table[i]);
	free(table);
	return (NULL);
}
int	main(void)
{
	const char	*s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char		c = ' ';
	char		**res = ft_split(s, c);
	for (size_t i = 0; i < ft_count_delim(s, c); i++)
		printf("%s", res[i]);
	return (0);
}