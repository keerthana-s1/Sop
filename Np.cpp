#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//the first array is modified such that a[i] contains the number of pizza boxes used till the day i+1 and not just on the day.
//the for each query, the least day containing boxes greater and or equal to the required number is found and displayed.
int main()
{
    long n,q,j=0,sum=0,i,temp,s=0;
   

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
        
        for(j=0;j<n;j++)
        {
            if(temp<=a[j])
                break;
        }

        cout<<j+1<<endl;

    }

}
