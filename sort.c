#include<iostream>
using namespace std;
int main()
{
    char str[] = "bcda";

    int i,j;
    char temp;
    for(i=0; i<length(str); i++)
    {
        for(j=0; j<length(str)-1; j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }

    cout << str << endl;

    return 0;
}

