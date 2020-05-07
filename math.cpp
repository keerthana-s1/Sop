#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//We try to find out the value of the factorial in terms of product of powers of prime.
//the number of divisors is the product of powers+1 of each prime number by combinations.
//and finally print the ans mod 1000000007
long long prim(long long a)
{
    long long i,flag=0;
    for(i=2;i<=a/2;i++)
    {   //cout<<"inside"<<a%i<<endl;
        if(a%i==0)
            {flag=1;
            break;}
    }
    if(flag)
        return 0;
    else return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        long long n,i,temp,fact=1,coun,p=0;
        cin>>n;
        if(n==0||n==1)
            cout<<"1"<<endl;
        else{
        for(i=2;i<=n;i++)
        {   temp=n;
            if(prim(i))
            {  coun=0;
             p++;
             //cout<<i<<endl;
                while(temp)
                { coun+=temp/i;
                  temp/=i;
                }
                fact*=((coun+1)%1000000007);
                fact=fact%1000000007;
                cout<<fact<<endl;
            }
        }
        t--;
        cout<<fact%1000000007<<endl;
        //cout<<p<<endl;
        }
    }
}
