int f( int n ) {
	int ret;
	if (n == 0) {
		ret = n;
	}
	if (n == 1) {
		ret = n;
	}
	if (n >= 2) {
		ret = f(n - 2) + f(n - 1);
	}
	return ret;
}
