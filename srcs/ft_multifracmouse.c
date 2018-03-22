/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multifracmouse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:19:49 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:35:59 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	ft_multifracmouse(t_data *z)
{
	if (z->fracmouse == 1)
		ft_fracmouse1(z);
	else if (z->fracmouse == 2)
		ft_fracmouse2(z);
	else if (z->fracmouse == 3)
		ft_fracmouse3(z);
	else if (z->fracmouse == 4)
		ft_fracmouse4(z);
	else if (z->fracmouse == 5)
		ft_fracmouse5(z);
	else if (z->fracmouse == 6)
		ft_fracmouse6(z);
}
