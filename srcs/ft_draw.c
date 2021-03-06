/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:53:12 by litoulza          #+#    #+#             */
/*   Updated: 2018/03/27 18:53:14 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_draw_single_collumn(t_env *fdf)
{
	while (fdf->point.y < ((fdf->map.nblin - 1) * fdf->point.spc))
	{
		ft_point_collumn_x_two(fdf);
		ft_bresenham(fdf);
		fdf->map.y++;
		fdf->point.y += fdf->point.spc;
		fdf->point.x1 = fdf->point.x2;
		fdf->point.y1 = fdf->point.y2;
	}
}

void	ft_draw_collumns(t_env *fdf)
{
	fdf->map.x = 0;
	fdf->point.x = 0;
	while (fdf->point.x < fdf->map.nbcol * fdf->point.spc)
	{
		fdf->point.y = 0;
		fdf->map.y = 0;
		ft_point_collumn_x_one(fdf);
		ft_draw_single_collumn(fdf);
		fdf->map.x++;
		fdf->point.x += fdf->point.spc;
	}
}

void	ft_draw_single_line(t_env *fdf)
{
	while (fdf->point.x < (fdf->map.nbcol - 1) * fdf->point.spc)
	{
		ft_point_line_x_two(fdf);
		ft_bresenham(fdf);
		fdf->map.x++;
		fdf->point.x += fdf->point.spc;
		fdf->point.x1 = fdf->point.x2;
		fdf->point.y1 = fdf->point.y2;
	}
}

void	ft_draw_lines(t_env *fdf)
{
	fdf->map.y = 0;
	fdf->point.y = 0;
	while (fdf->point.y < fdf->map.nblin * fdf->point.spc)
	{
		fdf->map.x = 0;
		fdf->point.x = 0;
		ft_point_line_x_one(fdf);
		ft_draw_single_line(fdf);
		fdf->map.y++;
		fdf->point.y += fdf->point.spc;
	}
}

void	ft_draw(t_env *fdf)
{
	ft_draw_collumns(fdf);
	ft_draw_lines(fdf);
}
