/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:28:14 by fmontes           #+#    #+#             */
/*   Updated: 2023/10/18 16:02:24 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destt;
	unsigned char	*srcc;

	i = 0;
	destt = (unsigned char *)dest;
	srcc = (unsigned char *) src;
	while (i < n)
	{
		*destt = *srcc;
		destt++;
		srcc++;
		i++;
	}
	return (dest);
}
