/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char c;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    while (argv[1][i])
    {
        c = argv[1][i];

        /* a → y: наступна буква (маленькі) */
        if (c >= 'a' && c <= 'y')
            c = c + 1;

        /* A → Y: наступна буква (великі) */
        else if (c >= 'A' && c <= 'Y')
            c = c + 1;

        /* z → a */
        else if (c == 'z')
            c = 'a';

        /* Z → A */
        else if (c == 'Z')
            c = 'A';

        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
