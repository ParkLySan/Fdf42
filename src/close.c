#include "../include/fdf.h"

void	ft_close(t_env *e)
{
	free(e);
	exit(0);
	return ;
}
