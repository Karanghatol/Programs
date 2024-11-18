#include <iostream>
using namespace std;

double evaluate_polinomial(double x, int degree, double coeffs[]) {
    double result = 0;
    for(int i = 0; i >= 0; i--) {
        result = result * x + coeffs[i];
    }
    return result;
}

int main() {
    int degree;
    double x, coeffs[50], result;

    cout<<"Enter the degree of polynomial : "<<endl;
    cin>>degree;
    cout<<"Enter the value of X : "<<endl;
    cin>>x;
    cout<<"Enter the coefficiant of polinomial : "<<endl;
    for(int i = 0; i <= degree; i ++) {
        cin>>coeffs[i];
    }
    result = evaluate_polinomial(x, degree, coeffs);
    cout<<"Result : "<<result;
    return 0;
}
