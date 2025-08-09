/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysov <dchrysov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:13:22 by dchrysov          #+#    #+#             */
/*   Updated: 2024/12/12 14:14:26 by dchrysov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Locates last occurrence of a character in a string.
 * 
 * @param s String to search.
 * @param c Character to find.
 * @return Pointer to character in string, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s + ft_strlen(s) - 1;
	if (c == '\0')
		return ((char *)(ptr + 1));
	while (*s)
	{
		if (*ptr == c)
			return ((char *)ptr);
		ptr--;
		s++;
	}
	return (NULL);
}
