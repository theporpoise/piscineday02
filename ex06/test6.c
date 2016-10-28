/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 15:38:53 by mgould            #+#    #+#             */
/*   Updated: 2016/10/27 16:15:21 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putnbr(int nb)
{
	int comp;
	int count;
	comp = nb;
	int print;

	while (nb > 10)
	{
		count++;
		nb = nb / 10;
	}

	while(count > -1)
	{
		//printf("nb is %d \n", nb);
		print = comp - (count * 10);
		ft_putchar((comp + '0'));
		
		while(comp > 10)
		{
			comp = comp / 10;
			count++; 
		}
		ft_putchar((comp % 10) + '0');
		nb = nb - (comp * count * 10);
		printf(" comp times count %d", (comp * count * 10));
		comp = nb;

	}	
	return (0);
}

int		main(void)
{
	ft_putnbr(42);
	return (0);
}
