// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int least;
    // Write C++ code here

    int nums[5] = {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10};
    
    for(int i:nums){
        if(i>4){
            exit;
        }
        cout << nums[i] << " ";
        
        if (nums[i] < nums[i+1]){
            least = nums[i];
        }
    }
    
    cout << "\nleast: " << least;
    return 0;
}
