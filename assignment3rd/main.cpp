#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result;
    char op, choice;

    do {
        cout<<"Enter the first number, operator, second number: ";
        cin>>num1>>op>>num2;

        switch (op)
        {
        case '+':
        result = num1 + num2;
        cout<<"Answer = "<<result<<endl;
            break;
        case '-':
        result = num1 - num2;
        cout<<"Answer = "<<result<<endl;
            break;
        case '/':
            if(num2 != 0) 
                {
                result = num1 / num2;
                cout<<"Answer = "<<result<<endl;
                } 
                else
                {
                cout<<"Division by 0 is not allowed"<<endl;
                }
            break;
        case '*':
        result = num1 * num2;
        cout<<"Answer = "<<result<<endl;
            break;
        
        default:
        cout<<"Invalid operator !!"<<endl;
            break;
        }

        cout<<"do another operation (y/n)?";
        cin>>choice;
    } while (choice == 'y' || choice == 'Y');
    cin>>choice;
    
    return 0;
}
