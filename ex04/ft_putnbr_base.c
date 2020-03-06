/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktevot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 00:00:37 by ktevot            #+#    #+#             */
/*   Updated: 2019/09/12 17:05:50 by ktevot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbrbase(int nbr, char *base)
{
	unsigned	int h;
	int				i;

	i = 0;
	while (base[i])
		i++;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		h = nbr;
	}
	h = nbr;
	if (h >= i)
		ft_putnbrbase(h / i, base);
	ft_putchar(base[h % i]);
}
