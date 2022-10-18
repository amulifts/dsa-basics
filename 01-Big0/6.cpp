// Drop non-dominants0 -- (n^2) + 0(n) = 0(n^2 + n) --> 0(n^2) 

#include <iostream>
using namespace std;

void printItems(int n){
    // 0(n^2)
    for (int i=0; i<n; i++ ){
        for (int j=0; j<n; j++){
            cout<<i<<j<<endl;
        }
    }

    // 0(n)
    for (int k=0; k<n; k++){
        cout<<k<<endl;
    }
}

int main(){
    printItems(10);
    return 0;
}