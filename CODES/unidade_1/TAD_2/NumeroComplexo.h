typedef struct{
    float real, img;
} NumeroComplexo;

NumeroComplexo inicializa(float, float);
void imprime(NumeroComplexo);
void copia(NumeroComplexo*, NumeroComplexo);
NumeroComplexo soma(NumeroComplexo, NumeroComplexo);
int ehReal(NumeroComplexo);