/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grdalmas <grdalmas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 17:49:13 by grdalmas          #+#    #+#             */
/*   Updated: 2018/11/01 18:09:32 by grdalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdlib.h>

static int		ft_find_end(char *buf, int start)
{
	int i;

	i = 0;
	while (buf[start])
	{
		if (buf[start] == END_LINE || buf[start] == '\0')
			break ;
		start++;
		i++;
	}
	return (i);
}

static int		ft_stop(char *buf)
{
	int start;

	start = 0;
	while (buf[start])
	{
		if (buf[start] == END_LINE)
			return (1);
		start++;
	}
	return (0);
}

static void		ft_read(int *len, int fd, char **buf_mem)
{
	char buf[BUFF_SIZE + 1];
	char *tmp;

	tmp = NULL;
	while ((*len = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[*len] = '\0';
		tmp = *buf_mem;
		*buf_mem = ft_strjoin(*buf_mem, buf);
		free(tmp);
		tmp = NULL;
		if (ft_stop(*buf_mem))
			break ;
	}
}

int				get_next_line(int const fd, char **line)
{
	int			len;
	int			end;
	static char	*buf_mem[MAX_FD];
	char		*tmp;

	tmp = NULL;
	len = 0;
	end = 0;
	if (line == NULL || BUFF_SIZE <= 0 || fd < 0 || fd > MAX_FD)
		return (-1);
	if (buf_mem[fd] == NULL)
		buf_mem[fd] = ft_strnew(BUFF_SIZE + 1);
	if (!(ft_stop(buf_mem[fd])) && buf_mem[fd] != NULL)
		ft_read(&len, fd, &buf_mem[fd]);
	if (len < 0 || buf_mem[fd] == NULL)
		return (-1);
	end = ft_find_end(buf_mem[fd], 0);
	*line = ft_strsub(buf_mem[fd], 0, end);
	if (len == 0 && !(ft_strlen(buf_mem[fd])))
		return (0);
	tmp = buf_mem[fd];
	buf_mem[fd] = ft_strsub(buf_mem[fd], end + 1, ft_strlen(buf_mem[fd]));
	free(tmp);
	return (1);
}
