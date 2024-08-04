#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct obshestvo {
    string name;
    double sum;
};

int main(int argc, char **argv)
{
    ifstream inputFile("file.txt");
    if (!inputFile) {
        cerr << "Ошибка открытия файла!" << endl;
        return 1;
    }

    int arsize;
    inputFile >> arsize;
    inputFile.ignore(); // Игнорируем оставшийся символ новой строки

    obshestvo *obs = new obshestvo[arsize];

    for (int i = 0; i < arsize; i++) {
        getline(inputFile, obs[i].name);
        inputFile >> obs[i].sum; 
        inputFile.ignore(); // Игнорируем оставшийся символ новой строки
    }

    cout << "Grand Patrons:" << endl;
    bool grandPatronsFound = false;
    for (int i = 0; i < arsize; i++) {
        if (obs[i].sum >= 10000) {
            cout << obs[i].name << "    " << obs[i].sum << endl;
            grandPatronsFound = true;
        }
    }

    if (!grandPatronsFound) {
        cout << "None" << endl;
    }

    cout << "Patrons:" << endl;
    bool patronsFound = false;
    for (int i = 0; i < arsize; i++) {
        if (obs[i].sum < 10000) {
            cout << obs[i].name << "    " << obs[i].sum << endl;
            patronsFound = true;
        }
    }

    if (!patronsFound) {
        cout << "None" << endl;
    }

    delete[] obs;
    return 0;
}
