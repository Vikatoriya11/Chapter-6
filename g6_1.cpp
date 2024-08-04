//читает клавиатурный ввод до символа @ и повторяет его, за исключением десятичных цифр
//преобразует каждую букву верхнего регистра в букву нижнего регистра и наоборот. 
#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char **argv)
{
    char ch;

    while(true) {
        ch=cin.get();
           if (ch=='@')
               break;
        if (isdigit(ch))
            continue;
        if (isupper(ch)) {
            ch = tolower(ch);
        } else if (islower(ch)) {
            ch = toupper(ch);
        }
        cout<<ch;
    }
    return 0;
}
	