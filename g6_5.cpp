#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char **argv)
{

    double tvarp = 0;
    double res = 0;
    double temp = 0;

    while(true) {
        cout<<"Enter tvarp: ";
        cin>>tvarp;

        if (cin.fail()) {
            cin.clear(); // сброс флага ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // игнорировать оставшийся ввод
            cout << "Bye" << endl;
            break;
        }

        if (tvarp < 0) {
            cout << "Bye" << endl;
            break;
        }

        if (tvarp<=5000)
            cout<<(tvarp*0.0)<<endl;
        else if (tvarp>5000 && tvarp<=15000) {
            temp = tvarp-5000;
            res = 5000*0.00 + temp * 0.10;
            cout<<res<<endl;
        } else if (tvarp>15000 && tvarp<=35000) {
            temp = tvarp - 5000 - 10000;
            res = 5000*0.00 + 10000*0.10 + temp *0.15;
            cout<<res<<endl;
        } else {
            temp = tvarp - 5000 - 10000 - 20000;
            res = 5000*0.00 + 10000*0.10 + 20000 *0.15 + temp * 0.20;
            cout<<res<<endl;
        }

    }
    return 0;
}
