/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:32:33 by fmontes           #+#    #+#             */
/*   Updated: 2023/10/18 13:14:43 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (8);
	return (0);
}

/*int	main()
{
	printf("%d\n", ft_isalnum('q'));
	printf("%d\n", ft_isalnum('Q'));
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", ft_isalnum('+'));
}*/
