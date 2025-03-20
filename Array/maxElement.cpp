// find largest element in a array
#include <iostream>
#include <climits>
using namespace std;
int maxele(int arr[] , int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
int main(){
    int arr1[]={1,3,4,5,2,8,9};
    int arr2[]={11,14,27,19,23};
    int arr3[]={11,24,67,99,45};
    cout<<"Max element in arr1: "<<maxele(arr1 , 7)<<endl;
    cout<<"Max element in arr2: "<<maxele(arr2 , 5)<<endl;
    cout<<"Max element in arr3: "<<maxele(arr3 , 5)<<endl;
    
    
}