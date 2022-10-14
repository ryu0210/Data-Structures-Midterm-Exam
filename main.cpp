#include <iostream>
#include <queue>

using namespace std;

#include "ScientificCalculator.h"

void MenuBar(){
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "List of Calculations:" << endl;
    cout << "Press 1 for Addition" << endl;
    cout << "Press 2 for Subtraction" << endl;
    cout << "Press 3 for Multiplication" << endl;
    cout << "Press 4 for Division" << endl;
    cout << "Press 5 for Sine Calculator" << endl;
    cout << "Press 6 for Cosine Calculator" << endl;
    cout << "Press 7 for Tangent Calculator" << endl;
    cout << "Press 8 for Square Root Calculator" << endl;
    cout << "Press 9 for Exponent/Power Calculator" << endl;
    cout << "Press 10 for Logarithm (log) Calculator" << endl;
    cout << "Press 11 for Natural Logarithm Calculator" << endl;
    cout << "Press anything else to turn off the program" << endl;
}

void Menubar2(){
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "What would you like to do next?" << endl;
    cout << "Press 1 to Calculate Recent Output [Ex: (3*2) + 1, (5^3) + 1]" << endl;
    cout << "Press 2.Calculate Recent Output with another Calculation[Ex: (3*2) - (2+1), (6+6) / (1/4)]" << endl;
    cout << "Press 3.See or Delete History of Calculation" << endl;
    cout << "Press 4.End Program" << endl;
}

void Menubar3(){
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "What would you like to do next with the two outputs made?" << endl;
    cout << "Press 1 to Add the outputs" << endl;
    cout << "Press 2 to Subtract the outputs" << endl;
    cout << "Press 3 to Multiply the outputs" << endl;
    cout << "Press 4 to Divide the outputs" << endl;
    cout << "Press 5 to Power the outputs" << endl;
    cout << "Press 6 to Logarithmize the outputs" <<endl;
}

void Menubar4(){
    cout << "\nWhat would you like to do in the history bar?" << endl;
    cout << "1.See History" << endl;
    cout << "2.Delete History" << endl;
}

int button;
int Proccess;
int History_Button;

ScientificCalculator Attempts; /// Initiating the Object for the calculation
ScientificCalculator Start; /// Initiating the Object for the history process

int main()
{
    MenuBar(); /// Prints out the first menu bar
    cout << "\nSelect Calculation:" << endl;
    cin >> button;
    Attempts.Calculation(button); /// Starts the first calculation

    bool limit = true; /// Use boolean "true for the limit to keep the loop going without any specific conditions
    int limit2 = 0;

    while (limit == true){
        Menubar2(); /// Prints out menu bar 2
        cout << "Insert Here: ";
        cin >> Proccess; /// Input the choices from menu bar 2
        limit2++;


        if (Proccess == 1) {
            cout << "\nSelect Calculation:" << endl;
            cin >> button;

            Attempts.Continuing_Calculation(button); /// Starts calculating the recent output continously
        }

        else if (Proccess == 2){
            cout << "\nInstruction: For this method, we will make an alternate calculation, which \n"
            "results the alternate output calculated, you have found your previous output, let's begin" << endl;

            cout << "\nSelect Calculation:" << endl;
            cin >> button;
            Attempts.Alternate_Calculation(button); /// Make new calculation and output (alternate)

            Menubar3();
            cout << "\nSelect Calculation:" << endl;
            cin >> button;

            Attempts.Alternate_Calculation_2(button); /// Make new calculation with previous output and alternate output
        }

        else if (Proccess == 3){
            Menubar4();
            cout << "Insert Here:" << endl;
            cin >> History_Button; /// Choose History option

            if (History_Button == 1){
                Start.Show_History(); /// To show history, can still be updated
            }

            else if (History_Button == 2){
                Start.Delete_History(); /// To delete history
                                        /// Warning: Delete_History terminates the program (Notice the longer loading/processing time when deleting?)
                                        /// That proves that output results has been deleted with delete[] operator
            }
            else {
                cout << "Invalid Button!" << endl;
            }
        }

        else {
            cout << "Thank you for using the calculator!";
            break; /// Ends Program
        }

    }

    return 0;
}
