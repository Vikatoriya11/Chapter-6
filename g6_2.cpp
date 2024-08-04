//читающет в массив до 10 значений
//прекращает ввод при получении нечисловой величины
//выдавает среднее значение полученных чисел, а также количество значений в массиве, превышающих среднее. 
#include <iostream>
using namespace std;
const int ArSize=4;
int main()
{

    double massiv[ArSize];
    int i=0;
    while(i<ArSize) {
        double a;
        cout<<"a: ";
        cin>>a;
        if (std::cin.fail()) {
            break; // Выход из цикла при нечисловом вводе
        }
        massiv[i]=a;
        ++i;
        std::cin.clear();
    }
    double sum = 0;
    for (int i=0; i<ArSize; i++)
        sum+=massiv[i];

    double b=0;
    for(int i=0; i<ArSize; i++) {
        if(massiv[i]>(sum/ArSize))
            b++;
    }
    cout<<sum/ArSize<<endl;
    cout<<b<<endl;

    return 0;
}
