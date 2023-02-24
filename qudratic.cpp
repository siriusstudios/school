// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    
    for(int i: arr){
        cout << "Number: " << i << "\n Quadratic: " << i*i << "\n Cube: " << i*i*i << endl;
    }
}
