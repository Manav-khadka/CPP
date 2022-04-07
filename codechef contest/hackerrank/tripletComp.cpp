#include <bits/stdc++.h>

using namespace std;

int main() {int a0;
int a1;
int a2;
cin >> a0 >> a1 >> a2;
int b0;
int b1;
int b2;
cin >> b0 >> b1 >> b2;
int alice = (a0 > b0) * 1 + (a1 > b1) * 1 + (a2 > b2) * 1;
int bob = (b0 > a0) * 1 + (b1 > a1) * 1 + (b2 > a2) * 1;
cout << alice << " " << bob << endl;
}