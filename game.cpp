#include<iostream>
using namespace std;
//A recursive function is used to display who wins for the given value a denoting no of boxes left, and p denoting the player.
//-p is the opponent.
//player loses if number of boxes left is zero.
//and if a>0, it chooses the condition where opponent wins because they play alternatively.
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
