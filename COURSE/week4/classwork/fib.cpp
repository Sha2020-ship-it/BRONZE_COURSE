//
// Created by Asus on 2/6/2022.
//

#include "bits/stdc++.h"
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    else { return fib(n - 1) + fib(n - 2); }
}

int main()
{
    int N;
    cin >> N;

    cout << fib(N) << endl;
}