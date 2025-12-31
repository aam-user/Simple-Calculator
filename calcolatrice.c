#include <stdio.h>

float div(float n1, float n2)
{
	if (n2 == 0){
		printf("non puoi dividere per 0\n");
		return 0;
	}
	return n1/n2;
}
int molt(int n1, int n2) {return n1 * n2;}
int sott(int n1, int n2) {return n1 - n2;}
int somma(int n1, int n2) {return n1 + n2;}
int main()
{
	int x, y;
	printf("scrivi il primo numero\n");
	scanf("%d", &x);
	printf("scrivi il secondo numero\n");
	scanf("%d", &y);
	printf("Somma %d\n", somma(x, y));
	printf("Moltiplicazione %d\n", molt(x, y));
	printf("Divizione %f\n", div((float)x, (float)y));
	printf("Sottrazione %d\n", sott(x, y));
}
