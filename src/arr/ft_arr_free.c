//
// Created by Vasco Varas on 22-01-20.
//

#include "../../includes/libft.h"

void	ft_arr_free(char **array)
{
	int i;

	i = 0;
	while (array && array[i])
	{
		free(array[i]);
		i++;
	}
	if (array && *array)
		free(array);
}