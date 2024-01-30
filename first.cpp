#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0;
    cout<< "give me the total number of avarage:";
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
        sum=sum+b[i];
    }
    float avg=sum/(float)a;
    cout<<avg;

}
