/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:58:54 by bbernhol          #+#    #+#             */
/*   Updated: 2022/04/29 21:39:05 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int main(void)
{
    ft_putnbr_fd(5, 1);
    write(1, "\n", 1);
    ft_putstr_fd("Text", 2);
    ft_putendl_fd("another_Text", 2);
}