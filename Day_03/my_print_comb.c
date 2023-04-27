int my_putchar(char c);

int my_print_comb (void)
{
      int i, k, j;  

      for (i = 0; i <= 7; i++)
      {
            for (k = 0; k <= 8; k++)
            {
                  for (j = 0; j <= 9; j++)
                  {
                        my_putchar(i + '0');
                        my_putchar(k + '0');
                        my_putchar(j + '0');
                        my_putchar(',');
                  }
            }
      }
      return 0;
}