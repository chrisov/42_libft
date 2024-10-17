/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysov <dchrysov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:45:38 by dchrysov          #+#    #+#             */
/*   Updated: 2024/10/10 13:45:41 by dchrysov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
		ch += 32;
	return (ch);
}

/*
int	main(void)
{
	const char	str[] = "hELLO wORLD 3 !";
	const char	*ptr;

	ptr = str;

	while (*ptr)
	{
		printf("%c", ft_tolower(*ptr));
		ptr++;
	}
	printf("\n");
	return (0);
}
*/