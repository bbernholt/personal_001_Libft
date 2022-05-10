/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 08:13:01 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/10 08:13:49 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int tolower(int c)
{
    if(c <= 90 && c >= 65)
    {
        return (c + 32);
    }
    else
    {
        return (c);
    }
}