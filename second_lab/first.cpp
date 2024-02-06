#include<bits/stdc++.h>
using namespace std;

void print( string s)
{
  bool flag =true;
  for(int i=0;i<s.size();i++)
  {
      if(i==0&&s[i]=='-')continue;
      else if(s[i]=='.')continue;
      else if(s[i]>=48&&s[i]<=57)continue;
      else{
           flag=false;
            break;
      }
  }
  if(!flag)cout<< "NOT NEWMERIC";
  else cout.<< "NEWMERIC CONSTANT";
  //else cout<< "your input is incorrect";

}
int main()
{
    string s;
    cin>>s;
    print(s);

}
