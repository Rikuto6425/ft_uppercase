#include <stdio.h>

char *ft_uppercase(char *str);

int main(int argc,char **argv)
{
	if (argc !=2)
		return 1;
	printf("%s\n",argv[1]);
	printf("%s\n",ft_uppercase(argv[1]));
	return 0;
}
