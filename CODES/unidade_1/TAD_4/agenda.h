#include <string>
using namespace std;

typedef struct{
    string nome;
    string endereco;
    string numero;
} agenda;

agenda inicializa(string, string, string);
void imprime(agenda);
void alteraNome(agenda *, string);
void alteraNumero(agenda *, string);
bool buscaNome(agenda *, string);