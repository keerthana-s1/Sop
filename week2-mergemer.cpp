#include <iostream>
#include <bits/stdc++.h>
#include<vector> // for 2D vector
#include<algorithm> // for sort()
using namespace std;
bool sortcol( const vector<long int>& v1,
               const vector<long int>& v2 ) {
    return v1[0] < v2[0];
}
int main()
{   long int n,t1,t2,i,c=0,lim=1,sum,j;
    vector< vector<long int> > a;
    vector< vector<long int> > b;
    cin>>n;
    for(i=0;i<n;i++)
    {   cin>>t1>>t2;
    a.push_back(vector< long int>());
        a[i].push_back(t1);
        a[i].push_back(t2);

    }
    sort(a.begin(), a.end(),sortcol);
    b.push_back(vector< long int>());
               b[0].push_back(a[0][0]);
               b[0].push_back(a[0][1]);

    for(i=1;i<n;i++)
    {  for(j=0;j<lim;j++)
        if((a[i][0]>=b[j][0]&&a[i][0]<=b[j][1]))
           {
             b[j][0]=min(a[i][0],b[j][0]);
            b[j][1]=max(a[i][1],b[j][1]);
            break;
           }
           else
           {
               b.push_back(vector< long int>());
               b[lim].push_back(a[i][0]);
               b[lim].push_back(a[i][1]);
               if(i!=n-1)
               lim++;
           }

    }
    cout<<lim;



}


