#include <stdio.h>

int main(void) {
	int z,m;
	int N;
	int i;
	float sum=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
	scanf("%d/%d",&z,&m);
	sum+=z/m;
	z=z%m;
}

	return 0;
}
