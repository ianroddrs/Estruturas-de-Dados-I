typedef struct{
    int numero;
    double saldo;
} TipoConta;

TipoConta inicializar(int n, double sal);
void deposito(TipoConta *conta, double valor);
void print(TipoConta conta);