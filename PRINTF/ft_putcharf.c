/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:48:57 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/03/03 15:48:57 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" 

int	ft_putcharf(char *c)
{
	write(1, &c, 1);
	return (1);
}