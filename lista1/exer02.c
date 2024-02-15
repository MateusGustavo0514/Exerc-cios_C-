#include <stdio.h>
 
int main() {
	float pi = 3.14159, area;
	double raio;
	scanf("%lf", &raio);
	area = pi * raio * raio;
	printf("A=%.2lf\n", area);
	return 0;
}
