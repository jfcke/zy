void Print_Factorial ( const int N ) {
	int i;
	long long int sum = 1;
	if (N > 0 && N <= 1000) {
		for (i = 1; i <= N; i++) {
			sum = sum * i;
		}
		printf("%lld", sum);
	} else if (N == 0) {
		printf("1");
	} else if (N < 0) {
		printf("Invalid input");
	}
}
