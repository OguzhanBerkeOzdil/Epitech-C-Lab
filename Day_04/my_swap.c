void my_putchar(char c);

void my_swap (int* a, int* b)
{


      my_putchar(*a + '0');
      my_putchar(*b + '0');
      my_putchar(' ');

      int temp = *a;
      *a =  *b;
      *b = temp;

      my_putchar(*a + '0');
      my_putchar(*b + '0');
      
}