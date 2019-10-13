/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgenesis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 20:39:06 by pgenesis          #+#    #+#             */
/*   Updated: 2019/10/13 21:07:00 by pgenesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int main(int ac, char ** av)
{
	int fd;
	char *line;

	if (ac ==1)
		fd = 0;
	else if (ac == 2)
		fd = open(av[1], O_RDONLY);
	else
		return(2);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
}
