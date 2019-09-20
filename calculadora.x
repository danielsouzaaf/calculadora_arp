struct operands {
    int x;
    int y;
};

program SIMP_PROG {
    version SIMP_VERSION {
        int fatorial(operands) = 1;
        int fib(operands) = 2;
        int max(operands) = 3;
        int soma(operands) = 4;
        int subtracao(operands) = 5;
        int comprimentocirculo(operands) = 6;
        int areacirculo(operands) = 7;
    } = 1;
} = 0x2fffffff;
