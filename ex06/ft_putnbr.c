/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:22:03 by mgould            #+#    #+#             */
/*   Updated: 2016/10/27 19:56:15 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
