#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
//Hacker Rank 2D Array Challenge


class Hourglass{
    private:
        int sum;
        vector< vector<int>>* arrHG (6,vector<int>(6));
    public:
        Hourglass(vector<vector<int>>& other_arrHG){
            sum = -63; // this is the most minimum 
            arrHG = other_arrHG;
        }

        void LoopThrough(){
            for (int x = 0; x < this->arrHG.size(); x++){
                for (int y = 0; y < this->arrHG[0].size(); y++){
                    cout << "Currently at row: " << x << " col: " << y << " value" << this->arrHG[x][y];
                }
            }
        }
};

int main(){
    Hourglass hg;
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    hg = Hourglass(arr);
    hg.LoopThrough();
    // Instantiates a Hourglass obj.
    return 0;
}
