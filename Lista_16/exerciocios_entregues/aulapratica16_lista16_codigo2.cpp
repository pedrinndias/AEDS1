#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
struct Data {
    int dia;
    int mes;
    int ano;
};
struct Carro {
    string modelo;
    string marca;
    int anoFabricacao;
    double preco;
    Data dataVenda;
};
void carroMaisCaro(const vector<Carro>& carros) {
    if (carros.empty()) {
        cout << "Nenhum carro na lista." << endl;
        return;
    }
    double maiorPreco = 0.0;
    int indiceMaisCaro = -1;
    for (int i = 0; i < carros.size(); ++i) {
        if (carros[i].preco > maiorPreco) {
            maiorPreco = carros[i].preco;
            indiceMaisCaro = i;
        }
    }
    if (indiceMaisCaro != -1) {
        cout << "Carro mais caro:" << endl;
        cout << "  Preco: R$" << fixed << setprecision(2) << maiorPreco << endl;
        cout << "  Data de Venda: " << carros[indiceMaisCaro].dataVenda.dia << "/"
             << carros[indiceMaisCaro].dataVenda.mes << "/"
             << carros[indiceMaisCaro].dataVenda.ano << endl;
    }
}
int main() {
    return 0;
}