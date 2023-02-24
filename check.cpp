#include <iostream>
#include <string>
using namespace std;

int main() {
    int nums[9] = {1,2,3,4,5,6,7,8,9};
    int ok = 99;
    int fullnum;
    
    for(int i = 0; i <= 999; i++){
        if(i%89 == 0){
            cout << i << endl;
        }
    }

    return 0;
}
