//wap fibonacci series using recursion 
#include <iostream>
using namespace std;
int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int result = fibo(n);
    cout<<"The "<<n<<"th number fibonacchi series is: "<<result;
}