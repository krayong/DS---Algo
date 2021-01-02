#include <bits/stdc++.h>

using namespace std;

/*************************************************************************************************************
 *                                              
 * Link : https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0
 * Description:
    Given an array A of positive integers of size N, where each value represents number of chocolates in a packet. 
    Each packet can have variable number of chocolates. 
    There are M students, the task is to distribute chocolate packets such that :
    1. Each student gets one packet.
    2. The difference between the number of chocolates given to the students having packet with 
    maximum chocolates and student having packet with minimum chocolates is minimum.

 * Resources:
 * https://www.geeksforgeeks.org/chocolate-distribution-problem/
 * 
*************************************************************************************************************/

#define si(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)
#define ss(s) getline(cin, s)
#define pi(x) printf("%d\n", x)
#define pll(x) printf("%lld\n", x)
#define ps(s) cout << s << "\n"
#define fo(i, n) for (int i = 0; i < n; i++)
// #define fo(i, k, n) for (int i = k; k < n ? i < n : i >= n; k < n ? i++ : i--)
#define ll long long
#define deb(x) cout << #x << "=" << x << "\n"
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(a, it) for (auto it = a.begin(); it != a.end(); it++)
#define present(c, x) (c.find(x) != c.end())
#define cpresent(c, x) (find(all(c), x) != c.end())

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t{0};
    si(t);

    while (t--)
    {
        int n{0}, m{0};
        si(n);

        int arr[n];
        fo(i, n) si(arr[i]);

        si(m);

        sort(arr, arr + n);

        int min_diff = INT_MAX;
        for (int i = 0; i + m - 1 < n; i++)
        {
            int diff = arr[i + m - 1] - arr[i];
            if (diff < min_diff)
            {
                min_diff = diff;
            }
        }

        ps(min_diff);
    }

    return 0;
}