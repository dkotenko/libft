char *ft_strcat (char *dest, const char *app)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(app[j])
		dest[i++] = app[j++];
	dest[i] = '\0';
	return (dest);
}
