/*
** my_params_in_list.h for my_params_in_list in
** /home/besac1/Bureau/Projets/DEVC/JOUR9/my_params_in_list
** 
** Made by CHOLLET Axel
** Login   <cholle_a@etna-alternance.net>
** 
** Started on  Wed Oct 26 09:39:36 2016 CHOLLET Axel
** Last update Wed Oct 26 18:54:18 2016 CHOLLET Axel
*/

/* Prevent including file twice */

#ifndef		_MY_PARAMS_IN_lIST_
# define	_MY_PARAMS_IN_LIST_

#include <stdlib.h>

typedef struct	s_list
{
  char		*param;
  struct s_list	*next;
}		t_list;

/* PROTOTYPES */

t_list		*my_params_in_list(int argc, char **argv);
t_list		*add_param_to_list(t_list **list, char *param);
void		my_putstr(char *str);
void		my_putchar(char c);
int		my_strlen(char *src);
char		*my_strcpy(char *dest, char *src);

/* ---------- */

#endif		/* END _MY_PARAMS_IN_LIST_ */
