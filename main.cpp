#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    const int n_col = 5;
    int position = 1;
    int limite;
    char recommenser;

    do {
        // Obtenir une saisie correcte
        do {
            cout  << "Entrer une valeur [2 - 1000] : ";
            cin >> limite;
            cout << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (limite < 2 || limite > 1000);

        cout << "Voici la liste des nombres premiers" << endl;

        // Verifier si le nombre est un nombre premier
        for (int i = 2; i <= limite; i++) {
            for (int j = 1; j <= i; j++) {
                if (i % j == 0 && j != 1 && j != i) break;
                if (j == i) {
                    cout << setw(10) << i;
                    if (position == n_col) {
                        cout << endl;
                        position = 0;
                    }
                    position++;
                }
            }
        }

        cout << endl;
        if (position != 1) cout << endl;
        position = 1;

        // Demander si l'utilisateur veut recommenser
        do {
            cout << "Vous voulez reccomencer [O/N] : ";
            cin >> recommenser;
            cout << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (recommenser != 'N' && recommenser != 'O');

    } while (recommenser != 'N');

    cout << "Fin de programme" << endl;

    return 0;
}
