/*
** my_strcpy.c for my_strcpy in
** /home/besac1/Bureau/Projets/DEVC/JOUR4/cholle_a/my_strcpy
** 
** Made by CHOLLET Axel
** Login   <cholle_a@etna-alternance.net>
** 
** Started on  Fri Oct 21 10:32:39 2016 CHOLLET Axel
** Last update Tue Oct 25 10:57:24 2016 CHOLLET Axel
*/

int	my_strlen(char *str);

char	*my_strcpy(char *dest, char *src)
{
  int	iteration;
  
  iteration = 0;
  while (iteration <= my_strlen(src))
    {
      dest[iteration] = src[iteration];
      iteration++;
    }
  return dest;
}
