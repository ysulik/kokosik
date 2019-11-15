#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() {
	float x, y,z ,a, b, c, s;
	printf ("enter variable x:");
	scanf ("%f",&x);
	printf ("enter variable y:");
	scanf ("%f",&y);
	printf ("enter variablez:");
	scanf ("%f",&z);	
	a=5*atan(x);
	b=1/4*acos(x);
	c=((x+3*fabs(x-y)+pow(x,2))/(fabs(x-y)*z+pow(x,2)));
	s=a-b*c;
	printf ("%f",s);
	
}
