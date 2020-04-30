#include<iostream>
using namespace std;
bool isprime(long long i)
{
    for(size_t j=2;j<i;++j)
    {
        if(i%j==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long l;
    cin>>l;
    if(isprime(l))
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
    }
    return 0;
}