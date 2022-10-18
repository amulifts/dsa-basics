// 0(1)

//ctrl + k + C and ctrl + k + u

//shift + alt + a
/* int addItems(int n){
    return n + n;
}
 
int main(){
    addItems(10);
} */

// 0(2) --> but we still call this 0(1)
#include <iostream>
using namespace std;

int addItems(int n){
    return n + n + n ;
}
 
int main(){
    addItems(10);
}