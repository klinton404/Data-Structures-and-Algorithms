#include <bits/stdc++.h>
using namespace std;

int main()
{
    string T;
    cin>>T;
    string P;
    cin>>P;

    size_t pos = T.find(P);

    // If P is found in T, erase it
    if (pos != string::npos)
    {
        T.erase(pos, P.length());
    }

    cout << "Modified string: " << T << endl;
    return 0;
}
