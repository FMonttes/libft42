/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:07:19 by fmontes           #+#    #+#             */
/*   Updated: 2023/10/18 13:21:25 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}

/*int	main()
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('5'));
}*/
