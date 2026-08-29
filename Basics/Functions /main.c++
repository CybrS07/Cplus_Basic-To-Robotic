#include <iostream>

using namespace std;

int add(int a, int b);
int main(void){
    int a = add(22, 13);
    cout << "The function call: " << a; 
    return 0;
}

int add(int a, int b){
    int result = a + b;
    return 0;
}