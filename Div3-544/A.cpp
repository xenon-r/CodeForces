//
// Created by User on 22-Apr-19.
//
/******************************************************************************
                   ------Bismillahir-Rahmanir-Rahim------

***********************************--XENON--***********************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <map>
#include <stack>
#include <set>
#include <iomanip>
#include <queue>
#include <map>
#include <functional>
#include <memory.h>
#include <list>
#include <sstream>
#include <ctime>
#include <climits>
#include <bitset>
#include <list>

#define ll long long
#define fileInOut freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define fileIn freopen("input.txt","r",stdin);
#define F(i, start, end) for( int i = (int)start; i <= (int)end; i++)
#define FB(i, start, end) for( int i = (int)start; i >= (int)end; i--)
#define pb push_back
#define infi for(;;)
#define debug(i) cout << "Debug : " << i << endl;
#define Pprint cout<<setprecision(8)<<fixed<<
#define fastInput ios_base::sync_with_stdio(false); cin.tie(NULL);

template<class T, class U>
T getMin(T a, U b) { return (a < b ? a : b); }

template<class T, class U>
T getMax(T a, U b) { return (a > b ? a : b); }

template<class T>
T charIndexS(T c) { return c - 96; }

template<class T>
T charIndexL(T c) { return c - 64; }

template<class T, class U, class O, class P>
T arrayOutofBoundary(T r, U c, O m, P n) {
    return r < 0 || c < 0 || r == m || c == n;

}

template<class T, class U>
T power(T base, U exponent) {
    return (exponent == 0) ? 1 : (base * pow(base, exponent - 1));
}

int hx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int hy[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int dy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
using namespace std;

///START YOUR CODE FROM HERE.... Happy Coding.... ! ;)

int main() {

    fastInput

    int testCase, n, m;

    int h, h1, m1;
    char c;
    cin >> h >> c >> m;
    cin >> h1 >> c >> m1;

    int min = (m + m1) / 2;

    int hr = (h + h1) / 2;
    if ((h + h1) % 2 != 0) {
        if (min + 30 > 59) {
            hr++;
            min = (min + 30) % 60;
        } else {
            min += 30;
        }
    }

    auto hour = to_string(hr);
    auto minute = to_string(min);


    if (hour.size() == 1) {
        cout << 0 << hr << ":";
    } else {
        cout << hr << ":";
    }
    if (minute.size() == 1) {
        cout << 0 << min << "\n";
    } else {
        cout << min << "\n";
    }


    return 0;
}
