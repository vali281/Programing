//Find target in a 2d array
#include <iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int col){
    bool temp = false;
    for(int i = 0; i< row; i++){
        for(int j = 0; j<col; j++){
            if(target==arr[i][j]){ 
                temp = true;
                return temp;
            }
        }
    }
    return temp;
}
int main(){
    int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    int target;
    cout<<"Enter the number to find: "<<endl;
    cin>>target;
    if (isPresent(arr, target, 3, 4)){
        cout<<"Target is present";
    }
    else {
        cout<<"Target not present";
    }
}