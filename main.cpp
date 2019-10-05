#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x, res;
	scanf ("%d",&x);
	res=64*x*x*x*x;
	printf("res=%d", res);
	return 0;
}
