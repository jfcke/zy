void StringCount( char s[] ) {
	int i=0;
	int letter = 0, blank = 0, digit = 0, other = 0;
	while(s[i]){
		if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
			letter++;
		else if (s[i] == ' ' || s[i] == '\n')
			blank++;
		else if (s[i] >= 48 && s[i] <= 57)
			digit++;
		else
			other++;
        i++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}
