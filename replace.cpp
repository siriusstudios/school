// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    int input;
    int nums[10] = {};
    cout << "Please enter N\n";
    cin >> n;
    for(int i; i<10; i++){
        cout << "Enter number " << i+1 << ":\n";
        cin >> input;
        nums[i] = input;
    }
    
    int count = 0;
    
    for (int i = 0; i < 10; i++) {
        int num = nums[i];
        if (num < 0) {
            num = n;
        }
        cout << i+1 << ": " << num << endl;
}
    
    return 0;
}
