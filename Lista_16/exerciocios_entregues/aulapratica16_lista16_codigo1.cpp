#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class Ponto {
private:
    double x;
    double y;
public:
    Ponto() : x(0.0), y(0.0) {}
    Ponto(double x_val, double y_val) : x(x_val), y(y_val) {}
    void setPosicao(double x_val, double y_val) {
        x = x_val;
        y = y_val;
    }
    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }
    double calcularDistancia(const Ponto& outroPonto) const {
        return sqrt(pow(x - outroPonto.x, 2) + pow(y - outroPonto.y, 2));
    }
    double calcularDistancia(double x_outro, double y_outro) const {
        return sqrt(pow(x - x_outro, 2) + pow(y - y_outro, 2));
    }
    void imprimir() const {
        cout << "Ponto: (" << x << ", " << y << ")" << endl;
    }
};
class Circulo : public Ponto {
private:
    double raio;
public:
    Circulo() : Ponto(), raio(0.0) {}

    Circulo(double x_centro, double y_centro, double raio_val) : Ponto(x_centro, y_centro), raio(raio_val) {}

    void setRaio(double raio_val) {
        raio = raio_val;
    }
    double getRaio() const {
        return raio;
    }
    double calcularArea() const {
        return M_PI * raio * raio;
    }
    double calcularCircunferencia() const {
        return 2 * M_PI * raio;
    }
    void imprimir() const {
        Ponto::imprimir();
        cout << "  Raio: " << raio << endl;
        cout << "  Area: " << calcularArea() << endl;
        cout << "  Circunferencia: " << calcularCircunferencia() << endl;
    }
};
class Roda : public Circulo {
private:
    string material;
    string aro;
    string fabricante;
public:
    Roda() : Circulo(), material(""), aro(""), fabricante("") {}

    Roda(double x_centro, double y_centro, double raio_val,
         const string& material_val, const string& aro_val, const string& fabricante_val)
        : Circulo(x_centro, y_centro, raio_val), material(material_val), aro(aro_val), fabricante(fabricante_val) {}

    void setMaterial(const string& material_val) {
        material = material_val;
    }
    void setAro(const string& aro_val) {
        aro = aro_val;
    }
    void setFabricante(const string& fabricante_val) {
        fabricante = fabricante_val;
    }
    string getMaterial() const {
        return material;
    }
    string getAro() const {
        return aro;
    }
    string getFabricante() const {
        return fabricante;
    }
    void imprimir() const {
        Circulo::imprimir();
        cout << "  Material: " << material << endl;
        cout << "  Aro: " << aro << endl;
        cout << "  Fabricante: " << fabricante << endl;
    }
};
class Esfera : public Circulo {
public:
    Esfera() : Circulo() {}
    Esfera(double x_centro, double y_centro, double raio_val) : Circulo(x_centro, y_centro, raio_val) {}
    double calcularVolume() const {
        return (4.0 / 3.0) * M_PI * pow(getRaio(), 3);
    }
    void imprimir() const {
        Circulo::imprimir();
        cout << "  Volume (Esfera): " << calcularVolume() << endl;
    }
};
int main() {
    Ponto p1;
    p1.setPosicao(10.0, 20.0);
    p1.imprimir();
    Ponto p2(5.0, 15.0);
    p2.imprimir();
    cout << "Distancia entre p1 e p2 (objeto): " << p1.calcularDistancia(p2) << endl;
    cout << "Distancia entre p1 e (0,0): " << p1.calcularDistancia(0.0, 0.0) << endl;
    Circulo c1(0.0, 0.0, 5.0);
    c1.imprimir();
    Roda r1(1.0, 1.0, 15.0, "Aluminio", "17 polegadas", "Michelin");
    r1.imprimir();
    Esfera e1(0.0, 0.0, 3.0);
    e1.imprimir();
    return 0;
}