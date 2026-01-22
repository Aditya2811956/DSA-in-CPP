#include<iostream>
#include<vector>
using namespace std;

void addSol(vector<vector<int>> &board, vector<vector<int>> &ans , int n){
    vector<int > temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

bool isSafe(int row, int col , vector<vector<int>> &board , int n  ){
    int x=row;
    int y= col;
    
    //check for sme row
    while(y>=0){
        if(board[x][y]==1){
            return false ;
        }
        y--;
    }

    x=row;
    y=col;

    // check for digonal
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false ;
        }
        y--;
        x--;
    }

    x = row ;
    y = col ;

    while(x<n && y>=0){
        if(board[x][y]==1){
            return false ;
        }
        y--;
        x++;
    }

    return true;

}

void solve(int col , vector<vector<int>> &ans ,vector<vector<int>> &board , int n){
    // base case 
    if(col==n){
        addSol(board, ans , n);
        return;
    }

    //take care of 1 case and rest recursion will see 
    for(int row=0;row<n;row++){
        if(isSafe(row, col , board, n)){
            board[row][col]=1;
            solve(col+1 , ans , board , n);
            board[row][col]=0;
        }
    }
}

int main(){
    int n=4;
    vector<vector<int>>board(n,vector<int>(n,0));
    vector<vector<int>> ans;

    solve(0, ans , board , n);

    for(int k = 0; k < ans.size(); k++){
        cout << "Solution " << k+1 << ":\n";
        int idx = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << ans[k][idx++] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;

}