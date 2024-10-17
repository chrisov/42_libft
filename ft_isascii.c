/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysov <dchrysov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:54:16 by dchrysov          #+#    #+#             */
/*   Updated: 2024/10/10 15:08:42 by dchrysov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	unsigned char	str[] = "Hello 3!";
	unsigned char	*ptr;

	ptr = str;

	while (*ptr)
	{
		if (ft_isascii(*ptr) == 0)
		{
			printf("The argument contains non ascii chars.\n");
			printf("Comparison with the original isascii() function: ");
			printf("%s\n", ft_isascii(*ptr) == isascii(*ptr) ? "TRUE" : "FALSE");
			return (0);
		}
		ptr++;
	}
	printf("The argument only contains ascii chars.\n");
	printf("Comparison with the original isascii() function: ");
	printf("%s\n", ft_isascii(*ptr) == isascii(*ptr) ? "TRUE" : "FALSE");
	return (0);
}
*/
// unsigned char	str[] = "Hello 3!é";
// unsigned char	str[] = "Hello 3!";