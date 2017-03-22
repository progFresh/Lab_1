#include <iostream>

using namespace std;                                                                                            //include conio.h +_getch();

int main() {
    string equationType;
    string readForQuit;
    string variableType;
    bool canContinue;

    setlocale(LC_ALL, "Russian");

    do {
        canContinue = true;
        cout << "\033[2J\033[1;1H";                                                                     // System("cls")

        // MARK: ввод порядка и проверка на корректность
        cout << "введите порядок уравнения (2,3 или 4)" << endl;
        if (!(cin >> equationType)) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "неверный ввод" << endl;
            canContinue = false;
        } else {
            if (equationType != "2" && equationType != "3" && equationType !="4") {
                cout << "не могу решить задачу такого порядка :)" << endl;
                canContinue = false;
            }
        }

        // MARK: ввод типа данных
        if (canContinue) {
            cout << "введите тип данных" << endl;
            if (!(cin >> variableType)) {
                cin.clear();
                while (cin.get() != '\n');
                cout << "неверный ввод" << endl;
                canContinue = false;
            } else {
                if (variableType != "short" && variableType != "double" && variableType != "float") {
                    cout << "не могу решить задачу c таким типом :)" << endl;
                    canContinue = false;
                }
            }
        }
        //TODO

        cout << "для выхода введите \'y\'" << endl;
    } while(cin >> readForQuit && readForQuit != "y");

    return 0;
}