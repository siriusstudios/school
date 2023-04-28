#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    const int size = 45;
    int fwd[size];
    int rev[size];
    int count_rev = 0;
    int count = 1; 
    

    while(count <= size){
        fwd[count - 1] = count;
        count++;
    }
    
    count = size; 
    

    while(count > 0){
        rev[size - count] = count;
        count--;
    }
    

    for(int i = 0; i < size; i++){
        cout << fwd[i] << " ";
    }
    cout << endl;
    

    for(int i = 0; i < size; i++){
        cout << rev[i] << " ";
    }
    cout << endl;
    
    return 0;
}
