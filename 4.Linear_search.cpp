#include<bits/stdc++.h>
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;
const int N = 1e5 + 10;

void solve()
{
    int num, flag = 0;
    cin>>num;

    int size = 5;
    vector <int> ar(size);
    for(int i=0; i<size; i++)
    {
        cin >> ar[i];
    }

    for(int i=0; i<size; i++)
    {
        if(ar[i]==num)
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        cout <<"Found" <<"\n";
    }
    else
    {
        cout <<"Not Found" <<"\n";
    }
}

int main()
{
    Faster;
    solve();
    return 0;
}
