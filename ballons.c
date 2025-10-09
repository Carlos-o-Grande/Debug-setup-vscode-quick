/*
              █████ █████            █████
             ░░███ ░░███            ░░███
  ███████  ███████  ░███████      ███████   ██████  █████████████    ██████
 ███░░███ ███░░███  ░███░░███    ███░░███  ███░░███░░███░░███░░███  ███░░███
░███ ░███░███ ░███  ░███ ░███   ░███ ░███ ░███████  ░███ ░███ ░███ ░███ ░███
░███ ░███░███ ░███  ░███ ░███   ░███ ░███ ░███░░░   ░███ ░███ ░███ ░███ ░███
░░███████░░████████ ████████    ░░████████░░██████  █████░███ █████░░██████
 ░░░░░███ ░░░░░░░░ ░░░░░░░░      ░░░░░░░░  ░░░░░░  ░░░░░ ░░░ ░░░░░  ░░░░░░
 ███ ░███
░░██████
 ░░░░░░                                         cjoao-de @ 42lisboa
 */

#include <stdio.h>
#include <stdlib.h>

void	no_more_ballons()
{
	printf("no more Luftballons in the hand!\n");
	return ;
}

void	one_ballon()
{
	printf("1 Luftballon in the hand, let it fly, now there\'s,\n");
	return ;
}

int	do_nothing(int cnt)
{
	// cnt in this scope is a int - WATCH
	return (cnt);
}

void	do_this(int *cnt, char *string)
{
	// cnt in this scope is a pointer - WATCH
	int result;
	result = do_nothing(*cnt);

	if (result == 1)
		one_ballon();
	else
		printf("%i %s\n", result, string);

	// Segfault when cnt reaches 67
	// if (*cnt == 67)
	// {
	// 	printf("About to crash when cnt=%d...\n", *cnt);
	// 	printf("Divide by Zero %d", *cnt/0);
	// }

	return ;
}

int		main(int argc, char **argv)
{
	int		cnt = 5;	// cnt in the this scope is an int - WATCH
	char	*string = "Luftballons in the hand, let one fly, now there\'s,";

	if (argc == 2)
		cnt = atoi(argv[1]);	// there is a missing check here, what is it?
	while (cnt)					// HINT: not guarding atoi() breaks this!
	{
		do_this(&cnt, string);	// pass cnt as a pointer - WATCH
		cnt--;
		if (cnt == 0)
			no_more_ballons();
	}
	return (0);
}
