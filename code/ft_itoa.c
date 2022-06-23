/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:38:27 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/10 15:45:22 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static void	ft_isnegative(char *ptr_char, int *i, long int *new_n);
static void	ft_ispositive(char *ptr_char, int *i, long int *new_n);
static void	ft_fill_term(char *ptr_char);
static void	ft_strrev(char *reverse, int length);

char	*ft_itoa(int n)
{
	char		*ptr_char;
	int			i;
	long int	new_n;

	i = 0;
	new_n = n;
	ptr_char = (char *)malloc(12);
	ft_fill_term(ptr_char);
	if (ptr_char != NULL)
	{
		if (new_n == 0)
		{
			ptr_char[i] = '0';
			(i)++;
		}
		else if (new_n < 0)
			ft_isnegative(ptr_char, &i, &new_n);
		else
			ft_ispositive(ptr_char, &i, &new_n);
		ft_strrev(ptr_char, ft_strlen(ptr_char));
		ptr_char[i] = '\0';
	}
	return (ptr_char);
}

static void	ft_isnegative(char *ptr_char, int *i, long int *new_n)
{
	while (*new_n != 0)
	{
		ptr_char[*i] = (*new_n % 10 * (-1)) + '0';
		*new_n /= 10;
		(*i)++;
	}
	ptr_char[*i] = '-';
	(*i)++;
}

static void	ft_ispositive(char *ptr_char, int *i, long int *new_n)
{
	while (*new_n != 0)
	{
		ptr_char[*i] = (*new_n % 10) + '0';
		*new_n /= 10;
		(*i)++;
	}
	(*i)++;
}

static void	ft_fill_term(char *ptr_char)
{
	int	j;

	j = 0;
	while (j < 12)
	{
		ptr_char[j] = '\0';
		j++;
	}
}

static void	ft_strrev(char *reverse, int length)
{
	char	buffer;
	int		i;
	int		lenght_const;

	i = 0;
	lenght_const = length / 2;
	while (i < lenght_const)
	{
		buffer = reverse[i];
		reverse[i] = reverse[length - 1];
		reverse[length - 1] = buffer;
		length--;
		i++;
	}
}