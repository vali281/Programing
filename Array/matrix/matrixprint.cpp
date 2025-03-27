/* print 1st row
1st column
last row
last column */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int col =3;
    int rows =3;
    vector<vector<int>> matrix(rows, vector<int>(col , 0));
    matrix = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Printing 1st row: "<<endl;
    int i =0;
    while(i<=0){
        for(int j = 0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        break;
        
        i++;
    }
    cout<<"Printing 1st column: "<<endl;
    int j =0;
    while(j<=0){
        for(int i = 0; i<rows; i++){
            cout<<matrix[i][j]<<" ";

        }
        cout<<endl;
        break;
        
        j++;
    }
    cout<<"Printing last row: "<<endl;
    for(int i = 2; i<=col; i++){
        for(int j = 0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        break;
    }
    cout<<"Printing last column: "<<endl;
    for(int i = 2; i<=col; i++){
        for(int j = 0; j<rows; j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
        break;
    }
}