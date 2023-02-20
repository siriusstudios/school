#include <iostream>
using namespace std;

int main() {
    int arr[101]; 
    int count = 0;

    for (int i = 0; i <= 100; i++) {
        arr[i] = i;

        if (i + i == i * i) {
            count++;
        }
    }


    int newarr[count];
    int index = 0;


    for (int i = 0; i <= 100; i++) {
        if (i + i == i * i) {
            newarr[index] = i;
            index++;
        }
    }

    cout << "From the numbers, there are " << count << " numbers corresponding to the conditions given: \n";
    for (int i = 0; i < count; i++) {
        cout << newarr[i] << " ";
    }

    return 0;
}
