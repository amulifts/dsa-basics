// way of comparing  two sets of code mathematically about how efficiently it run
// time complexity --> it is measured in number of operations that it takes to complete sth
// space compexity --> preserving memory space is most important priority even it takes some time

// in dealing with time and space complexity we will see 3 greek letter
// --> omega , theta and omecron ( O )

// best case = omega
// average case = theta
// worse case = O

#include <iostream>
using namespace std;

int main(){
    int x[] = {1,2,3,4,5,6,7};
    for(int i=0; i<=6 ; i++){
        cout<<x[i];
    }
    return 0;
}