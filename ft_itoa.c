/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:49:29 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/05/31 18:21:28 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*ft_digit(char *str, long nb, size_t len, int n)
{

	if (nb < 0)
	{
		nb = nb * -1;
		str[0] = '-';
	}
	str[len] = '\0';
	if (n == 0)
	{
		str[len - 1] = '0';
		return (str);
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (*(&str));
}

static int	ft_len(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_len(nb);
	str = (char *)malloc(sizeof (char) * len + 1);
	if (!str)
		return (NULL);
	return (ft_digit(str, nb, len, n));
}
