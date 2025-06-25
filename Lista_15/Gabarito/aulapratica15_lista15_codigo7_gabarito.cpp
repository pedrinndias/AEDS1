#include <iostream>
#include <iomanip>

using namespace std;

class Carro {
private:
    double combustivelAtual;
    double distanciaPercorrida;

    // Declarando as constantes estáticas
    static const double CAPACIDADE_TANQUE;
    static const double CONSUMO_POR_LITRO;

public:
    Carro() {
        combustivelAtual = 0.0;
        distanciaPercorrida = 0.0;
        cout << "Carro criado e inicializado com tanque vazio." << endl;
    }

    void abastecer(double quantidadeLitros) {
        if (quantidadeLitros > 0) {
            double novoCombustivel = combustivelAtual + quantidadeLitros;
            if (novoCombustivel <= CAPACIDADE_TANQUE) {
                combustivelAtual = novoCombustivel;
                cout << "Abastecidos " << fixed << setprecision(2) << quantidadeLitros
                     << " litros. Combustivel atual: " << combustivelAtual << " litros." << endl;
            } else {
                double litrosParaCompletar = CAPACIDADE_TANQUE - combustivelAtual;
                combustivelAtual = CAPACIDADE_TANQUE;
                cout << "Abastecidos " << fixed << setprecision(2) << litrosParaCompletar
                     << " litros (tanque cheio). Combustivel atual: " << combustivelAtual << " litros." << endl;
                cout << "Nao foi possivel abastecer todos os " << fixed << setprecision(2) << quantidadeLitros
                     << " litros, pois o tanque encheu." << endl;
            }
        } else {
            cout << "Quantidade de gasolina para abastecer deve ser positiva." << endl;
        }
    }

    void mover(double distanciaKm) {
        if (distanciaKm > 0) {
            double combustivelNecessario = distanciaKm / CONSUMO_POR_LITRO;

            if (combustivelAtual >= combustivelNecessario) {
                combustivelAtual -= combustivelNecessario;
                distanciaPercorrida += distanciaKm;
                cout << "Carro moveu " << fixed << setprecision(2) << distanciaKm
                     << " km. Combustivel restante: " << combustivelAtual << " litros." << endl;
            } else {
                double distanciaPossivel = combustivelAtual * CONSUMO_POR_LITRO;
                distanciaPercorrida += distanciaPossivel;
                combustivelAtual = 0.0;
                cout << "Combustivel insuficiente para mover " << fixed << setprecision(2) << distanciaKm
                     << " km. O carro moveu " << fixed << setprecision(2) << distanciaPossivel
                     << " km e ficou sem combustivel." << endl;
            }
        } else {
            cout << "Distancia para mover deve ser positiva." << endl;
        }
    }

    double getCombustivelRestante() {
        return combustivelAtual;
    }

    double getDistanciaTotalPercorrida() {
        return distanciaPercorrida;
    }

    void exibirStatus() {
        cout << "\n--- Status do Carro ---" << endl;
        cout << "Combustivel Restante: " << fixed << setprecision(2) << combustivelAtual << " litros" << endl;
        cout << "Distancia Percorrida: " << fixed << setprecision(2) << distanciaPercorrida << " km" << endl;
        cout << "-----------------------\n" << endl;
    }
};

// Definição das constantes estáticas fora da classe
const double Carro::CAPACIDADE_TANQUE = 50.0;
const double Carro::CONSUMO_POR_LITRO = 15.0;

int main() {
    cout << "Criando Carro 1..." << endl;
    Carro carro1;
    cout << "\nCriando Carro 2..." << endl;
    Carro carro2;

    cout << "\n--- Abastecendo Carros ---" << endl;
    cout << "Carro 1: ";
    carro1.abastecer(20.0);
    cout << "Carro 2: ";
    carro2.abastecer(30.0);

    cout << "\n--- Movendo Carros ---" << endl;
    cout << "Carro 1: ";
    carro1.mover(200.0);
    cout << "Carro 2: ";
    carro2.mover(400.0);

    cout << "\n--- Resultados Finais ---" << endl;

    cout << "\nDados do Carro 1:" << endl;
    carro1.exibirStatus();

    cout << "\nDados do Carro 2:" << endl;
    carro2.exibirStatus();

    return 0;
}