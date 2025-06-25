#include <iostream>
using namespace std;
class Relogio {
private:
    int hora;
    int minuto;
    int segundo;
public:
    Relogio() {
        hora = 0;
        minuto = 0;
        segundo = 0;
    }
    Relogio(int h, int m, int s) {
        setHora(h, m, s);
    }
    void setHora(int h, int m, int s) {
        if (h >= 0 && h < 24) {
            hora = h;
        } else {
            hora = 0;
            cout << "Aviso: Hora invalida. Definida como 0." << endl;
        }

        if (m >= 0 && m < 60) {
            minuto = m;
        } else {
            minuto = 0;
            cout << "Aviso: Minuto invalido. Definido como 0." << endl;
        }

        if (s >= 0 && s < 60) {
            segundo = s;
        } else {
            segundo = 0;
            cout << "Aviso: Segundo invalido. Definido como 0." << endl;
        }
    }
    void getHora(int &h, int &m, int &s) {
        h = hora;
        m = minuto;
        s = segundo;
    }
    void avancaHorario() {
        segundo++;

        if (segundo >= 60) {
            segundo = 0;
            minuto++;

            if (minuto >= 60) {
                minuto = 0;
                hora++;

                if (hora >= 24) {
                    hora = 0;
                }
            }
        }
    }
    void imprimeHorario() {
        cout.width(2);
        cout.fill('0');
        cout << hora << ":";
        cout.width(2);
        cout.fill('0');
        cout << minuto << ":";
        cout.width(2);
        cout.fill('0');
        cout << segundo << endl;
    }
};
int main() {
    Relogio meuRelogio1;
    meuRelogio1.setHora(0, 0, 0);
    return 0;
}