/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:55:14 by litoulza          #+#    #+#             */
/*   Updated: 2018/03/27 18:55:16 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		ft_mlx(t_env *fdf)
{
	fdf->mlx_ptr = mlx_init();
	ft_window(fdf);
	ft_init(fdf);
	fdf->win_ptr = mlx_new_window(fdf->mlx_ptr, fdf->win_length,
			fdf->win_width, "fdf");
	mlx_key_hook(fdf->win_ptr, ft_key_hook, fdf);
	mlx_expose_hook(fdf->win_ptr, ft_expose_hook, fdf);
	mlx_loop(fdf->mlx_ptr);
	return (0);
}
