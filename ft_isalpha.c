/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:05:51 by fmontes           #+#    #+#             */
/*   Updated: 2023/10/18 13:15:12 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1024);
	}
	return (0);
}
/*int	main()
{
	printf("%d\n", isalpha('c'));
	printf("%d\n", isalpha('Q'));
	printf("%d\n", isalpha('+'));
	printf("\n");
	printf("%d\n", ft_isalpha('c'));
	printf("%d\n", ft_isalpha('Q'));
	printf("%d\n", ft_isalpha('+'));

}*/
