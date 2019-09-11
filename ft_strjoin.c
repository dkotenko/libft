char * ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	
	if(!s1 || !s2 || !(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return NULL;
	str = ft_strcpy(s1);
	str = ft_strcat(str, s2);
	return (str);
}