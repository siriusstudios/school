#include <iostream>
#include <string>
using namespace std;

int main() {
    int nums[9] = {1,2,3,4,5,6,7,8,9};
    int ok = 99;
    int fullnum;
    
    for(int i = 0; i <= 999; i++){
        for(int j = 0; j < 9; j++){
            if(i == stoi(to_string(nums[j]) + to_string(ok))){
                fullnum = stoi(to_string(nums[j]) + to_string(ok));
                cout << fullnum << endl;
            }
        }
    }

    return 0;
}
