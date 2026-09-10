
char *ft_uppercase(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 'a' -'A';
		ptr++;
	}
	return(str);
}
