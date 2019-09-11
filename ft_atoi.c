int ft_atoi (const char *s)
{
	long double n;
	int sign;
	
	n = 0;
	sign = 1;
	while(*s && ((*s >= 9 && *s <= 13) || *s == ' '))
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while(*s && *s >= '0' && *s <= '9')
	{
		n = n * 10 + *s - '0';
		s++;
	}
	n *= sign;
	return ((int)n);	
}
