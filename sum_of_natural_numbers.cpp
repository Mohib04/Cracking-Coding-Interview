#include <iostream>

using namespace std;

void sum_of_natural_numbers(unsigned int n){
    unsigned long long int sum = 0;
    for(int i=0; i<=n; i++){
        sum +=i;
    }
    cout << sum << endl;
    
}

int main()
{
    unsigned int n;
    cin >> n;
    sum_of_natural_numbers(n);
    return 0;
}
