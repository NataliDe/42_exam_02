#ifndef FOOD_FILL_H
# define FOOD_FILL_H

typedef struct	s_point
{
	int	x;
	int	y;
}				t_point;

void	flood_fill(char **tab, t_point size, t_point begin);

#endif