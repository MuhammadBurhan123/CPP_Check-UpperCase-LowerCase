#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "enter char : ";
    cin >> ch;

    if(ch >= 97 && ch <= 122){
        cout << "lowercase letter" << endl;
    }else if(ch >= 65 && ch <= 90){
        cout << "uppercase letter" << endl;
    }else{
        cout << "not a letter" << endl;
    }
}