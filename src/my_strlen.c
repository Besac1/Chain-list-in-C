/*
** my_strlen.c for my_strlen in
** /home/besac1/Bureau/Projets/DEVC/JOUR3/cholle_a/my_strlen
** 
** Made by CHOLLET Axel
** Login   <cholle_a@etna-alternance.net>
** 
** Started on  Thu Oct 20 11:04:03 2016 CHOLLET Axel
** Last update Thu Oct 20 11:06:56 2016 CHOLLET Axel
*/

int	my_strlen(char *str)
{
  int	count;

  count = 0;
  while (*str != '\0')
    {
      count++;
      str++;
    }
  return (count);
}
