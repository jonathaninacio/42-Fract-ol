/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rainbowshit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:20:04 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:28:09 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                  ft_rainbowshit(t_data)                     |
**                                                             |
**               COLORS! F*CKING COLOOOOOOOORS                 |
**                 YEAH unicorn puke!!!1!11!                   |
*/

void	ft_rainbowshit(t_data *z, int x)
{
	if (z->red > 0 && z->gre == 255)
		z->red = z->red - x;
	else if (z->gre > 0 && z->blu == 255)
		z->gre = z->gre - x;
	else if (z->blu > 0 && z->red == 255)
		z->blu = z->blu - x;
	else if (z->red < 255 && z->gre == 0)
		z->red = z->red + x;
	else if (z->gre < 255 && z->blu == 0)
		z->gre = z->gre + x;
	else if (z->blu < 255 && z->red == 0)
		z->blu = z->blu + x;
}
