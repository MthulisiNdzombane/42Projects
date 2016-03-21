#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_pushswap
{
	int		*pile_a;
	int		length_a;
	int		*pile_b;
	int		length_b;
}				t_pushswap;

void			push_a(t_pushswap *data);
void			push_b(t_pushswap *data);

void			swap_a(t_pushswap *data);
void			swap_b(t_pushswap *data);
void			swap_ab(t_pushswap *data);

void			rotate_a(t_pushswap *data);
void			rotate_b(t_pushswap *data);
void			rotate_ab(t_pushswap *data);

void			reverse_rotate_a(t_pushswap *data);
void			reverse_rotate_b(t_pushswap *data);
void			reverse_rotate_ab(t_pushswap *data);

#endif