/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:10:53 by fmontes           #+#    #+#             */
/*   Updated: 2023/10/18 13:15:54 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}

/*int	main()
{
	printf("%d\n", isdigit('1'));
	printf("%d\n", isdigit('+'));
	printf("\n");
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('+'));
}*/
