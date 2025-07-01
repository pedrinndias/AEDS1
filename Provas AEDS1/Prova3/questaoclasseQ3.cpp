#include<iostream>
#include<string>
using namespace std;

class Relogio{
    private:

        int hora;
        int minuto;
        int segundo;

    public:
        Relogio(int hora=0, int minuto=0, int segundo=0){

            this ->hora=hora;
            this ->minuto=minuto;
            this ->segundo=segundo;

        }

        void setHora(int H){hora = H ;}
        void setMinuto(int M){minuto = M ;}
        void setSegundo(int S){segundo = S ;}

        int getHoras(){return } // não sei retorna os valores atuais por referencia

}