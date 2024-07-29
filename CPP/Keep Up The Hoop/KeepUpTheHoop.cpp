#include <iostream> 
using namespace std;

string KeepUpTheHoop(unsigned value){
    if(value >= 10){
        return "Great, now move onto tricks!";
    }
    else{
        return "keep at it until you get it"; 
    }
}
int main(){
    int n; 
    cout << "Enter the number of times you kept up the hoop: ";
    cin >> n;
    cout << KeepUpTheHoop(n) << endl;
    system("pause");
}
