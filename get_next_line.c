/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgenesis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 20:26:17 by pgenesis          #+#    #+#             */
/*   Updated: 2019/10/17 19:33:00 by pgenesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

char *get_tail(char *tail, char **line)
{
	char *p_endl;

	p_endl = NULL;
	if (tail)
	{
		if ((p_endl = ft_strchr(tail, '\n')))
		{
			*p_endl = '\0';
			*line = ft_strdup(tail);
			ft_strcpy(tail, ++p_endl);
		}
		else
		{
			*line = ft_strdup(tail);
			ft_strclr(tail);
		}
	}
	else
		*line = ft_strnew(1);
	return (p_endl);
}

int get_next_line(const int fd, char **line)
{
	static s_tail *tail;
	//static char *tail;
	char buf[BUFF_SIZE + 1];
	int cb;
	char *tmp;
	char *p_endl;

	tail->fd = fd;
	*line = ft_strnew(1);
	p_endl = get_tail(tail->hist, line);
	while(!p_endl && (cb = read(tail->fd, buf, BUFF_SIZE)))
	{
		buf[cb] = '\0';
		if ((p_endl = ft_strchr(buf, '\n')))
			{
				*p_endl = '\0';
				p_endl++;
				tail->hist = ft_strdup(p_endl);
			}
		tmp = *line;
		*line = ft_strjoin(*line, buf);
		if (tmp)
			free(tmp);
	}
	return (cb || strlen(tail->hist) || strlen(*line) ? 1 : 0);	
}
