// taking input in 2d array 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //create array
    int arr[3][4];
    // taking input
    for(int i = 0; i<3; i++){
        for(int j =0; j<4; j++){
            cout<<"Enter value of index"<<"["<<i <<" , "<< j <<"]"<<" ";
            cin>>arr[i][j];
        }
    }
    //printing array;
    for(int i = 0; i<3; i++){
        for(int j =0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}