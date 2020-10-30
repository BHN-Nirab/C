#include<bits/stdc++.h>
using namespace std;
int main()
{
    short int unicodeBytes[] = new short int
    {0x61, 0x70, 0x70, 0x6C, 0x69, 0x63, 0x61,
     0x74, 0x69, 0x6F, 0x6E, 0x2F, 0x70, 0x63,
     0x61, 0x70};

string unicodeString = Encoding.Unicode.GetString(unicodeBytes);

Console.WriteLine(unicodeString);

    return 0;
}
