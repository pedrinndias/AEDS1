#include <iostream> // Para entrada e saída de dados (cin, cout)
#include <limits>   // Para std::numeric_limits, útil para limpar o buffer do cin

using namespace std; // Usar o namespace padrão para evitar prefixar com std::

// Definição da classe Elevador
class Elevador {
private:
    // Atributos privados para armazenar as informações do elevador
    int andarAtual;         // O andar onde o elevador está atualmente (0 = térreo)
    int totalAndaresPredio; // O total de andares no prédio (excluindo o térreo)
    int capacidadeElevador; // A capacidade máxima de pessoas que o elevador pode carregar
    int pessoasNoElevador;  // O número atual de pessoas dentro do elevador

public:
    // Método inicializa:
    // Recebe a capacidade e o total de andares e configura o elevador para o estado inicial.
    // O elevador sempre começa no térreo (andar 0) e vazio (0 pessoas).
    void inicializa(int capacidade, int totalAndares) {
        if (capacidade >= 0 && totalAndares >= 0) { // Validação básica para valores não negativos
            capacidadeElevador = capacidade;
            totalAndaresPredio = totalAndares;
            andarAtual = 0;           // Começa no térreo
            pessoasNoElevador = 0;    // Começa vazio
            cout << "Elevador inicializado com sucesso!" << endl;
            cout << "Capacidade: " << capacidadeElevador << " pessoas, Total de Andares: " << totalAndaresPredio << endl;
        } else {
            cout << "Erro: Capacidade e total de andares devem ser valores nao negativos." << endl;
        }
    }

    // Método entra:
    // Acrescenta uma pessoa ao elevador, se ainda houver espaço disponível.
    void entra() {
        if (pessoasNoElevador < capacidadeElevador) {
            pessoasNoElevador++;
            cout << "Uma pessoa entrou no elevador. Pessoas atuais: " << pessoasNoElevador << endl;
        } else {
            cout << "Elevador cheio! Nao eh possivel adicionar mais pessoas." << endl;
        }
    }

    // Método sai:
    // Remove uma pessoa do elevador, se houver alguém dentro.
    void sai() {
        if (pessoasNoElevador > 0) {
            pessoasNoElevador--;
            cout << "Uma pessoa saiu do elevador. Pessoas atuais: " << pessoasNoElevador << endl;
        } else {
            cout << "Elevador vazio! Nao ha ninguem para sair." << endl;
        }
    }

    // Método sobe:
    // Sobe um andar, desde que não esteja no último andar.
    void sobe() {
        // totalAndaresPredio representa o número de andares acima do térreo.
        // Se o andar atual for igual ao totalAndaresPredio, significa que já está no último.
        if (andarAtual < totalAndaresPredio) {
            andarAtual++;
            cout << "Elevador subiu para o andar: " << andarAtual << endl;
        } else {
            cout << "Elevador ja esta no ultimo andar (" << andarAtual << "). Nao pode subir mais." << endl;
        }
    }

    // Método desce:
    // Desce um andar, desde que não esteja no térreo (andar 0).
    void desce() {
        if (andarAtual > 0) {
            andarAtual--;
            cout << "Elevador desceu para o andar: " << andarAtual << endl;
        } else {
            cout << "Elevador ja esta no terreo (" << andarAtual << "). Nao pode descer mais." << endl;
        }
    }

    // Métodos get (acessores) para obter os dados atuais do elevador.
    int getAndarAtual() {
        return andarAtual;
    }

    int getTotalAndaresPredio() {
        return totalAndaresPredio;
    }

    int getCapacidadeElevador() {
        return capacidadeElevador;
    }

    int getPessoasNoElevador() {
        return pessoasNoElevador;
    }

    // Método adicional para imprimir o estado atual do elevador (similar ao do exercício anterior)
    void imprimirEstadoElevador() {
        cout << "\n--- Estado Atual do Elevador ---" << endl;
        cout << "Andar Atual: " << andarAtual << endl;
        cout << "Total de Andares no Predio: " << totalAndaresPredio << endl;
        cout << "Capacidade Maxima: " << capacidadeElevador << " pessoas" << endl;
        cout << "Pessoas Atualmente no Elevador: " << pessoasNoElevador << " pessoas" << endl;
        cout << "--------------------------------\n" << endl;
    }
};

// Função principal do programa
int main() {
    Elevador meuElevador; // Cria um objeto da classe Elevador

    int capacidade;
    int totalAndares;

    // Solicita os dados para inicializar o elevador
    cout << "Digite a capacidade maxima do elevador: ";
    cin >> capacidade;

    // Limpa o buffer de entrada após a leitura de um int
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Digite o total de andares no predio (excluindo o terreo): ";
    cin >> totalAndares;

    // Limpa o buffer de entrada após a leitura de um int
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Inicializa o elevador com os dados fornecidos
    meuElevador.inicializa(capacidade, totalAndares);

    // Demonstração das funcionalidades do elevador
    meuElevador.imprimirEstadoElevador();

    // Testando a entrada de pessoas
    meuElevador.entra();
    meuElevador.entra();
    meuElevador.imprimirEstadoElevador();

    // Testando a saída de pessoas
    meuElevador.sai();
    meuElevador.imprimirEstadoElevador();

    // Testando a subida
    meuElevador.sobe();
    meuElevador.sobe();
    meuElevador.imprimirEstadoElevador();

    // Testando a descida
    meuElevador.desce();
    meuElevador.imprimirEstadoElevador();

    // Tentando subir além do limite
    cout << "\n--- Testando limites ---" << endl;
    for (int i = 0; i <= meuElevador.getTotalAndaresPredio() + 1; ++i) {
        meuElevador.sobe();
    }
    meuElevador.imprimirEstadoElevador();

    // Tentando descer abaixo do térreo
    for (int i = 0; i <= meuElevador.getTotalAndaresPredio() + 1; ++i) {
        meuElevador.desce();
    }
    meuElevador.imprimirEstadoElevador();

    // Tentando adicionar pessoas além da capacidade
    cout << "\n--- Testando capacidade ---" << endl;
    for (int i = 0; i <= meuElevador.getCapacidadeElevador() + 1; ++i) {
        meuElevador.entra();
    }
    meuElevador.imprimirEstadoElevador();

    // Tentando remover pessoas de um elevador vazio
    for (int i = 0; i <= meuElevador.getCapacidadeElevador() + 1; ++i) {
        meuElevador.sai();
    }
    meuElevador.imprimirEstadoElevador();


    // Exibindo os dados usando os métodos get
    cout << "\n--- Dados finais usando metodos GET ---" << endl;
    cout << "Andar atual (GET): " << meuElevador.getAndarAtual() << endl;
    cout << "Pessoas no elevador (GET): " << meuElevador.getPessoasNoElevador() << endl;
    cout << "Capacidade (GET): " << meuElevador.getCapacidadeElevador() << endl;
    cout << "Total de andares (GET): " << meuElevador.getTotalAndaresPredio() << endl;


    return 0; // Indica que o programa terminou com sucesso
}