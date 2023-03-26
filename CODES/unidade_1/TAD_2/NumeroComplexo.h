typedef struct{
    int real;
    int img;
} NumeroComplexo;

NumeroComplexo inicializa(int, int);
void imprime(NumeroComplexo);
void copia(NumeroComplexo*, NumeroComplexo);
void soma(NumeroComplexo, NumeroComplexo);
int ehReal(NumeroComplexo);