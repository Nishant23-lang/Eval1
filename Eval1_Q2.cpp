#include<iostream>
using namespace std;

bool func(int n)
{
    int cnt=1;
   for(int i=2;i*i<=n;i++)
   {
       if(n%i==0)
        cnt++;
   }

   if(cnt==1) return true;
   return false;
}
int main()
{
    int x;
    cout<<"Enter Number up to which Prime numbers you want to print: ";
    cin>>x;

    for(int i=2;i<=x;i++)
    {
        if(func(i))
            cout<<i<<" ";
    }

}
