#include <iostream>
#include <ios>
#include <bitset>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <string.h>
#include <cmath>
#include <climits>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <numeric>
#include <functional>
//#include <unordered_map>
//#include <unordered_set>
#define task "CLOCK."
#define ff(i, a, b) for (int i = a; i <= (int) b; ++i)
#define fd(i, a, b) for (int i = a; i >= (int) b; --i)
#define rep(i, a, b) for (int i = a; i < (int) b; ++i)
#define inf 1e9 + 7
#define pb push_back
#define x first
#define y second

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair < int, int > II;
typedef pair < ll, ll > PLL;
typedef pair < double, int > DI;

const int dd[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
char a[5];
int pos, s[10], tmp[10];

void enter()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    ff(i, 1, 3)
        ff(j, 1, 3)
         scanf("%d", &s[++pos]);
}

void edit(int &val, int c)
{
    val = (val + c) % 4;
}

void printf_result(int num, int val)
{
    if (!num)
	return;

    ff(i, 1, num)
        printf("%d ", val);
}

void solve()
{
    // Thử duyệt 4^9 thao tác
    ff(i1, 0, 3) ff(i2, 0, 3) ff(i3, 0, 3) ff(i4, 0, 3) ff(i5, 0, 3)
    ff(i6, 0, 3) ff(i7, 0, 3) ff(i8, 0, 3) ff(i9, 0, 3)
    {
        ff(i, 1, 9) 
	    tmp[i] = s[i];
	
	// Điều chỉnh các đồng hồ tương ứng với từng thao tác và số lượng của thao tác đó.
        edit(tmp[1], i1); edit(tmp[2], i1); edit(tmp[4], i1); edit(tmp[5], i1);
        edit(tmp[1], i2); edit(tmp[2], i2); edit(tmp[3], i2);
        edit(tmp[2], i3); edit(tmp[3], i3); edit(tmp[5], i3); edit(tmp[6], i3);
        edit(tmp[1], i4); edit(tmp[4], i4); edit(tmp[7], i4);
        edit(tmp[2], i5); edit(tmp[4], i5); edit(tmp[5], i5); edit(tmp[6], i5); edit(tmp[8], i5);
        edit(tmp[3], i6); edit(tmp[6], i6); edit(tmp[9], i6);
        edit(tmp[4], i7); edit(tmp[5], i7); edit(tmp[7], i7); edit(tmp[8], i7);
        edit(tmp[7], i8); edit(tmp[8], i8); edit(tmp[9], i8);
        edit(tmp[5], i9); edit(tmp[6], i9); edit(tmp[8], i9); edit(tmp[9], i9);
	
	// Kiểm tra lại xem các đồng hồ đã về hết trạng thái 0 chưa.
        bool kt = true;
        ff(i, 1, 9)
            if (tmp[i]) 
	    { 
		kt = false; 
		break; 
	    }

	// Nếu các đồng hồ đều đã về hết trạng thái 0 thì in ra số lượng thao tác tìm được.
        if (kt)
        {
            printf("%d\n", i1 + i2 + i3 + i4 + i5 + i6 + i7 + i8 + i9);
            return;
        }
    }
}

int main()
{
    enter();
    solve();
    return 0;
}

