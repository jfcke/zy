int even( int n ) {
	int ret;
	if (n % 2 == 0) {
		ret = 1;
	} else {
		ret = 0;
	}
	return ret;
}

int OddSum( int List[], int N ) {
	int sum = 0, i;
	for (i = 0; i < N; i++) {

		if (even(List[i]) == 0) {
			sum += List[i];
		}
	}
	return sum;
}
