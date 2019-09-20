/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"

int *
fatorial_1_svc(operands *argp, struct svc_req *rqstp)
{
	static int  result;
	result = 1;

	int n = argp->x;

	while (n > 1)
    {
	    result *= n;
	    n--;
    }

	return &result;
}

int *
fib_1_svc(operands *argp, struct svc_req *rqstp)
{
	static int  result;
	int n, i, fib1 = 1, fib2 = 1, s;

	n = argp->x;
	for (i = 3; i <= n; i = i + 1)
	{
         s = fib1 + fib2;
         fib1 = fib2;
         fib2 = s;
	}
	result = fib2
    	return &result;
}

int *
max_1_svc(operands *argp, struct svc_req *rqstp)
{
	static int  result;

    int a = argp->x;
    int b = argp->y;

    if (a >= b)
        result = a;
    else
        result = b;

    return &result;
}

int *
soma_1_svc(operands *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->x + argp->y;

	return &result;
}

int *
subtracao_1_svc(operands *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->x - argp->y;

	return &result;
}

int *
comprimentocirculo_1_svc(operands *argp, struct svc_req *rqstp)
{
	static int  result;
    const int PI = 3.14;
    int r = argp->x;

    result = 2 * PI * r;

	return &result;
}

int *
areacirculo_1_svc(operands *argp, struct svc_req *rqstp)
{
	static int  result;
    const int PI = 3.14;
	int r = argp->x;

	result = PI * (r * r);

	return &result;
}
