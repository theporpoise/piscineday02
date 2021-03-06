/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 11:56:15 by mgould            #+#    #+#             */
/*   Updated: 2016/10/27 19:54:43 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = -1;
	while (i++ < 8)
	{
		j = i;
		while (j++ < 9)
		{
			k = j;
			while (++k < 10)
			{
				ft_putchar(('0' + i));
				ft_putchar(('0' + j));
				ft_putchar(('0' + k));
				if ((i + j) < 15)
				{
					ft_putchar((','));
					ft_putchar((' '));
				}
			}
		}
	}
	ft_putchar(('\n'));
}
