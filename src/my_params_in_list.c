/*
** my_params_in_list.c for my_params_in_list in
** /home/besac1/Bureau/Projets/DEVC/JOUR9/my_params_in_list
** 
** Made by CHOLLET Axel
** Login   <cholle_a@etna-alternance.net>
** 
** Started on  Wed Oct 26 09:39:19 2016 CHOLLET Axel
** Last update Wed Oct 26 16:41:02 2016 CHOLLET Axel
*/

#include "my_params_in_list.h"

int		*my_params_in_list(int argc, char **argv)
{
  t_list	*list;
  t_list	*tmp;
  int		iteration;

  list = NULL;
  iteration = 0;
  while (iteration < argc)
    {
      list = add_param_to_list(&list, argv[iteration]);
      iteration++;
    }

  tmp = list;
  while (tmp != NULL)
    {
      my_putstr(tmp->param);
      my_putchar('\n');
      tmp = tmp->next;
    }
  return (0);
}

t_list		*add_param_to_list(t_list **list, char *param)
{
  t_list	*node;
  
  node = malloc(sizeof(*node));
  if (node == 0)
    return (0);
  node->next = *list;
  node->param = param;
  *list = node;
  return (node);
}

int		main(int ac, char **av)
{
  my_params_in_list(ac, av);
  return (0);
}
