/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:37:24 by gabd-el-          #+#    #+#             */
/*   Updated: 2023/01/20 21:58:41 by gabd-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	ptr = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ptr && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
