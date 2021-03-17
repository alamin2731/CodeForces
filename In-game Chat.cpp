#include<iostream>
using namespace std;
int main()
{
    int Case,n,cB;
    string s;
    cin>>Case;
    for(int i=0; i<Case; i++)
    {

        cin>>n;
        cin>>s;
        cB=0;
        for(int j=n-1; j>=0; j--)
        {
            if(s[j]==')')
            {
                cB++;
            }
            else
                break;

        }
        if(cB*2>n)
        {
            cout<<"Yes"<<endl;
        }
        else

            cout<<"No"<<endl;
    }
    return 0;
}
