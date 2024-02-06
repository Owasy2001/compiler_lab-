#include<bits/stdc++.h>
using namespace std;

void print( string s)
{
  bool a=0;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]>='A'&&s[i]<='Z')
      {
          a=1;
      }
      else if (s[i]>='0'&&s[i]<='9')
      {
          a=0;
      }
  }
  if(a)cout<< "NOT NEWMERIC";
  else if (a==0)cout<< "NEWMERIC CONSTANT";
  else cout<< "your input is incorrect";

}
int main()
{
    string s;
    cin>>s;
    print(s);

}
