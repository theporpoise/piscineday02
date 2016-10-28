/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 15:38:53 by mgould            #+#    #+#             */
/*   Updated: 2016/10/27 18:45:48 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	printf("you got here\n");	
	int count2;
	int comp;
	int count;
	int i;
	i = 0;
	comp = nb;
	count = 0;
	count2 = 0;

	while (comp > 10)
	{
		printf("inside comp loop \n");
		count++;
		count2++;
		comp = comp / 10;
	}

	int num_array[count];

	while (count >= 0)
	{
		printf("inside array loop");
		num_array[count] = (nb % 10);
		printf(" count is %d and nb mod is %d", count, (nb % 10));
		printf("numarray at count is %d\n", num_array[count]);
		count--;
		nb = nb / 10;		
	}

	while (i <= count2)
	{
		//printf("number i %d\n", num_array[i]);
		ft_putchar('0' + num_array[i]);
		i++;
	}
}

int		main(void)
{
	ft_putnbr(420);
	return (0);
}
