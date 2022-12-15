void StringCount(char* s)
{
	int capital, minuscule, blank, digit, other;

	capital = minuscule = blank = digit = other = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			capital++;
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			minuscule++;
		}
		else if (s[i] == ' ')
		{
			blank++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit++;
		}
		else
		{
			other++;
		}
	}

	printf("%d %d %d %d %d\n", capital, minuscule, blank, digit, other);
}