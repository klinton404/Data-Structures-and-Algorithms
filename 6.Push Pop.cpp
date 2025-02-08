#include<bits/stdc++.h>

#define pb push_back
#define ll long long int
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
#define all(x) x.begin(), x.end()
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


using namespace std;
const int N = 1e5 + 10;

void solve()
{
    int max = 4;


    stack<int> myStack;
    myStack.push(20);
    myStack.push(15);
    myStack.push(10);
    myStack.push(5);

    cout<< myStack.size() <<'\n';
    if(myStack.size() == max)
    {
        cout<<'\n' <<"Overflow" <<'\n';
    }


    while (!myStack.empty())
    {
        cout<< myStack.size() <<" ";
        myStack.pop();
    }
    if(myStack.empty())
    {
        cout<<'\n' <<"Underflow" <<'\n';
    }
}



int main()
{
    Faster;
    solve();
    return 0;
}
