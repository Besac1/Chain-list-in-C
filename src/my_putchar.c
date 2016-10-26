/*
** my_putchar.c for my_putchar.c in /home/cholletax/Bureau/Projets/C
** 
** Made by CHOLLET Axel
** Login   <cholle_a@etna-alternance.net>
** 
** Started on  Mon Oct 17 10:50:18 2016 CHOLLET Axel
** Last update Sat Oct 22 17:13:55 2016 CHOLLET Axel
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
