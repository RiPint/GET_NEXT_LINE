/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 16:51:28 by jerollin          #+#    #+#             */
/*   Updated: 2016/05/27 16:51:32 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

# define BUFF_SIZE 8

int					get_next_line(int const fd, char **line);

typedef	struct		s_get
{
	int				nb_read;
	int				fd;
	int				i;
	char			*read;
	struct s_get	*next;
}					t_get;

#endif
