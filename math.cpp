#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
                fact*=((coun+1)%1000000000);
                fact=fact%1000000000;
                cout<<fact<<endl;
            }
        }
        t--;
        cout<<fact%1000000000<<endl;
        //cout<<p<<endl;
        }
    }
}
