#include <stdio.h>

double raizq(double);

int main ()
{
	double n, r;

	printf("Coloque o seu número:\n");
	scanf ("%lf", &n);

	if(n < 0)
		n = n*(-1);

	r = raizq(n);
	
	printf("A raíz quadrada de %.2lf é %.2f\n", n, r);
	
	return 0;
}


//função que retorna a raiz quadrada
double raizq(double n)
{

	if(n == 0)
		return 0;

	double x1, x2 = 0;
	//primeira atribuição de x0
	x1 = (n + 1)/2;

	//aplicação do método babilonico em um laço finito
	while (x2 != x1)
	{
		x2 = (x1 + (n/x1))/2;
		x1 = (x2 + (n/x2))/2;
	}

	return x1;
}

