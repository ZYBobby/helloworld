#include<iostream>
using namespace std;
int main()
{
    int s=0;
    for(int num=1;num<101;num++)
      s=s+num;
    cout<<"1+2+3+4+...+99+100=";
    cout<<s<<endl;

    return 0;
}
