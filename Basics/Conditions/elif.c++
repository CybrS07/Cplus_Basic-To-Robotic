#include <iostream>

using namespace std;
int main(void){
    int i=45;
    if (i>=0 && i >= 20){
        cout << "Its positive and under 20";
    }
    else if(i>=20 && i <=40){
        cout << "Its positive and under 40";
    }
    else{
        cout << "Its greater than 40";
    };
    return 0;
}