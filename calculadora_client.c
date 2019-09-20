/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"


void
simp_prog_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	operands  fatorial_1_arg;
	int  *result_2;
	operands  fib_1_arg;
	int  *result_3;
	operands  max_1_arg;
	int  *result_4;
	operands  soma_1_arg;
	int  *result_5;
	operands  subtracao_1_arg;
	int  *result_6;
	operands  comprimentocirculo_1_arg;
	int  *result_7;
	operands  areacirculo_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, SIMP_PROG, SIMP_VERSION, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = fatorial_1(&fatorial_1_arg, clnt);
	printf("Fatorial do número %d = %d\n", ab.x, *result_1);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = fib_1(&fib_1_arg, clnt);
    printf("Fibonacci de %d termos = %d\n", ab.x, *result_2);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = max_1(&max_1_arg, clnt);
    printf("O maior é = %d\n", *result_3);
    if (result_3 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_4 = soma_1(&soma_1_arg, clnt);
    printf("A soma é = %d\n", *result_4);
    if (result_4 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_5 = subtracao_1(&subtracao_1_arg, clnt);
    printf("A circunferencia é = %d\n", *result_5);
    if (result_5 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_6 = comprimentocirculo_1(&comprimentocirculo_1_arg, clnt);
    printf("O comprimento do circunferencia de raio R é = %d\n", *result_6);
    if (result_6 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_7 = areacirculo_1(&areacirculo_1_arg, clnt);
    printf("A área do da circunferencia de raio R é = %d\n", *result_7);
    if (result_7 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	simp_prog_1 (host);
exit (0);
}
