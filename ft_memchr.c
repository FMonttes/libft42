/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:50:59 by fmontes           #+#    #+#             */
/*   Updated: 2023/10/18 16:01:25 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;
	char	*str;
	size_t	i;

	s1 = (char *)s;
	str = NULL;
	i = 0;
	while (i < n && *s1)
	{
		if (*s1 == c)
		{
			str = (char *)s1;
			break ;
		}	
		i++;
		s1++;
	}
	return ((char *)str);
}
