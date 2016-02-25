/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtedgui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 15:50:24 by dtedgui           #+#    #+#             */
/*   Updated: 2016/02/09 11:14:55 by dtedgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H

# include "ft_printf.h"
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/ioctl.h>
# include <term.h>
# include <termios.h>

typedef struct	s_select
{
	char				*value;
	int					selected;
	struct s_select		*previous;
	struct s_select		*next;
}				t_select;

int		restore_terminal(void);
int		init_raw_mode(void);

void	ft_signals(void);

void	get_key(t_select *main_list);

int		putchar_select(int c);

void	ft_move(int key);

#endif
