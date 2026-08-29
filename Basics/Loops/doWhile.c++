#include <iostream>

using namespace std;
int main(void){
    int i = 0;
    do{
        if( i == 0) {
        cout << "the first to run DO " << "\n";
        }
        else if(i <= 5){
            cout << "THe number after condition: " << i << "\n";
        };

        i+=1;
    } while (i <= 5);
    return 0;
}