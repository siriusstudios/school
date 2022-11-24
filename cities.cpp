#include <iostream>
using namespace std;


struct Cities{
    int Chisinau;
    int Balti;
    int Cricova;
    int Ribnitsa;
    int Tiraspol;
};




int main() {

Cities city;

city.Chisinau = 39;
city.Balti = 24;
city.Cricova = 16;
city.Tiraspol = 32;
city.Ribnitsa = 14;

    cout << "Energy consuming data per each city:" << endl;
    cout << "Chisinau:" << city.Chisinau << endl;
    cout << "Balti:" << city.Balti << endl;
    cout << "Cricova:" << city.Cricova << endl;
    cout << "Tiraspol:" << city.Tiraspol << endl;
    cout << "Ribnitsa:" << city.Ribnitsa << endl;
    
    
    int citnum[5] = {city.Chisinau, city.Balti, city.Cricova, city.Tiraspol, city.Ribnitsa};
int val = 0;
int count = 0;
for(int i : citnum){
    val = val + i;
    count++;
}
    
    int res = val/count;
