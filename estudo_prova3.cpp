#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class ponto {
    private:
        int x, y;
    protected:
        void setParametros(int x, int y) {
            this->x = x;
            this->y = y;
        }
    public:
        ponto(int x, int y) {
            string getCheck(int a, int b){
                if (a == x && b ==y){
                    return "True"
                }else {
                    return "False";
                }
            }
            float getDistancia(int a, int b) {
                return sqrt(pow((x - a), 2) + pow((y - b), 2));
            }
        }
}
int main() {
    ponto p;
    cout << "Digite as coordenadas do ponto (x y): " << endl;
    int x, y;
    cin >> x >> y;
    p.setParametros(x, y);
    cout << "Ponto criado: (" << x << ", " << y << ")" << endl;
    cout << "Digite outras coordenadas para verificar a distância e o check: " << endl;
    int a, b;
    cin >> a >> b;
    cout << "Ponto: (" << a << ", " << b << ")" << endl;
    cout << "Distancia: " << p.getDistancia(a, b) << endl;
    cout << "Check: " << p.getCheck(a, b) << endl;
    return 0;
}