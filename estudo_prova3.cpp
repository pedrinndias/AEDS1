#include <iostream> // Para entrada e saída de dados (cin, cout)
#include <string>   // Para usar a classe string
#include <cmath>    // Para funções matemáticas como sqrt e pow

// Usar o namespace std para evitar digitar std:: repetidamente
using namespace std;

// Definição da classe Ponto
class Ponto { // O nome da classe deve ser 'Ponto' com 'P' maiúsculo, conforme boa prática
private:
    // Atributos privados para as coordenadas x e y
    int x;
    int y;

public:
    // Construtor da classe Ponto
    // Recebe dois inteiros (coordenadas x e y) e inicializa os atributos do objeto.
    Ponto(int x_coord, int y_coord) {
        this->x = x_coord; // 'this->x' refere-se ao atributo 'x' do objeto atual
        this->y = y_coord; // 'this->y' refere-se ao atributo 'y' do objeto atual
    }

    // Métodos "get" (acessores) para as coordenadas
    // Retornam o valor dos atributos privados.
    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    // Métodos "set" (mutadores) para as coordenadas
    // Permitem modificar os valores dos atributos privados.
    void setX(int new_x) {
        x = new_x;
    }

    void setY(int new_y) {
        y = new_y;
    }

    // Método equals
    // Recebe um objeto Ponto como argumento e verifica se as coordenadas são iguais.
    // Retorna true se forem iguais, false caso contrário.
    bool equals(Ponto outroPonto) { // O tipo de retorno deve ser bool (verdadeiro/falso)
        return (this->x == outroPonto.getX() && this->y == outroPonto.getY());
    }

    // Método distancia
    // Recebe um objeto Ponto como argumento e calcula a distância euclidiana entre os dois pontos.
    // Fórmula: sqrt((x2 - x1)^2 + (y2 - y1)^2)
    double distancia(Ponto outroPonto) { // O tipo de retorno deve ser double para precisão
        double dx = this->x - outroPonto.getX(); // Diferença nas coordenadas x
        double dy = this->y - outroPonto.getY(); // Diferença nas coordenadas y
        return sqrt(pow(dx, 2) + pow(dy, 2));
    }
}; // Fim da definição da classe

// Função principal (main) onde o programa começa a execução
int main() {
    // Declaração de variáveis para as coordenadas de entrada
    int x_input, y_input;

    // Solicita ao usuário as coordenadas para o primeiro ponto
    cout << "Digite as coordenadas do primeiro ponto (x y): ";
    cin >> x_input >> y_input;

    // Cria um objeto da classe Ponto usando o construtor
    Ponto p1(x_input, y_input);
    cout << "Ponto 1 criado: (" << p1.getX() << ", " << p1.getY() << ")" << endl;

    // Solicita ao usuário as coordenadas para o segundo ponto
    cout << "Digite as coordenadas do segundo ponto (x y): ";
    cin >> x_input >> y_input; // Reutiliza as variáveis para a nova entrada

    // Cria um segundo objeto da classe Ponto
    Ponto p2(x_input, y_input);
    cout << "Ponto 2 criado: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

    // Testa o método equals
    cout << "Os pontos sao iguais? ";
    // Chama o método equals de p1 passando p2 como argumento
    if (p1.equals(p2)) {
        cout << "Sim" << endl;
    } else {
        cout << "Nao" << endl;
    }

    // Testa o método distancia
    cout << "Distancia entre os pontos: " << p1.distancia(p2) << endl;

    return 0; // Indica que o programa terminou com sucesso
}