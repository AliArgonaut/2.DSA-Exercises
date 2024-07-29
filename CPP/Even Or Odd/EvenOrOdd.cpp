#include <iostream>
using namespace std;

void even_or_odd(int number){
    if (number % 2 == 0) {
        cout << number << " is EVEN" << endl;
    }
    else {
        cout << number << " is ODD" << endl;
    }; 
}; 

int main(){
    int number; 
    cout << "Enter a number: "; 
    cin >> number;
    even_or_odd(number);
    system("pause");
    return 0;
}
