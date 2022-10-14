#include <iostream>

using namespace std;
#include <cmath>
#include <queue>
#include <sstream>
#include "ScientificCalculator.h"

int ans_no;                                             /// To show the answer number
double a, b;                                                /// To input the number for the calculations
double x, y;                                                    /// To store output
double ans, alt_ans;                                    /// To store answer and alternate answer
double c;                                                   /// For choice related operations
double radian, pi = 3.14;
stringstream sstream, sstream2;                                       /// To store "cout" line into a string
string history;                                                     /// Store history that has been converted by sstream
string* NewHistory;                                         /// For Pointer

/// Default Constructor
ScientificCalculator::ScientificCalculator(){
    Option = -1;

}

void ScientificCalculator::Calculation(int choice){
    Option = choice;

    queue<string> aqueue;
    queue<string> bqueue;
    queue<string> cqueue;
    queue<string> dqueue;
    queue<string> equeue;
    queue<string> fqueue;
    queue<string> gqueue;
    queue<string> hqueue;

	
    aqueue.push("Enter value of sin(x): \n" );
    bqueue.push("Enter Degree Angle: \n" );
    cqueue.push("Enter value of cos(x): \n" );
    dqueue.push("Enter Degree Angle: \n" );
    equeue.push("Enter value of tan(x): \n" );
    fqueue.push("Enter Degree Angle: \n" );
    gqueue.push("Enter Number for Calculating Square:: \n" );
    hqueue.push("Enter Natural Logarithm value: \n" );

	
    switch (Option){
    case 1:
        /// For Addition
        cout << "Insert your first addend: ";
        cin >> a;

        cout << "Insert your second addend: ";
        cin >> b;

        x = a+b;
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << a << " + "  << b << " = " << x << endl;
        sstream << "Ans" << ans_no << ": " << a << " + "  << b << " = " << x << endl;
        history = sstream.str();
        break;

    case 2:
        /// For Subtraction
        cout << "The formula follows: Minuend - Subtrand = difference" << endl;
        cout << "Insert your Minuend: ";
        cin >> a;

        cout << "Insert your Subtrand: ";
        cin >> b;

        x = a-b;
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << a << " - "  << b << " = " << x << endl;
        sstream << "Ans" << ans_no << ": " << a << " - "  << b << " = " << x << endl;
        history = sstream.str();
        break;

    case 3:
        /// For Multiplication
        cout << "Insert your first multiple: ";
        cin >> a;

        cout << "Insert your second multiple: ";
        cin >> b;

        x = a*b;
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << a << " x "  << b << " = " << x << endl;
        sstream << "Ans" << ans_no << ": " << a << " x "  << b << " = " << x << endl;
        history = sstream.str();
        break;

    case 4:
        /// For Division
        cout << "The formula follows: Dividend / Divisor = quotient" << endl;
        cout << "Insert your Dividend: ";
        cin >> a;

        cout << "Insert your Divisor: ";
        cin >> b;

        x = a/b;
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << a << " / "  << b << " = " << x << endl;
        sstream << "Ans" << ans_no << ": " << a << " / "  << b << " = " << x << endl;
        history = sstream.str();
        break;

    case 5:
        /// For Sine
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of sin(x)" << endl;
        cout << "2.Find value of sin(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            /// For value of sin(x)
            while (aqueue.size() > 0){
            	cout << aqueue.front();
            	aqueue.pop();
			};
            cin >> a;

            x = sin(a);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " "sin(" << a << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " "sin(" << a << ") = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// For value of sin(x) using Degree Angle
            while (bqueue.size() > 0){
            	cout << bqueue.front();
            	bqueue.pop();
			};
            cin >> a;

            radian = a*3.14159/180;
            x = sin(radian);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " "sin(" << a << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " "sin(" << a << ") = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 6:
        /// For Cosine
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of cos(x)" << endl;
        cout << "2.Find value of cos(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            /// For value of cos(x)
            while (cqueue.size() > 0){
            	cout << cqueue.front();
            	cqueue.pop();
			};
            cin >> a;

            x = cos(a);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " << "cos(" << a << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "cos(" << a << ") = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// For value of cos(x) using degree angle
            while (dqueue.size() > 0){
            	cout << dqueue.front();
            	dqueue.pop();
			};
            cin >> a;

            radian = a*3.14159/180;
            x = cos(radian);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " "cos(" << a << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " "cos(" << a << ") = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 7:
        /// For Tangent
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of tan(x)" << endl;
        cout << "2.Find value of tan(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            /// For value of tan(x)
            while (equeue.size() > 0){
            	cout << equeue.front();
            	equeue.pop();
			};
            cin >> a;

            x = tan(a);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " << "tan(" << a << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " "cos(" << a << ") = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// For value of tan(x) using degree angle
            while (fqueue.size() > 0){
            	cout << fqueue.front();
            	fqueue.pop();
			};
            cin >> a;

            radian = a*3.14159/180;
            x = tan(radian);
            ans_no = 1;
            cout << "Ans" << ans_no << ": " << "tan(" << a << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "tan(" << a << ") = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 8:
        /// For Square Root
        while (gqueue.size() > 0){
            	cout << gqueue.front();
            	gqueue.pop();
			};
        cin >> a;

        x = sqrt(a);
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << "sqrt(" << a << ") = " << x << endl;
        sstream << "Ans" << ans_no << ": " << "sqrt(" << a << ") = " << x << endl;
        history = sstream.str();
        break;

    case 9:
        /// For Exponential
        cout << "The formula follows: Base Number ^ Exponent Number = Result" << endl;
        cout << "Enter the Base Number: ";
        cin >> a;

        cout << "Enter the Exponent Number: ";
        cin >> b;

        x = pow(a, b);
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << a << '^' << b << " = " << x << endl;
        sstream << "Ans" << ans_no << ": " << a << '^' << b << " = " << x << endl;
        history = sstream.str();
        break;

    case 10:
        /// For Logarithm [logb(a)]
        cout << "The formula follows: log_Base Number(Argument) = Exponent" << endl;
        cout << "Enter the log argument: ";
        cin >> a;

        cout << "Enter the log base: ";
        cin >> b;

        x = log10(a)/log10(b);
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << "log_" << b << '(' << a << ") = " << x << endl;
        sstream << "Ans" << ans_no << ": " << "log_" << b << '(' << a << ") = " << x << endl;
        history = sstream.str();
        break;

    case 11:
        /// For Natural Logarithm [ln]
        while (hqueue.size() > 0){
            	cout << hqueue.front();
            	hqueue.pop();
			};
        cin >> a;

        x = log(a); /// Log without base is equal to Natural Logarithm (ln)
        ans_no = 1;
        cout << "Ans" << ans_no << ": " << "ln(" << a << ") = " << x << endl;
        sstream << "Ans" << ans_no << ": " << "ln(" << a << ") = " << x << endl;
        history = sstream.str();
        break;

    default:
        cout << "\nThank you for using the calculator!";

    /// Then insert while options later
    }
}

void ScientificCalculator::Continuing_Calculation(int choice) {
    Option = choice;

    queue<string> hanqueue; ///To enter base number
    queue<string> dulqueue; ///To enter exponent number
    queue<string> setqueue; ///To enter the log base
    queue<string> netqueue; ///To enter the log argument

    hanqueue.push("Insert your Base Number: \n");
    dulqueue.push("Insert your Exponent Number: \n");
    setqueue.push("Enter the log base: \n");
    netqueue.push("Insert your log argument: \n");

    switch (Option){
    case 1:
        /// To add previous output with another number
        cout << "Insert your addend: ";
        cin >> a;
		    
        ans = x;
        x += a;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " + "  << ans << " = " << x << endl;
        sstream << "Ans" << ans_no << ": " << a << " + "  << ans << " = " << x << endl;
        history = sstream.str();
        break;

    case 2:
        /// To subtract previous output with another number or subtract another number with previous output
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
            sstream << "Ans" << ans_no << ": " << ans << " - "  << a << " = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            cout << "Insert your Minuend: ";
            cin >> a;

            ans = x;
            x = a - x;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << a << " - "  << ans << " = " << x << endl;
            sstream << "Ans" << ans_no << ": " << a << " - "  << ans << " = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 3:
        /// To multiply previous output with another number
        cout << "Insert your multiple: ";
        cin >> a;

        ans = x;
        x *= a;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " x "  << ans << " = " << x << endl;
        sstream << "Ans" << ans_no << ": " << a << " x "  << ans << " = " << x << endl;
        history = sstream.str();
        break;

    case 4:
        /// To divide previous output with another number or divide another number with previous output
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
            sstream << "Ans" << ans_no << ": " << ans << " / "  << a << " = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            cout << "Insert your Dividend: ";
            cin >> a;

            ans = x;
            x = a / x;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << a << " / "  << ans << " = " << x << endl;
            sstream << "Ans" << ans_no << ": " << a << " / "  << ans << " = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 5:
        /// Make sine calculation with previous output
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of sin(x) with Previous Output" << endl;
        cout << "2.Find value of sin(x) using degrees and radians with Previous Output" << endl;
        cin >> c;

        if (c == 1){
            /// If previous output is value
            ans = x;
            x = sin(x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "sin(" << ans << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "sin(" << ans << ") = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// If previous output is a degree angle
            ans = x;
            radian = x*3.14159/180;
            x = sin(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "sin(" << ans << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "sin(" << ans << ") = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 6:
        /// Make cosine calculation with previous output
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of cos(x) with Previous Output" << endl;
        cout << "2.Find value of cos(x) using degrees and radians with Previous Output" << endl;
        cin >> c;

        if (c == 1){
            /// If previous output is value
            ans = x;
            x = cos(x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "cos(" << ans << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "cos(" << ans << ") = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// If previous output is a degree angle
            ans = x;
            radian = x*3.14159/180;
            x = cos(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "cos(" << ans << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "cos(" << ans << ") = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 7:
        /// Make tangent calculation with previous output
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of tan(x) with Previous Output" << endl;
        cout << "2.Find value of tan(x) using degrees and radians with Previous Output" << endl;
        cin >> c;

        if (c == 1){
            /// If previous output is value
            ans = x;
            x = tan(x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "tan(" << ans << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "tan(" << ans << ") = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// If previous output is a degree angle
            ans = x;
            radian = x*3.14159/180;
            x = tan(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "tan(" << ans << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "tan(" << ans << ") = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 8:
        /// To calculate square root of previous output
        ans = x;
        x = sqrt(x);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << "sqrt(" << ans << ") = " << x << endl;
        sstream << "Ans" << ans_no << ": " << "sqrt(" << ans << ") = " << x << endl;
        history = sstream.str();
        break;

    case 9:
        /// To power previous output with another number or power another number with previous output as the exponent number (power)
        cout << "The formula follows: Base Number ^ Exponent Number = Result" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.Base Number ^ Previous Output" << endl;
        cout << "2.Previous Output ^ Exponent Number" << endl;
        cin >> c;

        if (c == 1){
            while (hanqueue.size() > 0) {
            cout << hanqueue.front();
            hanqueue.pop();
            };
            cin >> a;

            ans = x;
            x = pow(a, x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << a << '^'  << ans << " = " << x << endl;
            sstream << "Ans" << ans_no << ": " << a << '^'  << ans << " = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            while (dulqueue.size() > 0) {
            cout << dulqueue.front();
            dulqueue.pop();
            };
            cin >> a;

            ans = x;
            x = pow(x, a);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << ans << '^'  << a << " = " << x << endl;
            sstream << "Ans" << ans_no << ": " << ans << '^'  << a << " = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 10:
        /// Make cosine calculation with previous output

        ///Either make previous output as the argument or the base number
        cout << "The formula follows: log_Base Number(Argument) = Exponent" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.log_Base Number(Previous Output)" << endl;
        cout << "2.log_Previous Output(Argument)" << endl;
        cin >> c;

        if (c == 1){
            while (setqueue.size() > 0) {
            cout << setqueue.front();
            setqueue.pop();
            };
            cin >> a;

            ans = x;
            x = log10(x)/log10(a);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "log_" << a << '(' << ans << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "log_" << a << '(' << ans << ") = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            while (netqueue.size() > 0) {
            cout << netqueue.front();
            netqueue.pop();
            };
            cin >> a;

            ans = x;
            x = log10(a)/log10(x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "log_" << ans << '(' << a << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "log_" << ans << '(' << a << ") = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 11:
        /// To calculate square root of previous output
        ans = x;
        x = log(x);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << "ln(" << ans << ") = " << x << endl;
        sstream << "Ans" << ans_no << ": " << "ln(" << ans << ") = " << x << endl;
        history = sstream.str();
        break;

    default:
        cout << "\nThank you for using the calculator!";
    }
}

void ScientificCalculator::Alternate_Calculation(int choice) {
    Option = choice;

    queue<string> onequeue;
    queue<string> twoqueue;
    queue<string> sanqueue;
    queue<string> shiqueue;
    queue<string> wuqueue;
    queue<string> rokuqueue;
    queue<string> nanaqueue;
    queue<string> hachqueue;

    onequeue.push("Enter value of sin(x): \n");
    twoqueue.push("Enter Degree Angle: \n");
    sanqueue.push("Enter value of cosx: \n");
    shiqueue.push("Enter Degree Angle: \n");
    wuqueue.push("Enter value of tan(x): \n");
    rokuqueue.push("Enter Degree Angle: \n");
    nanaqueue.push("Enter Number for Calculating Square: \n");
    hachqueue.push("Enter Natural Logarithm value: \n" );

    switch (Option){
    case 1:
        /// For Addition
        cout << "Insert your first addend: ";
        cin >> a;

        cout << "Insert your second addend: ";
        cin >> b;

        y = a+b;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " + "  << b << " = " << y << endl;
        sstream << "Ans" << ans_no << ": " << a << " + "  << b << " = " << y << endl;
        history = sstream.str();
        break; 
		   
    case 2:
        /// For Subtraction
        cout << "The formula follows: Minuend - Subtrand = difference" << endl;
        cout << "Insert your Minuend: ";
        cin >> a;

        cout << "Insert your Subtrand: ";
        cin >> b;

        y = a-b;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " - "  << b << " = " << y << endl;
        sstream << "Ans" << ans_no << ": " << a << " - "  << b << " = " << y << endl;
        history = sstream.str();
        break;

    case 3:
        /// For Multiplication
        cout << "Insert your first multiple: ";
        cin >> a;

        cout << "Insert your second multiple: ";
        cin >> b;

        y = a*b;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " x "  << b << " = " << y << endl;
        sstream << "Ans" << ans_no << ": " << a << " x "  << b << " = " << y << endl;
        history = sstream.str();
        break;

    case 4:
        /// For Division
        cout << "The formula follows: Dividend / Divisor = quotient" << endl;
        cout << "Insert your Dividend: ";
        cin >> a;

        cout << "Insert your Divisor: ";
        cin >> b;

        y = a/b;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << " / "  << b << " = " << y << endl;
        sstream << "Ans" << ans_no << ": " << a << " / "  << b << " = " << y << endl;
        history = sstream.str();
        break;

    case 5:
        /// For Sine
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of sin(x)" << endl;
        cout << "2.Find value of sin(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            /// For value of sin(x)
            while (onequeue.size() > 0) {
            cout << onequeue.front();
            onequeue.pop();
            };
            cin >> a;

            y = sin(a);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "sin(" << a << ") = " << y << endl;
            sstream << "Ans" << ans_no << ": " << "sin(" << a << ") = " << y << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// For value of sin(x) using Degree Angle
            while (twoqueue.size() > 0) {
            cout << twoqueue.front();
            twoqueue.pop();
            };
            cin >> a;

            radian = a*3.14159/180;
            y = sin(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "sin(" << a << ") = " << y << endl;
            sstream << "Ans" << ans_no << ": " << "sin(" << a << ") = " << y << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 6:
        /// For Cosine
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of cos(x)" << endl;
        cout << "2.Find value of cos(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            /// For value of cos(x)
            while (sanqueue.size() > 0) {
            cout << sanqueue.front();
            sanqueue.pop();
            };
            cin >> a;

            y = cos(a);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "cos(" << a << ") = " << y << endl;
            sstream << "Ans" << ans_no << ": " << "cos(" << a << ") = " << y << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// For value of cos(x) using degree angle
            while (shiqueue.size() > 0) {
            cout << shiqueue.front();
            shiqueue.pop();
            };
            cin >> a;

            radian = a*3.14159/180;
            y = cos(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "cos(" << a << ") = " << y << endl;
            sstream << "Ans" << ans_no << ": " << "cos(" << a << ") = " << y << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 7:
        /// For Tangent
        cout << "What do you want to do?" << endl;
        cout << "1.Find value of tan(x)" << endl;
        cout << "2.Find value of tan(x) using degrees and radians" << endl;
        cin >> c;

        if (c == 1){
            /// For value of tan(x)
            while (wuqueue.size() > 0) {
            cout << wuqueue.front();
            wuqueue.pop();
            };
            cin >> a;

            y = tan(a);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "tan(" << a << ") = " << y << endl;
            sstream << "Ans" << ans_no << ": " << "tan(" << a << ") = " << y << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// For value of tan(x) using degree angle
            while (rokuqueue.size() > 0) {
            cout << sanqueue.front();
            rokuqueue.pop();
            };
            cin >> a;

            radian = a*3.14159/180;
            y = tan(radian);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "tan(" << a << ") = " << y << endl;
            sstream << "Ans" << ans_no << ": " << "tan(" << a << ") = " << y << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid Button!" << endl;
        }
        break;

    case 8:
        /// For Square Root
        while (nanaqueue.size() > 0) {
            cout << nanaqueue.front();
            nanaqueue.pop();
        };
        cin >> a;

        y = sqrt(a);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << "sqrt(" << a << ") = " << y << endl;
        sstream << "Ans" << ans_no << ": " << "sqrt(" << a << ") = " << y << endl;
        history = sstream.str();
        break;

    case 9:
        /// For Exponential
        cout << "The formula follows: Base Number ^ Exponent Number = Result" << endl;
        cout << "Enter the Base Number: ";
        cin >> a;

        cout << "Enter the Exponent Number: ";
        cin >> b;

        y = pow(a, b);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << a << '^' << b << " = " << y << endl;
        sstream << "Ans" << ans_no << ": " << a << '^' << b << " = " << y << endl;
        history = sstream.str();
        break;

    case 10:
        /// For Logarithm [logb(a)]
        cout << "The formula follows: log_Base Number(Argument) = Exponent" << endl;
        cout << "Enter the log argument: ";
        cin >> a;

        cout << "Enter the log base: ";
        cin >> b;

        y = log10(a)/log10(b);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << "log_" << b << '(' << a << ") = " << y << endl;
        sstream << "Ans" << ans_no << ": " << "log_" << b << '(' << a << ") = " << y << endl;
        history = sstream.str();
        break;

    case 11:
        /// For Natural Logarithm [ln]
        while (hachqueue.size() > 0) {
            cout << hachqueue.front();
            hachqueue.pop();
        };
        cin >> a;

        y = log(a);
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << "ln(" << a << ") = " << y << endl;
        sstream << "Ans" << ans_no << ": " << "ln(" << a << ") = " << y << endl;
        history = sstream.str();
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
        /// To add previous output with the alternate calculation output
        ans = x;
        alt_ans = y;

        x = x + y;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << ans << " + "  << alt_ans << " = " << x << endl;
        sstream << "Ans" << ans_no << ": " << ans << " + "  << alt_ans << " = " << x << endl;
        history = sstream.str();
        break;

    case 2:
        /// To subtract previous output with the alternate calculation output
        cout << "The formula follows: Minuend - Subtrand = difference" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.Previous Output - Alternate Output" << endl;
        cout << "2.Alternate Output - Previous Output" << endl;
        cin >> c;

        if (c == 1){
            /// Previous Output subtracted by Alternate Output
            ans = x;
            alt_ans = y;

            x = x - y;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << ans << " - "  << alt_ans << " = " << x << endl;
            sstream << "Ans" << ans_no << ": " << ans << " - "  << alt_ans << " = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
                /// Alternate Output subtracted by Previous Output
            ans = x;
            alt_ans = y;
            x = y - x;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << alt_ans << " - "  << ans << " = " << x << endl;
            sstream << "Ans" << ans_no << ": " << alt_ans << " - "  << ans << " = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 3:
        /// To multiply previous output with the alternate calculation output
        ans = x;
        alt_ans = y;

        x = x*y;
        ans_no += 1;
        cout << "Ans" << ans_no << ": " << ans << " x "  << alt_ans << " = " << x << endl;
        sstream << "Ans" << ans_no << ": " << ans << " x "  << alt_ans << " = " << x << endl;
        history = sstream.str();
        break;

    case 4:
        /// To divide previous output with the alternate calculation output
        cout << "The formula follows: Dividend / Divisor = quotient" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.Previous Output / Alternate Output" << endl;
        cout << "2.Alternate Output / Previous Output" << endl;
        cin >> c;

        if (c == 1){
            /// Previous Output divided by Alternate Output
            ans = x;
            alt_ans = y;

            x = x / y;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << ans << " / "  << alt_ans << " = " << x << endl;
            sstream << "Ans" << ans_no << ": " << ans << " / "  << alt_ans << " = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// Alternate Output divided by Previous Output
            ans = x;
            alt_ans = y;

            x = y / x;
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << alt_ans << " / "  << ans << " = " << x << endl;
            sstream << "Ans" << ans_no << ": " << alt_ans << " / "  << ans << " = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 5:
        /// To power previous output with the alternate calculation output
        cout << "The formula follows: Base Number ^ Exponent Number = Result" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.Previous Output ^ Alternate Output" << endl;
        cout << "2.Alternate Output ^ Previous Output" << endl;
        cin >> c;

        if (c == 1){
            /// Previous Output powered by Alternate Output
            ans = x;
            alt_ans = y;

            x = pow(x, y);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << ans << '^'  << alt_ans << " = " << x << endl;
            sstream << "Ans" << ans_no << ": " << ans << '^'  << alt_ans << " = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// Alternate Output powered by Previous Output
            ans = x;
            alt_ans = y;

            x = pow(y, x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << alt_ans << '^'  << ans << " = " << x << endl;
            sstream << "Ans" << ans_no << ": " << alt_ans << '^'  << ans << " = " << x << endl;
            history = sstream.str();
        }
        else {
            cout << "Invalid, Start Again!" << endl;
        }
        break;

    case 6:
        /// To to logarithmize previous output with the alternate calculation output
        cout << "The formula follows: log_Base Number(Argument) = Exponent" << endl;
        cout << "\nWhat do you want to do?" << endl;
        cout << "1.log_Alternate Output(Previous Output)" << endl;
        cout << "2.log_Previous Output(Alternate Output)" << endl;
        cin >> c;

        if (c == 1){
            /// Finding Exponent of Previous output using log_Alternate Output
            ans = x;
            alt_ans = y;

            x = log10(x)/log10(y);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "log_" << alt_ans << '(' << ans << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "log_" << alt_ans << '(' << ans << ") = " << x << endl;
            history = sstream.str();
        }

        else if (c == 2){
            /// Finding Exponent of Alternate output using log_Previous Output
            ans = x;
            alt_ans = y;

            x = log10(y)/log10(x);
            ans_no += 1;
            cout << "Ans" << ans_no << ": " << "log_" << ans << '(' << alt_ans << ") = " << x << endl;
            sstream << "Ans" << ans_no << ": " << "log_" << ans << '(' << alt_ans << ") = " << x << endl;
            history = sstream.str();
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

void ScientificCalculator::Show_History(){
    cout << "\nSee History Below:" << endl;
    NewHistory = new string(history);                       /// Using "new" to point a new string with a pointer
    std::cout << *NewHistory;                       /// Creates & Updates History in a loop until they are deleted
}

void ScientificCalculator::Delete_History(){
    cout << "\nDeleting History. ";
    for (int LoadingDot = 0; LoadingDot < 2; LoadingDot++) {
            cout << ". ";
    }
    cout << "\n";
    delete[] NewHistory;                                    /// To delete all calculations made, from the history
    NewHistory = NULL;
}
