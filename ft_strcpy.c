char *ft_strcpy(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while(*src)
	{
		*(temp++) = *(src++);
	}
	*temp = '\0';
	return dest;
}
