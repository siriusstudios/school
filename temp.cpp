#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    struct Week{
        string Monday;
        string Tuesday;
        string Wednesday;
        string Thursday;
        string Friday;
        string Saturday;
        string Sunday;
};
    
int main(){
    int arr[24] = {2,4,6,7,7,7,8,9,9,10,12,14,15,15,15,18,17,17, 16, 15, 15, 15, 13, 10};
    
     int n = sizeof(arr) / sizeof(arr[0]);

    
    
     int min = INT_MAX;
     int index = -1;
     int mindex = -1;
     int max = INT_MIN;
    // Iterate the array
    for(int i=0; i < n; i++){
        if(arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    
    for(int i=0; i < n; i++){
        if(arr[i] > max)
        {
            max = arr[i];
            mindex = i;
        }
    }
    //cout << min;
    int hour = 0;
    for(int i:arr){
        if(hour <= 0){
            cout << "At 0:00 the temperature is: " << arr[hour] << endl;
            }
        cout << "At " << hour << ":00 the temperature is: " << arr[hour] << endl;
     hour++;   
    }
    
    cout << "Minimum temp is "<< min << endl << "Max temp is "<< max;

}
