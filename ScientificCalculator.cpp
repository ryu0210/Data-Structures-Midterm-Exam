#include <iostream>

using namespace std;
#include <cmath>

#include "ScientificCalculator.h"

int ans_no;
double a, b;
double x, y, ans, alt_ans;
double c;
double radian, pi = 3.14;

/// Default Constructor
ScientificCalculator::ScientificCalculator(){
    Option = -1;

}

void ScientificCalculator::Calculation(int choice){
    Option = choice;

    switch (Option){
    case 1:
        cout << "Insert your first addend: ";
        cin >> a;

        cout << "Insert your second addend: ";
        cin >> b;

        x = a+b;
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << a << " + "  << b << " = " << x << endl;
        break;

    case 2:
        cout << "The formula follows: Minuend - Subtrand = difference" << endl;
        cout << "Insert your Minuend: ";
        cin >> a;

        cout << "Insert your Subtrand: ";
        cin >> b;

        x = a-b;
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << a << " - "  << b << " = " << x << endl;
        break;

    case 3:
        cout << "Insert your first multiple: ";
        cin >> a;

        cout << "Insert your second multiple: ";
        cin >> b;

        x = a*b;
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << a << " x "  << b << " = " << x << endl;
        break;

    case 4:
        cout << "The formula follows: Dividend / Divisor = quotient" << endl;
        cout << "Insert your Dividend: ";
        cin >> a;

        cout << "Insert your Divisor: ";
        cin >> b;

        x = a/b;
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << a << " / "  << b << " = " << x << endl;
        break;

    case 5:
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of sin(x)" << endl;
        cout << "2.Find value of sin(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            cout << "Enter value of sin(x): ";
            cin >> a;

            x = sin(a);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " "sin(" << a << ") = " << x << endl;
        }

        else if (c == 2){
            cout << "Enter Degree Angle: ";
            cin >> a;

            radian = a*3.14159/180;
            x = sin(radian);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " "sin(" << a << ") = " << x << endl;
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 6:
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of cos(x)" << endl;
        cout << "2.Find value of cos(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            cout << "Enter value of cos(x): ";
            cin >> a;

            x = cos(a);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " << "cos(" << a << ") = " << x << endl;
        }

        else if (c == 2){
            cout << "Enter Degree Angle: ";
            cin >> a;

            radian = a*3.14159/180;
            x = cos(radian);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " "cos(" << a << ") = " << x << endl;
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 7:
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of tan(x)" << endl;
        cout << "2.Find value of tan(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            cout << "Enter value of tan(x): ";
            cin >> a;

            x = tan(a);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " << "tan(" << a << ") = " << x << endl;
        }

        else if (c == 2){
            cout << "Enter Degree Angle: ";
            cin >> a;

            radian = a*3.14159/180;
            x = tan(radian);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " << "tan(" << a << ") = " << x << endl;
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 8:
        cout << "Enter Number for Calculating Square: ";
        cin >> a;

        x = sqrt(a);
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << "sqrt(" << a << ") = " << x << endl;
        break;

    case 9:
        cout << "The formula follows: Base Number ^ Exponent Number = Result" << endl;
        cout << "Enter the Base Number: ";
        cin >> a;

        cout << "Enter the Exponent Number: ";
        cin >> b;

        x = pow(a, b);
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << a << '^' << b << " = " << x << endl;
        break;

    case 10:
        cout << "The formula follows: log_Base Number(Argument) = Exponent" << endl;
        cout << "Enter the log argument: ";
        cin >> a;

        cout << "Enter the log base: ";
        cin >> b;

        x = log10(a)/log10(b);
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << "log_" << b << '(' << a << ") = " << x << endl;
        break;

    case 11:
        cout << "Enter Natural Logarithm value: ";
        cin >> a;

        x = log(a); /// Log without base is equal to Natural Logarithm (ln)
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << "ln(" << a << ") = " << x << endl;
        break;

    default:
        cout << "\nThank you for using the calculator!";

    /// Then insert while options later
    }
}

