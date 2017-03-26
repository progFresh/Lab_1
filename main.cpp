#include <iostream>
#include <string>

using namespace std;

int outputDescription () {
    cout << "||Программа для решения СЛАУ 2 и 3 порядка ||" << endl;
    cout << "||доступные типы данных: float,double,short||" << endl;
    cout << "---------------------------------------------" << endl;
    return 0;
}

// MARK: 3 перегрузочный функции
float getSolution(float ** array, short number) {
    float det;
    float det1;
    float det2;
    float det3;
    if (number == 2) {
        det = (array[0][0]*array[1][1]) - (array[0][1]*array[1][0]);
        if (det == 0 ) {
            return (float)1;
        }
        det1 = (array[0][2]*array[1][1]) - (array[0][1]*array[1][2]);
        det2 = (array[0][0]*array[1][2]) - (array[0][2]*array[1][0]);
        cout << "   x1 = " << det1/det << endl << "   x2 = " << det2/det << endl;
    } else if (number ==3 ) {
        det = (array[0][0]*array[1][1]*array[2][2]) + (array[0][1]*array[1][2]*array[2][0]) +
                (array[0][2]*array[1][0]*array[2][1]) - (array[0][0]*array[1][2]*array[2][1]) -
                (array[0][1]*array[1][0]*array[2][2]) - (array[0][2]*array[1][1]*array[2][0]);
        if (det == 0 ) {
            return (float)1;
        }
        det1 = (array[0][3]*array[1][1]*array[2][2]) + (array[0][1]*array[1][2]*array[2][3]) +
               (array[0][2]*array[1][3]*array[2][1]) - (array[0][3]*array[1][2]*array[2][1]) -
               (array[0][1]*array[1][3]*array[2][2]) - (array[0][2]*array[1][1]*array[2][3]);

        det2 = (array[0][0]*array[1][3]*array[2][2]) + (array[0][3]*array[1][2]*array[2][0]) +
               (array[0][2]*array[1][0]*array[2][3]) - (array[0][0]*array[1][2]*array[2][3]) -
               (array[0][3]*array[1][0]*array[2][2]) - (array[0][2]*array[1][3]*array[2][0]);

        det3 = (array[0][0]*array[1][1]*array[2][3]) + (array[0][1]*array[1][3]*array[2][0]) +
               (array[0][3]*array[1][0]*array[2][1]) - (array[0][0]*array[1][3]*array[2][1]) -
               (array[0][1]*array[1][0]*array[2][3]) - (array[0][3]*array[1][1]*array[2][0]);
        cout << "   x1 = " << det1/det << endl << "   x2 = " << det2/det << endl << "   x3 = " << det3/det << endl;
    }
    return (float)0;
}

short getSolution(short ** array, short number) {
    short det;
    short det1;
    short det2;
    short det3;
    if (number == 2) {
        det = (array[0][0]*array[1][1]) - (array[0][1]*array[1][0]);
        if (det == 0 ) {
            return (short)1;
        }
        det1 = (array[0][2]*array[1][1]) - (array[0][1]*array[1][2]);
        det2 = (array[0][0]*array[1][2]) - (array[0][2]*array[1][0]);
        cout << "   x1 = " << det1/det << endl << "   x2 = " << det2/det << endl;

    } else if (number ==3 ) {
        det = (array[0][0]*array[1][1]*array[2][2]) + (array[0][1]*array[1][2]*array[2][0]) +
              (array[0][2]*array[1][0]*array[2][1]) - (array[0][0]*array[1][2]*array[2][1]) -
              (array[0][1]*array[1][0]*array[2][2]) - (array[0][2]*array[1][1]*array[2][0]);
        if (det == 0 ) {
            return (short)1;
        }
        det1 = (array[0][3]*array[1][1]*array[2][2]) + (array[0][1]*array[1][2]*array[2][3]) +
               (array[0][2]*array[1][3]*array[2][1]) - (array[0][3]*array[1][2]*array[2][1]) -
               (array[0][1]*array[1][3]*array[2][2]) - (array[0][2]*array[1][1]*array[2][3]);

        det2 = (array[0][0]*array[1][3]*array[2][2]) + (array[0][3]*array[1][2]*array[2][0]) +
               (array[0][2]*array[1][0]*array[2][3]) - (array[0][0]*array[1][2]*array[2][3]) -
               (array[0][3]*array[1][0]*array[2][2]) - (array[0][2]*array[1][3]*array[2][0]);

        det3 = (array[0][0]*array[1][1]*array[2][3]) + (array[0][1]*array[1][3]*array[2][0]) +
               (array[0][3]*array[1][0]*array[2][1]) - (array[0][0]*array[1][3]*array[2][1]) -
               (array[0][1]*array[1][0]*array[2][3]) - (array[0][3]*array[1][1]*array[2][0]);
        cout << "   x1 = " << det1/det << endl << "   x2 = " << det2/det << endl << "   x3 = " << det3/det << endl;
    }
    return (short)0;
}

