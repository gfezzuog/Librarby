/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:12:42 by dgioia            #+#    #+#             */
/*   Updated: 2022/05/31 18:15:44 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" 

static void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putnbr(nbr / 10);
		ft_writef('8');
	}
	else if (nbr < 0)
	{
		ft_writef('-');
		ft_putnbr(-nbr);
	}
	else
	{
		if (nbr > 9)
		{
			ft_putnbr(nbr / 10);
		}
		ft_writef(48 + nbr % 10);
	}
}

int	ft_countnbrf(int nbr)
{
	int	count;
	int	n;

	count = 0;
	n = nbr;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			n = n / 10;
			count++;
		}
		n *= -1;
		count++;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	count++;
	ft_putnbr(nbr);
	return (count);
}
