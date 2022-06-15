#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int N, sum = 0;
    cin >> N;
    cout << factorial(N);
    return 0;
}