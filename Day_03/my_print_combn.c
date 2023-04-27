int my_putchar(char c);

int my_print_combn (int n)
{
      if (n > 0 && n <= 9)
      {
            int i,j,k;

            for (i = 0; i <= 9 -n; i++)
            {
                  for ( j = i + 1; j <= 10 -n; j++)
                  {
                        for (k = j + 1; k <= 11 -n; k++)
                        {
                              my_putchar(i + '0');
                              my_putchar(j + '0');
                              my_putchar(k + '0');
                              my_putchar(',');
                              my_putchar(' '); 
                        }

                  }                 
            }                
                 
      }      
      return 0;
}