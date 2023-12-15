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

void	do_this(int cnt, char *string)
{
	if (cnt == 1)
		one_ballon();
	else
		printf("%i %s\n", cnt, string);
	return ;
}

int		main(int argc, char **argv)
{
	int		cnt = 3;
	char	*string = "Luftballons in the hand, let one fly, now there\'s,";

	if (argc == 2)
		cnt = atoi(argv[1]);
	while (cnt)
	{
		do_this(cnt--, string);
		if (cnt == 0)
			no_more_ballons();
	}
	return (0);
}
