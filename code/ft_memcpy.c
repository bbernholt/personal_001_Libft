/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:27:22 by bbernhol          #+#    #+#             */
/*   Updated: 2022/07/01 13:32:56 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char				*char_dest;
	char				*char_src;
	unsigned int		i;

	char_dest = (char *)dest;
	char_src = (char *)src;
	i = 0;
	if (dest == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < n)
		{
			char_dest[i] = char_src[i];
			i++;
		}
		return (dest);
	}
}
