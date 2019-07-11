#include <iostream>
using namespace std;       // Rende visibili i nomi di std senza doverlo scrivere

double square(double x){
    return x*x;
}

void print_square(double x){
     cout << "the square of " << x << " is " << square(x) << "\n";
}

int main(){
     print_square(1.234); //output: 1.234^2
}
