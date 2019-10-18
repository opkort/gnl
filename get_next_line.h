/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgenesis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 20:32:11 by pgenesis          #+#    #+#             */
/*   Updated: 2019/10/17 18:40:38 by pgenesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <unistd.h>
# include <fcntl.h>
 
# define BUFF_SIZE 5
typedef struct tail{
    int fd;
    char *hist;
    struct tail *next;
} s_tail;

int get_next_line(const int fd, char **line);
#endif
