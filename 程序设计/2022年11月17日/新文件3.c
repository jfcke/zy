#include <stdio.h>

int main(void) {
	int h1,h2;
	int N;
	int a1,a2,b1,b2;
	int C;
	int m1=0,m2=0;
	scanf("%d %d\n",&h1,&h2);
	scanf("%d\n",&N);
	for(int i=0;i<N;i++ ){
		scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
		C=a1+b1;
		if(a2==C&&b2!=C){
			m1+=1;
			if(m1>h1){
				printf("B\n");
				printf("%d",h2);
			}
		}
		if(a2!=C&&b2==C){
			m2+=1;
			if(m2>h2){
				
			}
		}
	}

	return 0;
}
