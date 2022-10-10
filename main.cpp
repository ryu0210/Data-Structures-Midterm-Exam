#include <iostream>

using namespace std;

void Menu (){
    cout << "----------------------------------------" << endl;
    cout << "Press a for Addition" << endl;
    cout << "Press b for Substraction" << endl;
    cout << "Press c for Multiplication" << endl;
    cout << "Press d for Division" << endl;
    cout << "Press e for Sine Calculator" << endl;
    cout << "Press f for Cosine Calculator" << endl;
    cout << "Press g for Tangent Calculator" << endl;
    cout << "Press h for Square Root Calculator" << endl;
    cout << "Press i for Exponent Calculator" << endl;
    cout << "Press j for Logarithm (log) Calculator" << endl;
    cout << "Press k for Natural Logarithm Calculator" << endl;
    cout << "Press any number to exit the program" << endl;
    cout << "----------------------------------------" << endl;
}

int main()
{
    int q;
    while (true) {
        Menu();
        cout << "Select your option: ";
        cin >> q;
        if (q == 1) {
            cout << "hey";
        }
        else {
            cout << "Thank you for using Calculator";
            break;
        }
    }
    int a = -5, b = 2, c;
    c = a+b;
    cout << "The result is: " << c << endl;
    cout << "Hello world!" << endl;
    return 0;
}
