#include <iostream>
using namespace std;

string even_or_odd(int number){
    if (number % 2 == 0) {
        cout << number << " is EVEN"
    }
    else {
        cout << number << " is ODD"
    }
}; 

int main(){
    int number; 
    cout << "Enter a number: "; 
    cin >> number;
    cout << even_or_odd(number) << endl;
    system("pause");
}
