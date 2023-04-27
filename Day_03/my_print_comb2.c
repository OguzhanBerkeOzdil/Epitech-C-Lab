int my_putchar(char c);

int my_print_comb2(void)
{
      int i, k, j, h;  

      for (i = 0; i <= 9; i++)
      {
            for (k = 0; k <= 8; k++)
            { 
                  for (j = 0; j <= 9; j++)
                  {
                        for (h = 0; h <= 9; h++)
                        {
                        my_putchar(i + '0');
                        my_putchar(k + '0');
                        my_putchar(' ');
                        my_putchar(j + '0');
                        my_putchar(h + '0');
                        my_putchar(',');
                        }
                  }
            }
      }
      return 0;
}

