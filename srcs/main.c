/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:23:08 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 04:07:53 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int		main(int argc, char **argv)
{
	t_data z;

	ft_set_data(&z);
	multi_hook(&z);
	argv = NULL;
	if (argc != 1)
	{
		ft_putendl("Le programme possede une interface graphique");
		ft_putendl("merci de le lancer sans arguments\n \
				\nCeci est un bonus! ;-)");
		return (0);
	}
	ft_kelfrac(z);
	mlx_loop(z.mlx);
	return (0);
}
