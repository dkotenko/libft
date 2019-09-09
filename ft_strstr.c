char *strstr(const char *str, const char *substr)
{
	int j;
	
	if (!substr)
		return *str;
	while(*str)
	{
		if(*str == *substr)
		{
			j = 0;
			while(*str == substr[j])
			{
				str++;
				j++;
			}
			if(!substr[j])
				return *(str - j);
		}
		str++;
	}
	return NULL;
}
	