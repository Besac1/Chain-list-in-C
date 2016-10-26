/*
** my_putstr.c for my_putstr in
** /home/besac1/Bureau/Projets/DEVC/JOUR3/cholle_a/my_putstr
** 
** Made by CHOLLET Axel
** Login   <cholle_a@etna-alternance.net>
** 
** Started on  Thu Oct 20 10:23:28 2016 CHOLLET Axel
** Last update Thu Oct 20 11:00:40 2016 CHOLLET Axel
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
