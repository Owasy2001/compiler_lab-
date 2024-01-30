#include<bits/stdc++.h>



using namespace std;
int main()
{
    int n,n1;
    cout<< "Please input the first name character number:";
    cin>>n;
    cout<< "Please input the second name character number:";
    cin>>n1;

    char a[n];
    char b[n1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n1;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
       cout<<a[i];
    }
    cout<< " ";
    for(int i=0;i<n1;i++)
    {
        cout<<b[i];
    }

}
