char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] < n; i++)
	{
		src[i] = dest[i];
	}
	dest[i] = '\0';

	dest[i] = '\0';

	return (dest);
}
