void ArrayShift(int a[], int n, int m) {
	int i;
	while (m--) {
		int temp = a[n - 1];
		for (i = n - 1; i >= 1; i--)
			a[i] = a[i - 1];
		a[0] = temp;
	}
	return a;
}