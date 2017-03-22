#include <iostream>

using namespace std;                                                                                            //include conio.h +_getch();

template < typename T >
void fillArray ( T ** array , short N ) {

}

int main() {
    short equationType;
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
            if (equationType != 2 && equationType != 3 && equationType != 4) {
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
        if (canContinue) {
            // создание
            if (variableType == "float") {
                // FLOAT
                // Инициализация
                float **arrayFloat;
                arrayFloat = new float * [equationType];
                for (int i = 0; i < equationType; i++) {
                    arrayFloat[i] = new float [equationType+1];
                }
                // Удаление:
                for (int i = 0; i < equationType; i++) {
                    delete [] arrayFloat[i];
                }
                delete [] arrayFloat;
            } else if (variableType == "short") {
                // SHORT
                // Инициализация
                short **arrayShort;
                arrayShort = new short * [equationType];
                for (int i = 0; i < equationType; i++) {
                    arrayShort[i] = new short [equationType+1];
                }
                // Удаление:
                for (int i = 0; i < equationType; i++) {
                    delete [] arrayShort[i];
                }
                delete [] arrayShort;
            } else if (variableType == "double") {
                // DOUBLE
                // Инициализация
                double **arrayDouble;
                arrayDouble = new double * [equationType];
                for (int i = 0; i < equationType; i++) {
                    arrayDouble[i] = new double [equationType+1];
                }
                // Удаление:
                for (int i = 0; i < equationType; i++) {
                    delete [] arrayDouble[i];
                }
                delete [] arrayDouble;
            }
        }
        cout << "для выхода введите \'y\'" << endl;
    } while(cin >> readForQuit && readForQuit != "y");

    return 0;
}