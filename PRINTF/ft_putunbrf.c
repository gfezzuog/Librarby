/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbrf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:12:42 by dgioia            #+#    #+#             */
/*   Updated: 2022/05/31 18:15:46 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" 

static	void	ft_putunbr(unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_putunbr(nbr / 10);
		ft_putunbr(nbr % 10);
	}
	if (nbr <= 9)
		ft_writef(48 + nbr);
}

int	ft_countunbrf(unsigned int nbr)
{
	int				count;
	unsigned int	n;

	count = 0;
	n = nbr;
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	count++;
	ft_putunbr(nbr);
	return (count);
}
