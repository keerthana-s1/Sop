#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n,q,j=0,sum=0,i,temp,s=0;
    //long a[1000];

    cin>>n>>q;
    vector<long> a;
    for(i=0;i<n;i++)
    {   cin>>temp;
        sum=temp+s;
        a.push_back(sum);
        s=sum;
    }
    sum=0;
    for(i=0;i<q;i++)
    {   cin>>temp;
        //b.push_back(temp);
        for(j=0;j<n;j++)
        {
            if(temp<=a[j])
                break;
        }

        cout<<j+1<<endl;

    }

}
