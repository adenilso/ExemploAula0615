#include<stdio.h>

int main(int argc, char *argv[]) {
	float x = 0;
	int i;
	int j;
	scanf("%d", &x);
	if(x < 0) {
		x = -x;
	} else {
		if(x % 2 == 0) {
			x++;
		}
	}
	while(x > 0) {
		printf("%d\n", x);
		x--;
	}

	printf("x = %d\n", x);
}
