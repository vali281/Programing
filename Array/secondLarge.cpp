// find second largest element in an array 
#include <iostream>
#include <algorithm>
using namespace std;
int element(int arr[], int n, int k){
    sort(arr, arr + n);
    return arr[n-k];
}
int main(){
    int arr[] = {2,3,4,12,6,78,14};
    cout<<"Second largest element in the array is: "<<element(arr,7,2)<<endl;
}