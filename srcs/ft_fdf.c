/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:53:21 by litoulza          #+#    #+#             */
/*   Updated: 2018/03/27 18:53:26 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		ft_fdf(char *argv)
{
	t_env	fdf;

	ft_bzero(&fdf, sizeof(t_env));
	ft_create_map(argv, &fdf);
	ft_mlx(&fdf);
	free(*(fdf.map.map));
	ft_bzero(&fdf, sizeof(t_env));
	return (0);
}
