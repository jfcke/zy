int search( int list[], int n, int x ) {
	int i = 0;
	for(i=0;i<n;i++){
		if (list[i] == x) {
			return i;
		} 
	}
    return -1;
}
