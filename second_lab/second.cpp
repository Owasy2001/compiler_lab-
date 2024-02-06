#include<bits/stdc++.h>
using namespace std;
void answer(string s)
{

    string s1="";
    for(int i=0;i<s.size();i++)
    {

        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='=')
        {

            s1+=s[i];

        }

    }
    for(int i=0;i<s1.size();i++)
    {
       cout<< "operator"<<i+1<< ":"<<s1[i]<<endl;
    }
}
int main()
{
    string s;
    cin>>s;
    answer(s);

}
