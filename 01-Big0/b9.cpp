// Different terms for input
#include <iostream>
using namespace std;

void printItems(int a, int b){
    // 0 (n)
    for ( int i=0; i<a; i++ ){
        cout<<i<<endl;
    }

    // 0 (n)
    for ( int j=0; j<b; j++){
        cout<<j<<endl;
    }
    //0(n) + 0(n) = 0(2n) --> 0(n) // wrong since a and b can't be always equal
    //0(a) + 0(b) = 0(a+b)
}

int main(){
    printItems(10,20);
    return 0;
}