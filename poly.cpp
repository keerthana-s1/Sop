#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
//Using brute force method, we try all values in the range till we find the root;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
         long long int arr[5],m,ans;
         int i,j,n;
        cin>>n;
        for(i=0;i<=n;i++)
        {
            cin>>arr[i];
        }


           for(i=-1000000;i<=1000000;i++)
           {  int val=0;
               if(n==1)
                val=arr[0]*i+arr[1];
               else if(n==2)
                val=arr[0]*i*i+arr[1]*i+arr[2];
               else if(n==3)
                val=arr[0]*i*i*i+arr[1]*i*i+arr[2]*i+arr[3];
                else
                val=arr[0]*i*i*i*i+arr[1]*i*i*i+arr[2]*i*i+arr[3]*i;
             if(val==0)
                break;
           }

       cout<<ans<<endl;
       t--;
    }
}
