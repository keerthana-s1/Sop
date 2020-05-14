#include<iostream>
#include<math.h>
using namespace std;

long poss(long n,int a,int b)
{
    while(n>0)
    {
        if(n%10==a||n%10==b)
            n/=10;
        else
            return 0;
    }
    return 1;
}


int main()
{
    long n;
    cin>>n;
    if(n<=101)
        cout<<n;
    else{
     long c=101;
    for(int j=102;j<=n;j++)
    {  int i=j;
        int a,b;
    a=i%10;
    i/=10;
    b=i%10;
    i/=10;
    while(b==a)
    {  b=i%10;
       i/=10;
    }
    //cout<<a<<b<<i;
  if(poss(i,a,b)==1)
        c++;
    }
    cout<<c;


    }

}
