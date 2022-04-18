#include<stdio.h>
#include<stdlib.h>




void
sequential (int files[])
{
  int flag = 0, temp = 0, start, len, x, y;
  printf ("enter the starting position and length of file : ");
  scanf ("%d%d", &start, &len);
  for (x = start; x < (start + len); x++)
    {
      if (files[x] == 0)
	{
	  temp++;
	}
    }

  if (temp == len)
    {
      printf ("the positions where file is stored is\n");
      for (y = start; y < (start + len); y++)
	{
	  files[y] = 1;
	  printf ("%d\n", y);
	}
      printf ("the file is allocated");
    }
  else
    {
      printf ("the file is not allocated");
    }
  int ch;
  printf ("Do you want to enter more files?\n");
  printf ("Press 1 for YES, 0 for NO: ");
  scanf ("%d", &ch);
  if (ch == 1)
    sequential (files);
  else
    exit (0);



}


int
main ()
{
  int files[50];
  for (int i = 0; i < 50; i++)
    {
      files[i] = 0;
    }

  
  sequential (files);
  return 0;
}
