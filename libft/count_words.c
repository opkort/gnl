/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgenesis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 23:10:21 by pgenesis          #+#    #+#             */
/*   Updated: 2019/09/24 23:14:55 by pgenesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	count_words(const char *s, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s != '\0')
				s++;
			i++;
		}
		else
			while (*s == c && *s != '\0')
				s++;
	}
	return (i);
}
