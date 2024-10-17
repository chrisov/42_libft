/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchrysov <dchrysov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:34:17 by dchrysov          #+#    #+#             */
/*   Updated: 2024/10/10 15:09:57 by dchrysov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(unsigned char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')
		|| (ch >= '0' && ch <= '9'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	unsigned char	str[] = " ";
// 	unsigned char	*ptr;
// 
// 	ptr = str;
// 
// 	while (*ptr)
// 	{
// 		if (ft_isalnum(*ptr) == 0)
// 		{
// 			printf("There are non alphanumeric chars in the argument.\n");
// 			return (0);
// 		}
// 		ptr++;
// 	}
// 	printf("The argument contains only alphanumeric chars.\n");
// 	return (0);
// }
// 
// unsigned char	str[] = "Hello2";
// unsigned char	str[] = "2";
// unsigned char	str[] = "H";
// unsigned char	str[] = ".";
// unsigned char	str[] = " ";
// unsigned char	str[] = "He llo2";
// unsigned char	str[] = "H/ello2";