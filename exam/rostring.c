#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    int start = 0;
    int fin = 0;
    if( argc >= 2)
    {
        while(argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        {
            i++;
        }
        start = i;
        while(argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
        {
            i++;
        }
        fin =  i;
           while(argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        {
            i++;
        }
        while(argv[1][i])
        {
            while(argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
            i++;
            if(!argv[1][i])
            break;
            while(argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t')) 
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            write(1," ", 1);
        }
        while(start < fin)
        {
            write(1, &argv[1][start], 1);
            start++;
        }

    }
    write(1,"\n", 1);
}