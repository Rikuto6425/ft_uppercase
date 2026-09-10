
char *ft_uppercase(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		*ptr += 'a' -'A';
		ptr++;
	}
	return(str);
}
