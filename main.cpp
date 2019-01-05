#include<iostream>
#include<math.h>
using namespace std;
int primeNumber(int n)
{
    for(int i=2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        // int x;
        cin>>A[i];
    }
    for(int i=0; i<n; i++)
    {
        if(primeNumber(A[i]))
            cout<<A[i]<<endl;

    }
    return 0;
}
