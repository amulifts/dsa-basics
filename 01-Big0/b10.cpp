// Different terms for input
#include <iostream>
using namespace std;

void printItems(int a, int b){
    // 0 (a * b)
    for ( int i=0; i<a; i++ ){
        for ( int j=0; j<b; j++){
            cout<<i<<j<<endl;
        }
    }
}

int main(){
    printItems(10,20);
    return 0;
}