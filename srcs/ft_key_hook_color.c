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
