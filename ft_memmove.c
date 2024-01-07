/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 23:30:54 by iskartal          #+#    #+#             */
/*   Updated: 2023/07/18 11:41:01 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst2 == src2)
		return (dst2);
	if (dst2 > src2)
	{
		while (len > 0)
		{
			len--;
			dst2[len] = src2[len];
		}
		return (dst);
	}
	else
		return (ft_memcpy(dst2, src2, len));
}
