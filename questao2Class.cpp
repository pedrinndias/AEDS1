#include<iostream>
#include<string>

class Eletrodomestico{
    private:
        int potencia;
        int tempo; // em horas de uso diario
    
    public:
        Eletrodomestico(int potencia=0, int tempo=0){
            this->potencia = potencia;
            this->tempo = tempo;
        }

        void setPotencia(int potencia){this->potencia = potencia;}
        void setTempo(int tempo){this->tempo = tempo;}
        int getPotencia(){return potencia;}
        int getTempo(){return tempo;}
        int getCalcularConsumoMensal(){return potencia*tempo*30;}// consumo estimado no mes
        int getImprimirconsumodiario(){return getCalcularConsumoDiario();}

    protected:
        int getCalcularConsumoDiario(){return potencia*tempo;}
};

int main(){
    Eletrodomestico E;
    int tempo;
    int potencia;
    int aux;

    cout << "***Calculo de gastos***" << endl;
    do{
        cout << "1- Setar Potencia" << endl;
        cout << "2- Setar tempo de uso" << endl;
        cout << "3- Conferir potencia" << endl;
        cout << "4- Conferir tempo" << endl;
        cout << "5- Calcular consumo mensal" << endl;
        cout << "6- Calcular consumo diario" << endl;
        cout << "7- Sair" << endl;
        cin >> aux;
        switch(aux){
            case 1:
                cout << "Escreva o valor da potencia: " << endl;
                cin >> potencia;
                E.setPotencia(potencia);
                break;
            case 2:
                cout << "Escreva o valor do tempo: " << endl;
                cin >> tempo;
                E.setTempo(tempo);
                break;
            case 3:
                cout << E.getPotencia() << endl;
                break;
            case 4:
                cout << E.getTempo() << endl;
                break;
                break;
            case 5:
                cout << E.getCalcularConsumoMensal() << endl;
                break;
            case 6:
                cout << E.getImprimirconsumodiario() << endl;
                break;
            case 7:
                break;
        }

    }while(aux!=7);
    return 0;
}