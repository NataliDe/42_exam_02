
#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int start;

	if (argc == 2)
	{
		/* дійти до кінця */
		i = 0;
		while (argv[1][i])
			i++;
		i--; /* останній символ перед '\0' */

		/* пропустити хвостові пробіли/таби */
		while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--;

		if (i >= 0)
		{
			/* знайти початок останнього слова */
			start = i;
			while (start >= 0 && argv[1][start] != ' ' && argv[1][start] != '\t')
				start--;
			start++; /* перший символ слова */

			/* надрукувати останнє слово */
			while (argv[1][start] && argv[1][start] != ' ' && argv[1][start] != '\t')
			{
				write(1, &argv[1][start], 1);
				start++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
