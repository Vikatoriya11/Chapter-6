#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

    char ch;
    cout<<"Please enter 'c' or 'p' or 't' or 'g'";
    cin >> ch;
    while (ch != '@') {
        switch (ch) {
        case 'c':
        case 'C':
            cout << "5 + 5 = " << (5 + 5) << endl;
            break;

        case 't':
        case 'T':
            cout << "10 + 10 = " << (10 + 10) << endl;
            break;

        case 'p':
        case 'P':
            cout << "100 / 2 = " << (100 / 2) << endl;
            break;

        case 'g':
        case 'G':
            cout << "Gaga" << endl;
            break;

        default:
            cout << "Ne to vvel!" << endl;
        }
        // Запрос нового символа для ввода
        cout << "ch: "; // Добавляем вывод для удобства
        cin >> ch;
    }

    return 0;
}
