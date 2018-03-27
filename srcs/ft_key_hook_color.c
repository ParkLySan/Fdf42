/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook_color.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:54:56 by litoulza          #+#    #+#             */
/*   Updated: 2018/03/27 18:54:58 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_key_hook_color(int keycode, t_env *fdf)
{
	if (keycode == R)
		fdf->color.red -= 20;
	if (keycode == G)
		fdf->color.green -= 20;
	if (keycode == B)
		fdf->color.blue -= 20;
}
