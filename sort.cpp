#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char str[s.size()];
    for(int k=0; k<s.size(); k++)
        str[k]  =  s[k];


    int i,j;
    char temp;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4-1; j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    str[i] = '\0';

    cout << str << endl;

    return 0;
}

