#include "../include/fdf.h"

char	is_inside(int x, int y, t_env *e)
{
	if ((x >= e->width / 2 || x <= e->width / 2) &&
		(y >= e->height / 2 || y <= e->height / 2))
		return (1);
	return (0);
}
