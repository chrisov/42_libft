/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysov <dchrysov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:18:39 by dchrysov          #+#    #+#             */
/*   Updated: 2024/10/10 13:50:51 by dchrysov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		ch -= 32;
	return (ch);
}

// int	main(void)
// {
// 	const char	str[] = "Hello World 3 !";
// 	const char	*ptr;
// 
// 	ptr = str;
// 	while (*ptr)
// 	{
// 		printf("%c", ft_toupper(*ptr));
// 		ptr++;
// 	}
// 	printf("\n");
// 	return (0);
// }