double getSolution(double ** array, short number) {
    double det;
    double det1;
    double det2;
    double det3;
    if (number == 2) {
        det = (array[0][0]*array[1][1]) - (array[0][1]*array[1][0]);
        if (det == 0 ) {
            return (double)1;
        }
        det1 = (array[0][2]*array[1][1]) - (array[0][1]*array[1][2]);
        det2 = (array[0][0]*array[1][2]) - (array[0][2]*array[1][0]);
        cout << "   x1 = " << det1/det << endl << "   x2 = " << det2/det << endl;

    } else if (number ==3 ) {
        det = (array[0][0]*array[1][1]*array[2][2]) + (array[0][1]*array[1][2]*array[2][0]) +
              (array[0][2]*array[1][0]*array[2][1]) - (array[0][0]*array[1][2]*array[2][1]) -
              (array[0][1]*array[1][0]*array[2][2]) - (array[0][2]*array[1][1]*array[2][0]);
        if (det == 0 ) {
            return (double)1;
        }
        det1 = (array[0][3]*array[1][1]*array[2][2]) + (array[0][1]*array[1][2]*array[2][3]) +
               (array[0][2]*array[1][3]*array[2][1]) - (array[0][3]*array[1][2]*array[2][1]) -
               (array[0][1]*array[1][3]*array[2][2]) - (array[0][2]*array[1][1]*array[2][3]);

        det2 = (array[0][0]*array[1][3]*array[2][2]) + (array[0][3]*array[1][2]*array[2][0]) +
               (array[0][2]*array[1][0]*array[2][3]) - (array[0][0]*array[1][2]*array[2][3]) -
               (array[0][3]*array[1][0]*array[2][2]) - (array[0][2]*array[1][3]*array[2][0]);

        det3 = (array[0][0]*array[1][1]*array[2][3]) + (array[0][1]*array[1][3]*array[2][0]) +
               (array[0][3]*array[1][0]*array[2][1]) - (array[0][0]*array[1][3]*array[2][1]) -
               (array[0][1]*array[1][0]*array[2][3]) - (array[0][3]*array[1][1]*array[2][0]);
        cout << "   x1 = " << det1/det << endl << "   x2 = " << det2/det << endl << "   x3 = " << det3/det << endl;
    }
    return (double)0;
}

// MARK: шаблонная функция 
template < typename T >
T fillArray ( T ** array , short number ) {
    for (int i = 0; i < number; i++) {
        for(int j = 0; j<number; j++) {
            cout << "a[" << i << "][" << j << "]= ";
            if(!(cin >> array[i][j])) {
                cin.clear();
                while (cin.get() != '\n');
                return (T)1;
            }
        }
        // дополнительный ввод для элементов 'b'
        cout << "b[" << i << "]= ";
        if (!(cin >> array[i][number])) {
            cin.clear();
            while (cin.get() != '\n');
            return (T)1;
        }
    }
    return (T)0;
}

// MARK: входная функция
int main() {
    short equationType;
    string readForQuit;
    string variableType;
    bool canContinue;

    setlocale(LC_ALL, "Russian");
    outputDescription();

    do {
        canContinue = true;
        // System("cls")

        // MARK: ввод порядка и проверка на корректность
        cout << "введите порядок уравнения (2 или 3)" << endl;
        if (!(cin >> equationType)) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "неверный ввод" << endl;
            canContinue = false;
        } else {
            if (equationType != 2 && equationType != 3 ) {
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
            if (variableType == "float") {
                // FLOAT
                // Инициализация
                float **arrayFloat;
                arrayFloat = new float * [equationType];
                for (int i = 0; i < equationType; i++) {
                    arrayFloat[i] = new float [equationType+1];
                }
                // Заполнение:
                if (fillArray(arrayFloat, equationType) !=0 ) {
                    cout << "произошла ошибка ввода!" << endl;
                    canContinue = false;
                }
                if (canContinue) {
                    if (getSolution(arrayFloat, equationType) !=0 ) {
                        cout << "ошибка: детерминант = 0" << endl;
                    }
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
                // Заполнение:
                if (fillArray(arrayShort, equationType)!=0) {
                    cout << "произошла ошибка ввода!" << endl;
                    canContinue = false;
                }
                if (canContinue) {
                    if (getSolution(arrayShort, equationType) !=0 ) {
                        cout << "ошибка: детерминант = 0" << endl;
                    }
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
                // Заполнение:
                if (fillArray(arrayDouble, equationType)!=0) {
                    cout << "произошла ошибка ввода!" << endl;
                    canContinue = false;
                }
                if (canContinue) {
                    if (getSolution(arrayDouble, equationType) !=0 ) {
                        cout << "ошибка: детерминант = 0" << endl;
                    }
                }
                // Удаление:
                for (int i = 0; i < equationType; i++) {
                    delete [] arrayDouble[i];
                }
                delete [] arrayDouble;
            }
        }
        cout << "для выхода введите \'y\', для продолжения любую другую клавишу" << endl;
    } while(cin >> readForQuit && readForQuit != "y");

    return 0;
}