char	*ft_strrev(char *s)
{
	int i;
	int n;
	char c;

	i = 0;
	n = 0;
	while (s[n])
		n++;
	n--;
	while (i < n)
	{
		c = s[i];
		s[i] = s[n];
		s[n] = c;
		i++;
		n--;
	}
	return (s);
}
