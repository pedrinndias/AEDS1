#include <iostream>
#include <limits>
using namespace std;
class Elevador {
private:
    int andarAtual;
    int totalAndaresPredio;
    int capacidadeElevador;
    int pessoasNoElevador;
public:
    void inicializa(int capacidade, int totalAndares) {
        if (capacidade >= 0 && totalAndares >= 0) {
            capacidadeElevador = capacidade;
            totalAndaresPredio = totalAndares;
            andarAtual = 0;
            pessoasNoElevador = 0;
            cout << "Elevador inicializado com sucesso!" << endl;
            cout << "Capacidade: " << capacidadeElevador << " pessoas, Total de Andares: " << totalAndaresPredio << endl;
        } else {
            cout << "Erro: Capacidade e total de andares devem ser valores nao negativos." << endl;
        }
    }
    void entra() {
        if (pessoasNoElevador < capacidadeElevador) {
            pessoasNoElevador++;
            cout << "Uma pessoa entrou no elevador. Pessoas atuais: " << pessoasNoElevador << endl;
        } else {
            cout << "Elevador cheio! Nao eh possivel adicionar mais pessoas." << endl;
        }
    }
    void sai() {
        if (pessoasNoElevador > 0) {
            pessoasNoElevador--;
            cout << "Uma pessoa saiu do elevador. Pessoas atuais: " << pessoasNoElevador << endl;
        } else {
            cout << "Elevador vazio! Nao ha ninguem para sair." << endl;
        }
    }
    void sobe() {
        if (andarAtual < totalAndaresPredio) {
            andarAtual++;
            cout << "Elevador subiu para o andar: " << andarAtual << endl;
        } else {
            cout << "Elevador ja esta no ultimo andar (" << andarAtual << "). Nao pode subir mais." << endl;
        }
    }
    void desce() {
        if (andarAtual > 0) {
            andarAtual--;
            cout << "Elevador desceu para o andar: " << andarAtual << endl;
        } else {
            cout << "Elevador ja esta no terreo (" << andarAtual << "). Nao pode descer mais." << endl;
        }
    }
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
    void imprimirEstadoElevador() {
        cout << "\n--- Estado Atual do Elevador ---" << endl;
        cout << "Andar Atual: " << andarAtual << endl;
        cout << "Total de Andares no Predio: " << totalAndaresPredio << endl;
        cout << "Capacidade Maxima: " << capacidadeElevador << " pessoas" << endl;
        cout << "Pessoas Atualmente no Elevador: " << pessoasNoElevador << " pessoas" << endl;
        cout << "--------------------------------\n" << endl;
    }
};
int main() {
    Elevador meuElevador;
    int capacidade;
    int totalAndares;
    cout << "Digite a capacidade maxima do elevador: ";
    cin >> capacidade;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Digite o total de andares no predio (excluindo o terreo): ";
    cin >> totalAndares;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    meuElevador.inicializa(capacidade, totalAndares);
    meuElevador.imprimirEstadoElevador();
    meuElevador.entra();
    meuElevador.entra();
    meuElevador.imprimirEstadoElevador();
    meuElevador.sai();
    meuElevador.imprimirEstadoElevador();
    meuElevador.sobe();
    meuElevador.sobe();
    meuElevador.imprimirEstadoElevador();
    meuElevador.desce();
    meuElevador.imprimirEstadoElevador();
    cout << "\n--- Testando limites ---" << endl;
    for (int i = 0; i <= meuElevador.getTotalAndaresPredio() + 1; ++i) {
        meuElevador.sobe();
    }
    meuElevador.imprimirEstadoElevador();
    for (int i = 0; i <= meuElevador.getTotalAndaresPredio() + 1; ++i) {
        meuElevador.desce();
    }
    meuElevador.imprimirEstadoElevador();
    cout << "\n--- Testando capacidade ---" << endl;
    for (int i = 0; i <= meuElevador.getCapacidadeElevador() + 1; ++i) {
        meuElevador.entra();
    }
    meuElevador.imprimirEstadoElevador();
    for (int i = 0; i <= meuElevador.getCapacidadeElevador() + 1; ++i) {
        meuElevador.sai();
    }
    meuElevador.imprimirEstadoElevador();
    cout << "\n--- Dados finais usando metodos GET ---" << endl;
    cout << "Andar atual (GET): " << meuElevador.getAndarAtual() << endl;
    cout << "Pessoas no elevador (GET): " << meuElevador.getPessoasNoElevador() << endl;
    cout << "Capacidade (GET): " << meuElevador.getCapacidadeElevador() << endl;
    cout << "Total de andares (GET): " << meuElevador.getTotalAndaresPredio() << endl;
    return 0;
}