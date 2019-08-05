#include <iostream>
#include <string.h>
using namespace std;

int main()
{
     char str[20],tmp;
     cin>>str;
     for(int i=0 ; i<strlen(str) ; i=i+2){
     tmp = str[i];
     str[i] = str[i+1];
     str[i+1] = tmp;
     }
     cout<<str;
}
