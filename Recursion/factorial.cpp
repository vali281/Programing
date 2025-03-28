// WAP factorial function using recursion
#include <iostream>
using namespace std;
long long int fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int result = fact(n);
    cout<<"The factorial of "<<n<<" is: "<<result;
}