void ScientificCalculator::Continuing_Calculation(int choice) {
    Option = choice;

    switch (Option){
    case 1:
        cout << "Insert your addend: ";
        cin >> a;


        ans = x;
        x += a;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " + "  << ans << " = " << x << endl;
        break;

    case 2:
        cout << "The formula follows: Minuend - Subtrand = difference" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.Previous Output - Subtrand" << endl;
        cout << "2.Minuend - Previous Output" << endl;
        cin >> c;

        if (c == 1){
            cout << "Insert your Subtrand: ";
            cin >> a;

            ans = x;
            x = x - a;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << ans << " - "  << a << " = " << x << endl;
        }

        else if (c == 2){
            cout << "Insert your Minuend: ";
            cin >> a;

            ans = x;
            x = a - x;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << a << " - "  << ans << " = " << x << endl;
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 3:
        cout << "Insert your multiple: ";
        cin >> a;


        ans = x;
        x *= a;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " x "  << ans << " = " << x << endl;
        break;

    case 4:
        cout << "The formula follows: Dividend / Divisor = quotient" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.Previous Output / Divisor" << endl;
        cout << "2.Dividend / Previous Output" << endl;
        cin >> c;

        if (c == 1){
            cout << "Insert your Divisor: ";
            cin >> a;

            ans = x;
            x = x / a;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << ans << " / "  << a << " = " << x << endl;
        }

        else if (c == 2){
            cout << "Insert your Dividend: ";
            cin >> a;

            ans = x;
            x = a / x;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << a << " / "  << ans << " = " << x << endl;
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 5:
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of sin(x) with Previous Output" << endl;
        cout << "2.Find value of sin(x) using degrees and radians with Previous Output" << endl;
        cin >> c;

        if (c == 1){

            ans = x;
            x = sin(x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "sin(" << ans << ") = " << x << endl;
        }

        else if (c == 2){

            ans = x;
            radian = x*3.14159/180;
            x = sin(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "sin(" << ans << ") = " << x << endl;
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 6:
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of cos(x) with Previous Output" << endl;
        cout << "2.Find value of cos(x) using degrees and radians with Previous Output" << endl;
        cin >> c;

        if (c == 1){

            ans = x;
            x = cos(x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "cos(" << ans << ") = " << x << endl;
        }

        else if (c == 2){

            ans = x;
            radian = x*3.14159/180;
            x = cos(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "cos(" << ans << ") = " << x << endl;
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 7:
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of tan(x) with Previous Output" << endl;
        cout << "2.Find value of tan(x) using degrees and radians with Previous Output" << endl;
        cin >> c;

        if (c == 1){

            ans = x;
            x = tan(x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "tan(" << ans << ") = " << x << endl;
        }

        else if (c == 2){

            ans = x;
            radian = x*3.14159/180;
            x = tan(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "tan(" << ans << ") = " << x << endl;
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 8:
        ans = x;
        x = sqrt(x);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << "sqrt(" << ans << ") = " << x << endl;
        break;

    case 9:
        cout << "The formula follows: Base Number ^ Exponent Number = Result" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.Base Number ^ Previous Output" << endl;
        cout << "2.Previous Output ^ Exponent Number" << endl;

        if (c == 1){
            cout << "Insert your Base Number: ";
            cin >> a;

            ans = x;
            x = pow(a, x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << a << '^'  << ans << " = " << x << endl;
        }

        else if (c == 2){
            cout << "Insert your Exponent Number: ";
            cin >> a;

            ans = x;
            x = pow(x, a);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << ans << '^'  << a << " = " << x << endl;
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 10:
        cout << "The formula follows: log_Base Number(Argument) = Exponent" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.log_Base Number(Previous Output)" << endl;
        cout << "2.log_Previous Output(Argument)" << endl;

        if (c == 1){
            cout << "Enter the log base: ";
            cin >> a;

            ans = x;
            x = log10(x)/log10(a);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "log_" << a << '(' << ans << ") = " << x << endl;
        }

        else if (c == 2){
            cout << "Insert your log argument: ";
            cin >> a;

            ans = x;
            x = log10(a)/log10(x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "log_" << ans << '(' << a << ") = " << x << endl;
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 11:

        ans = x;
        x = log(x);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << "ln(" << ans << ") = " << x << endl;
        break;

    default:
        cout << "\nThank you for using the calculator!";

    /// Then insert while options later

    /// To create history, use string converter, started with ContinuingCalculation

    /// To create loop answer for history, put number increment (ans1, ans2, ans3, ans4, ans5)
    }
}

void ScientificCalculator::Alternate_Calculation(int choice) {
    Option = choice;

    switch (Option){
    case 1:
        cout << "Insert your first addend: ";
        cin >> a;

        cout << "Insert your second addend: ";
        cin >> b;

        y = a+b;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " + "  << b << " = " << y << endl;
        break;

    case 2:
        cout << "The formula follows: Minuend - Subtrand = difference" << endl;
        cout << "Insert your Minuend: ";
        cin >> a;

        cout << "Insert your Subtrand: ";
        cin >> b;

        y = a-b;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " - "  << b << " = " << y << endl;
        break;

    case 3:
        cout << "Insert your first multiple: ";
        cin >> a;

        cout << "Insert your second multiple: ";
        cin >> b;

        y = a*b;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " x "  << b << " = " << y << endl;
        break;

    case 4:
        cout << "The formula follows: Dividend / Divisor = quotient" << endl;
        cout << "Insert your Dividend: ";
        cin >> a;

        cout << "Insert your Divisor: ";
        cin >> b;

        y = a/b;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " / "  << b << " = " << y << endl;
        break;

    case 5:
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of sin(x)" << endl;
        cout << "2.Find value of sin(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            cout << "Enter value of sin(x): ";
            cin >> a;

            y = sin(a);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "sin(" << a << ") = " << y << endl;
        }

        else if (c == 2){
            cout << "Enter Degree Angle: ";
            cin >> a;

            radian = a*3.14159/180;
            y = sin(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "sin(" << a << ") = " << y << endl;
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 6:
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of cos(x)" << endl;
        cout << "2.Find value of cos(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            cout << "Enter value of cos(x): ";
            cin >> a;

            y = cos(a);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "cos(" << a << ") = " << y << endl;
        }

        else if (c == 2){
            cout << "Enter Degree Angle: ";
            cin >> a;

            radian = a*3.14159/180;
            y = cos(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "cos(" << a << ") = " << y << endl;
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 7:
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of tan(x)" << endl;
        cout << "2.Find value of tan(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            cout << "Enter value of tan(x): ";
            cin >> a;

            y = tan(a);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "tan(" << a << ") = " << y << endl;
        }

        else if (c == 2){
            cout << "Enter Degree Angle: ";
            cin >> a;

            radian = a*3.14159/180;
            y = tan(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "tan(" << a << ") = " << y << endl;
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 8:
        cout << "Enter Number for Calculating Square: ";
        cin >> a;

        y = sqrt(a);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << "sqrt(" << a << ") = " << y << endl;
        break;

    case 9:
        cout << "The formula follows: Base Number ^ Exponent Number = Result" << endl;
        cout << "Enter the Base Number: ";
        cin >> a;

        cout << "Enter the Exponent Number: ";
        cin >> b;

        y = pow(a, b);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << '^' << b << " = " << y << endl;
        break;

    case 10:
        cout << "The formula follows: log_Base Number(Argument) = Exponent" << endl;
        cout << "Enter the log argument: ";
        cin >> a;

        cout << "Enter the log base: ";
        cin >> b;

        y = log10(a)/log10(b);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << "log_" << b << '(' << a << ") = " << y << endl;
        break;

    case 11:
        cout << "Enter Natural Logarithm value: ";
        cin >> a;

        y = log(a);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << "ln(" << a << ") = " << y << endl;
        break;

    default:
        cout << "\nThank you for using the calculator!";

    /// Then insert while options later
    }
}

void ScientificCalculator::Alternate_Calculation_2(int choice) {
  Option = choice;

    switch (Option){
    case 1:
        ans = x;
        alt_ans = y;

        x = x + y;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << ans << " + "  << alt_ans << " = " << x << endl;
        break;

    case 2:
        cout << "The formula follows: Minuend - Subtrand = difference" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.Previous Output - Alternate Output" << endl;
        cout << "2.Alternate Output - Previous Output" << endl;
        cin >> c;

        if (c == 1){
            ans = x;
            alt_ans = y;

            x = x - y;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << ans << " - "  << alt_ans << " = " << x << endl;
        }

        else if (c == 2){
            ans = x;
            alt_ans = y;
            x = y - x;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << alt_ans << " - "  << ans << " = " << x << endl;
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 3:
        ans = x;
        alt_ans = y;

        x = x*y;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << ans << " x "  << alt_ans << " = " << x << endl;
        break;

    case 4:
        cout << "The formula follows: Dividend / Divisor = quotient" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.Previous Output / Alternate Output" << endl;
        cout << "2.Alternate Output / Previous Output" << endl;
        cin >> c;

        if (c == 1){
            ans = x;
            alt_ans = y;

            x = x / y;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << ans << " / "  << alt_ans << " = " << x << endl;
        }

        else if (c == 2){
            ans = x;
            alt_ans = y;

            x = y / x;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << alt_ans << " / "  << ans << " = " << x << endl;
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 5:
        cout << "The formula follows: Base Number ^ Exponent Number = Result" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.Previous Output ^ Alternate Output" << endl;
        cout << "2.Alternate Output ^ Previous Output" << endl;

        if (c == 1){
            ans = x;
            alt_ans = y;

            x = pow(x, y);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << ans << '^'  << alt_ans << " = " << x << endl;
        }

        else if (c == 2){
            ans = x;
            alt_ans = y;

            x = pow(y, x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << alt_ans << '^'  << ans << " = " << x << endl;
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 6:
        cout << "The formula follows: log_Base Number(Argument) = Exponent" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.log_Alternate Output(Previous Output)" << endl;
        cout << "2.log_Previous Output(Alternate Output)" << endl;

        if (c == 1){
            ans = x;
            alt_ans = y;

            x = log10(x)/log10(y);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "log_" << alt_ans << '(' << ans << ") = " << x << endl;
        }

        else if (c == 2){
            ans = x;
            alt_ans = y;

            x = log10(y)/log10(x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "log_" << ans << '(' << alt_ans << ") = " << x << endl;
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    default:
        cout << "\nThank you for using the calculator!";

    /// Then insert while options later
    }
}


