#include<bits/stdc++.h>
using namespace std;
double calculator(double num1,double num2,char op){
    
    switch(op){
        case '+':
            return num1+num2;
            break;
        
        case '-':
            return num1-num2;
            break;
            
        case '*':
            return num1*num2;
            break;
            
        case '/':
            return num1/num2;
            break;
         
        case '%':
            if (num2 != 0) {
                return fmod(num1, num2);
            } else {
                cerr << "Error: Modulo by zero" << endl;
                exit(EXIT_FAILURE);
            }
            
        default:
            cerr << "Error: Invalid operator" << endl;
            return -1;
            break;
            
    }
}
int main()
{ 
    double num1, num2;
    char oper;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operator (+, -, *, /, %): ";
    cin >> oper;
    
    double result = calculator(num1, num2, oper);
    cout << "Result: " << result << endl;
    return 0;
}