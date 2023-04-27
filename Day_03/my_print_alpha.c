int my_putchar(char c);

int my_print_alpha(void)
{
    char letter;

    my_putchar('\n');

    letter = 97;
    while (letter <= 122) {
        my_putchar(letter);
        letter = letter + 1;
    }
    my_putchar('\n');
    my_putchar('\n');
    return 0;
}