#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int row, int col , vector<vector<int>> board, int val){
    for(int i=0;i<board[0].size();i++){
        //row check
        if(board[row][i]==val){
            return false;
        } 
        //col check
        if(board[i][col]==val){
            return false;
        }

        //3*3 matrix check
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val){
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<int>> &board){
    int  n=board[0].size();
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(board[row][col]==0){
                for(int val=1;val<=9;val++){
                    if(isSafe(row, col , board , val)){
                        board[row][col]=val;
                        //recursive call
                        bool aagesoln=solve(board);
                        if(aagesoln){
                            return true;
                        }
                        else{
                            board[row][col]=0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;

}

int main(){
    vector<vector<int>> arr = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
};

vector<vector<int>> ans;
int n=9;

solve(arr);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}