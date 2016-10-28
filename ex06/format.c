/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 15:38:53 by mgould            #+#    #+#             */
/*   Updated: 2016/10/27 19:01:29 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	get_counts(int count, int count2, int comp)
{
	;
}

void	ft_putnbr(int nb)
{
	int count2;
	int comp;
	int count;
	int i;
	
	i = 0;
	comp = nb;
	count = 0;
	count2 = 0;

	get_counts(count, count2, comp);

	while (comp > 10)
	{
		count++;
		count2++;
		comp = comp / 10;
	}

	int num_array[count];

	while (count >= 0)
	{
		num_array[count] = (nb % 10);
		count--;
		nb = nb / 10;		
	}

	while (i <= count2)
	{
		ft_putchar('0' + num_array[i]);
		i++;
	}
}

int		main(void)
{
	ft_putnbr(420);
	return (0);
}
