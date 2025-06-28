#include<iostream>
#include<cmath>
using namespace std;
class CirculoSimples{
    private:
        float raio=0.0, dx=0.0, dy=0.0;

        double area(float raio){return M_PI * pow(raio,2);};
        double circunferencia(float raio){2 * M_PI * raio};
        double distanciaCentroCirculos(float dx, float dy){return sqrt(pow(dx,2) + pow(dy,2));};

    public:
        CirculoSimples(float raio=0, float dx=0, float dy=0){
            this ->raio = raio;
            this ->dx = dx;
            this ->dy = dy;
            this ->area = area(raio);
            this ->circunferencia = circunferencia(float raio);
            this ->distanciaCentroCirculos = distanciaCentroCirculos(dx, dy);
        }

        float raio=0.0;
        float x1=0.0, y1=0.0, x2=0.0, y2=0.0, dx=0.0, dy=0.0; 
        void setRaio(float raio){this->raio = raio;}
        void setAumentarRaio(float aumento){this ->raio += raio * aumento / 100;}
        void setCentrocirculos1(float x1, float y1){
            this ->x1 = x1;
            this ->y1 = y1;
        }
        void setCentrocirculos2(float x2, float y2){
            this ->x2 = x2;
            this ->y2 = y2;
        }
        void setDistanciaCentroCirculos(float dx, float dy){
            this ->dx = abs(x1 - x2);
            this ->dy = abs(x1 - y2);
        }

        double getArea(){return area(raio);}
        double getCircunferencia(){return circunferencia(raio);};
        double getDistanciaCentroCirculos(){return distanciaCentroCirculos(dx, dy);};
        float getRaio(){return raio;};
        float getX1(){return x1;};
        float getY1(){return y1;};
        float getX2(){return x2;};
        float getY2(){return y2;};
        float getDx(){return dx;};
        float getDy(){return dy;};
};
int main(){
        float raio=0.0;
        float x1=0.0, y1=0.0, x2=0.0, y2=0.0, dx=0.0, dy=0.0;
        int aux;
        do{
            cout << "*** Circulo Simples ***" << endl;
            cout << "1 - Definir Raio" << endl;
            cout << "2 - Aumentar Raio" << endl;
            cout << "3 - Definir Centro do Circulo 1" << endl;
            cout << "4 - Definir Centro do Circulo 2" << endl;
            cout << "5 - Calcular Distancia entre os Centros dos Circulos" << endl;
            cout << "6 - Calcular Area" << endl;
            cout << "7 - Calcular Circunferencia" << endl;
            cout << "8 - Sair" << endl;
            cout << "Escolha uma opcao: ";
            cin >> aux;
            switch(aux){
                case 1:
                cout <<" Digite o raio do circulo: ";
                cin >> CirculoSimples->setRaio(raio);
                break;

                case 2:
                int aumento=0;
                cout <<"Digite o aumento percentual do raio: ";
                cin >> aumento;
                CirculoSimples->setAumentarRaio(aumento);
                break;

                case 3:
                cout << "Digite as coordenadas do centro do circulo 1 (x y): ";
                cin >> x1 >> y1;
                CirculoSimples->setCentrocirculos1(x1, y1);
                break;

                case 4:
                cout << "Digite as coordenadas do centro do circulo 2 (x y): ";
                cin >> x2 >> y2;
                CirculoSimples->setCentrocirculos1(x2, y2);
                break;

                case 5:
                CirculoSimples->setDistanciaCentroCirculos(x1, y1, x2, y2);
                cout << "Distancia entre os centros dos circulos: " << CirculoSimples->getDistanciaCentroCirculos() << endl;
                break;

                case 6:
                cout << "Area do circulo:" << CirculoSimples->getArea() << endl;
                break;
                
                case 7:
                cout << "Circunferencia do circulo:" << CirculoSimples->getcircunferencia() << endl;
                break;

                case 8:
                return 0;
                break;
            }

        }while(aux!=8);
        return 0;
}