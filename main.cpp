#include <iostream>
using namespace std;

bool isPrime(int N, int C=2){
    if(N==1)
        return false;
    if(N==2)
        return true;
    if(N%C==0)
        return false;
    if(C==N-1)
        return true;
    return isPrime(N,C+1);
}

int main() {
    int N;
    cin>>N;
    if(isPrime(N))
        cout<<"numero primo";
    else
        cout<<"numero non primo";

    return 0;
}
