int sign( int x ) {
	int ret;
	if (x > 0) {
		ret = 1;
	} else if (x == 0) {
		ret = 0;
	} else {
		ret = -1;
	}
	return ret;
}
