#include <iostream> // Para entrada e saída de dados (cout)
#include <cmath>    // Para funções matemáticas como M_PI (pi) e sqrt (raiz quadrada)

// Definindo PI se não estiver disponível (M_PI é uma extensão GNU, nem sempre padrão)
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std; // Usar o namespace padrão para evitar prefixar com std::

// Definição da classe CirculoSimples
class CirculoSimples {
private:
    // Atributos privados para armazenar o raio e as coordenadas do centro (X, Y)
    double raio;
    double centroX;
    double centroY;

    // Métodos privados para cálculos internos, conforme solicitado
    // Calcular a área do círculo
    double calcularArea() {
        return M_PI * raio * raio;
    }

    // Calcular a circunferência do círculo
    double calcularCircunferencia() {
        return 2 * M_PI * raio;
    }

    // Calcular a distância entre os centros de dois círculos
    // Recebe outro objeto CirculoSimples como parâmetro
    double calcularDistanciaEntreCentros(const CirculoSimples& outroCirculo) {
        // Fórmula da distância entre dois pontos: sqrt((x2 - x1)^2 + (y2 - y1)^2)
        double dx = this->centroX - outroCirculo.centroX;
        double dy = this->centroY - outroCirculo.centroY;
        return sqrt(dx * dx + dy * dy);
    }

public:
    // Construtor padrão (opcional, para inicializar com valores padrão)
    CirculoSimples() {
        raio = 1.0;
        centroX = 0.0;
        centroY = 0.0;
    }

    // Construtor que define o raio e o centro (X,Y)
    CirculoSimples(double r, double x, double y) {
        definirRaio(r);
        definirCentro(x, y);
    }

    // Métodos públicos, conforme solicitado

    // Definir o raio do círculo, dado um número real
    void definirRaio(double novoRaio) {
        if (novoRaio >= 0) { // Raio não pode ser negativo
            raio = novoRaio;
            cout << "Raio definido para: " << raio << endl;
        } else {
            cout << "Aviso: Raio nao pode ser negativo. Raio permaneceu " << raio << endl;
        }
    }

    // Aumentar o raio do círculo, dado um percentual de aumento
    void aumentarRaio(double percentualAumento) {
        if (percentualAumento >= 0) {
            raio *= (1 + percentualAumento / 100.0);
            cout << "Raio aumentado em " << percentualAumento << "%. Novo raio: " << raio << endl;
        } else {
            cout << "Aviso: Percentual de aumento invalido. Raio permaneceu " << raio << endl;
        }
    }

    // Definir o centro do círculo, dada uma posição (X,Y)
    void definirCentro(double x, double y) {
        centroX = x;
        centroY = y;
        cout << "Centro definido para: (" << centroX << ", " << centroY << ")" << endl;
    }

    // Imprimir o valor do raio
    void imprimirRaio() {
        cout << "Raio do circulo: " << raio << endl;
    }

    // Imprimir o centro do círculo
    void imprimirCentro() {
        cout << "Centro do circulo: (" << centroX << ", " << centroY << ")" << endl;
    }

    // Imprimir a área do círculo (utiliza o método privado calcularArea())
    void imprimirArea() {
        cout << "Area do circulo: " << calcularArea() << endl;
    }

    // Método público para imprimir a circunferência (utiliza o método privado calcularCircunferencia())
    // Não foi explicitamente pedido para "imprimir a circunferência", mas é comum ter
    // um método público para acessar essa informação, já que o cálculo é privado.
    // Se o professor for rigoroso, este método poderia ser omitido e o cálculo privado
    // seria apenas um "helper" para outros métodos internos, mas geralmente espera-se
    // que se um cálculo é pedido, haja uma forma de visualizá-lo.
    void imprimirCircunferencia() {
        cout << "Circunferencia do circulo: " << calcularCircunferencia() << endl;
    }

    // Método público para imprimir a distância entre os centros (utiliza o método privado calcularDistanciaEntreCentros())
    // Similar ao imprimirCircunferencia, fornece um acesso público ao cálculo privado.
    void imprimirDistanciaEntreCentros(const CirculoSimples& outroCirculo) {
        cout << "Distancia entre os centros: " << calcularDistanciaEntreCentros(outroCirculo) << endl;
    }
};

// Função principal do programa para testar a classe
int main() {
    // 1. Criar um objeto CirculoSimples e testar métodos básicos
    cout << "--- Teste Circulo 1 ---" << endl;
    CirculoSimples circulo1; // Usa o construtor padrão
    circulo1.imprimirRaio();
    circulo1.imprimirCentro();
    circulo1.imprimirArea();

    circulo1.definirRaio(5.0);
    circulo1.definirCentro(10.0, 20.0);
    circulo1.imprimirRaio();
    circulo1.imprimirCentro();
    circulo1.imprimirArea();
    circulo1.imprimirCircunferencia();

    // 2. Testar o aumento do raio
    cout << "\n--- Teste Aumento de Raio ---" << endl;
    circulo1.aumentarRaio(10.0); // Aumenta em 10%
    circulo1.imprimirRaio();
    circulo1.imprimirArea(); // A área deve ter mudado

    // 3. Criar outro círculo para testar a distância entre centros
    cout << "\n--- Teste Distancia Entre Centros ---" << endl;
    CirculoSimples circulo2(3.0, 15.0, 25.0); // Construtor com parâmetros
    circulo2.imprimirRaio();
    circulo2.imprimirCentro();

    // Calcular e imprimir a distância entre circulo1 e circulo2
    circulo1.imprimirDistanciaEntreCentros(circulo2);

    // Testar com raio negativo (deve emitir aviso)
    cout << "\n--- Teste Raio Negativo ---" << endl;
    circulo1.definirRaio(-2.0);
    circulo1.imprimirRaio(); // Raio deve ser o anterior

    // Testar percentual de aumento negativo (deve emitir aviso)
    cout << "\n--- Teste Percentual Negativo ---" << endl;
    circulo1.aumentarRaio(-5.0);
    circulo1.imprimirRaio(); // Raio deve ser o anterior

    return 0; // Indica que o programa terminou com sucesso
}