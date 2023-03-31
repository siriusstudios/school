// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int least;
    // Write C++ code here

    int nums[5] = {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10};
    
    for(int i:nums){
        cout << i << " ";
        if (i < i+1){
            least = i;
        }
    }
    
    cout << "\nleast: " << least;
    return 0;
}
