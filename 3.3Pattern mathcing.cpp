#include<bits/stdc++.h>
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;
const int N = 1e5 + 10;

void solve()
{
    string T; //= "abcdef";
    string P; //= "cd";
    cin>>T;
    cin>>P;
    int n = T.length();
    int m = P.length();

    for(int i=0; i<=n-m; i++)
    {
        int j;
        for(j=0; j<m; j++)
        {
            if(T[i+j] != P[j])
            {
                break;
            }
        }
        if(j == m)
        {
            cout<<"Pattern found at index" <<" " << i <<"\n";
        }
    }
}

int main()
{
    Faster;
    solve();
    return 0;
}
