#include<iostream>
using namespace std;
int game(long a,long k,int p)
{
    if(a==0)
        {
            return -p;

        }
    else if(a>0){
        if(game(a-1,k,-p)==p||game(a-2,k,-p)==p||game(a-k,k,-p)==p)
                return p;

        else return -p;

    }
    else return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        long n,k;
        int p=1;
        cin>>n>>k;
        if(game(n,k,p)==-1)
            cout<<"Surya"<<endl;
        else cout<<"Chandra"<<endl;
        t--;
    }
}
