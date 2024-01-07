/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 23:32:41 by iskartal          #+#    #+#             */
/*   Updated: 2023/07/14 23:32:44 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = (int)ft_strlen(s)+1;
	while (a--)
	{
		if (*(s + a) == (char)c)
			return ((char *)s + a);
	}
	return (NULL);
}
