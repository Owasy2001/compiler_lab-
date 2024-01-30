#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    int min=b[0];
    for(int i=0;i<a;i++)
    {
        if(b[i]<=min)
        {
            min=b[i];
        }
    }
    cout<<"min value:"<< min<<endl;
    int max=b[0];
    for(int i=0;i<a;i++)
    {
        if(b[i]>=max)
        {
            max=b[i];
        }
    }
    cout<<"max value:"<< max<<endl;

}
