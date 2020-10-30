#include<iostream>
using namespace std;
int main()
{
    int numofCoin = 5;
    int coin[numofCoin] = {4,2,2,2,2};
    int amount = 8;

    int array[amount+1];
    array[0] = 0;

    for(int i=1; i<amount+1; i++)
        array[i] = amount+1;

    for(int i=1; i<amount+1; i++)
    {
        for(int j=0; j<numofCoin; j++)
        {
            if(coin[j] <= i)
            {
                int tmp = i-coin[j];
                array[i] = min(array[tmp]+1, array[i]);

            }
        }
    }

    if(array[amount]>amount)
        cout << "Invalid!" << endl;
    else
        cout << "Minimum number of coin is: " << array[amount] << endl;


    return 0;
}
