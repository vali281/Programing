// formation of matrix/2d array 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int rows = 3;
    int col = 3;
    vector<vector<int>> matrix(rows, vector<int>(col , 0));
    matrix = {{1,2,3},
              {4,5,6},
              {7,8,9}};
    for(int i= 0; i<col; i++){
        for(int j = 0; j<rows; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}