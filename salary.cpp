using namespace std;

int main() {
    int salary;
    double additional;
    int premium = 1500;
    int overwork = 500;
    int mhelp = 720;
    double total;
    double coffitient;
    double totalwtax;
    // Write C++ code here
    cout << "Please enter the worker's salary\n";
    cin >> salary;
    
    int fullsalary = salary + overwork + premium + mhelp;
    cout << "the salary with premium, overwork and material help is " << fullsalary << endl;
    additional = (75 * fullsalary)/100;
    coffitient = (80 * fullsalary)/100;
    total = fullsalary + additional + coffitient;
    cout << "The total salary with additional and coffitient is " << total << endl;
    
    totalwtax = total - (14 * total)/100;
    cout << "Total salary with tax is ";
    cout << totalwtax;
    return 0;
}
