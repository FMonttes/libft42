/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:19:46 by fmontes           #+#    #+#             */
/*   Updated: 2023/10/18 13:21:04 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}

/*int	main()
{
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('5'));
}*/
