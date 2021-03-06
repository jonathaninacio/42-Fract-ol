/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expose.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:14:18 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 02:32:29 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                     ft_expose(t_data)                       |
**                                                             |
**               return a simple redraw functon,               |
**                      MLX EXPOSE HOOK,                       |
*/

int		ft_expose(t_data *z)
{
	ft_redraw(z);
	return (0);
}
