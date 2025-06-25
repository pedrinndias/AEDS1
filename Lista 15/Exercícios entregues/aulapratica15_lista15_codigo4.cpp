#include <iostream>
#include <cmath>
using namespace std;
class CirculoSimples {
private:
    double raio;
    double centroX;
    double centroY;
    double calcularArea() {
        return M_PI * raio * raio;
    }
    double calcularCircunferencia() {
        return 2 * M_PI * raio;
    }
    double calcularDistanciaEntreCentros(const CirculoSimples& outroCirculo) {
        double dx = this->centroX - outroCirculo.centroX;
        double dy = this->centroY - outroCirculo.centroY;
        return sqrt(dx * dx + dy * dy);
    }
public:
    CirculoSimples() {
        raio = 1.0;
        centroX = 0.0;
        centroY = 0.0;
    }
    CirculoSimples(double r, double x, double y) {
        definirRaio(r);
        definirCentro(x, y);
    }
    void definirRaio(double novoRaio) {
        if (novoRaio >= 0) {
            raio = novoRaio;
            cout << "Raio definido para: " << raio << endl;
        } else {
            cout << "Aviso: Raio nao pode ser negativo. Raio permaneceu " << raio << endl;
        }
    }
    void aumentarRaio(double percentualAumento) {
        if (percentualAumento >= 0) {
            raio *= (1 + percentualAumento / 100.0);
            cout << "Raio aumentado em " << percentualAumento << "%. Novo raio: " << raio << endl;
        } else {
            cout << "Aviso: Percentual de aumento invalido. Raio permaneceu " << raio << endl;
        }
    }
    void definirCentro(double x, double y) {
        centroX = x;
        centroY = y;
        cout << "Centro definido para: (" << centroX << ", " << centroY << ")" << endl;
    }
    void imprimirRaio() {
        cout << "Raio do circulo: " << raio << endl;
    }
    void imprimirCentro() {
        cout << "Centro do circulo: (" << centroX << ", " << centroY << ")" << endl;
    }
    void imprimirArea() {
        cout << "Area do circulo: " << calcularArea() << endl;
    }
    void imprimirCircunferencia() {
        cout << "Circunferencia do circulo: " << calcularCircunferencia() << endl;
    }
    void imprimirDistanciaEntreCentros(const CirculoSimples& outroCirculo) {
        cout << "Distancia entre os centros: " << calcularDistanciaEntreCentros(outroCirculo) << endl;
    }
};
int main() {
    CirculoSimples circulo1;
    return 0;
}