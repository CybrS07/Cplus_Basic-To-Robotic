#include <iostream>

using namespace std;
int main(void){
    cout << "Enter Case(1 - 3 ): ";
    int a;
    cin >> a;
    if (a > 0 && a<=3){
        switch(a){
            case 1:{
                cout << "It's number " << a;
            }

            case 2:{
                cout << "It's number " << a;
            }

            case 3:{
                cout << "It's number " << a;
            }
    };}
    else {
    cout << "Not between (1 - 3)";
    }; 
return 0;
}