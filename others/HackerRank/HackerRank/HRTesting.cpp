#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <fstream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ifstream input("Input.txt");
    string line;
    
    if(input.fail()){
        cout << "does not exist";
    }
    
    while(getline(input, line)){
        
        int queries;
        cin >> queries;
        for(int x = 0; x < queries; x++){
            int choice;
            int element;
            cin >> choice;
            switch(choice){
                case 1:
                    cin >> element;
                    cout << "stk ";
                    cout << "max_stk ";
                    break;
                case 2:
                    cout << "case 2" << endl;
                    break;
                case 3:
                    cout << "case 3" << endl;
                    break;
                default:
                    cout << "Error in looping" << endl;
            };
        }
        
        
    }
    return 0;
}
