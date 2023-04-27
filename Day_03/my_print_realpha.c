int my_putchar(char c);

int my_print_realpha(void)
{
    char letter;

    my_putchar('\n');
    
    letter = 122;
    while (letter >= 97) {
        my_putchar(letter);
        letter = letter - 1;
    }
    my_putchar('\n');
    my_putchar('\n');
    return 0;
}