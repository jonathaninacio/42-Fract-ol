/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawpixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:13:11 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 02:32:06 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**        drawpixel(t_data *z, int x, int y, int color)        |
**                                                             |
**           set a color to a pixel with his coord             |
*/

void	drawpixel(int *z, int x, int y, int color)
{
	z[(y * FULLHDX) + (x)] = color;
}
