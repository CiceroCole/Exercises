#include <iostream>
#include <vector>
using namespace std;

int coinChange(vector<int> &coins, int amount)
{
    int c_count = 0;
    while (amount > 0)
    {
        int min_sum = (int)9e10, min_c = coins[0], biger_count = 0;
        for (int i : coins)
        {
            int count = 0, _amount = amount, yu_shu = 0;
            yu_shu = _amount % i;
            if (i > amount)
            {
                biger_count++;
                continue;
            }
            while (_amount >= i)
            {
                _amount -= i;
                count++;
            }
            if (count + yu_shu < min_sum)
            {
                min_sum = count + yu_shu;
                min_c = i;
            }
        }
        cout << "min_coin : " << min_c << endl;
        if (biger_count == coins.size())
            return -1;
        cout << "amount : " << amount << endl;
        while (amount >= min_c)
        {
            amount -= min_c;
            c_count++;
            cout << "amount : " << amount << endl;
        }
    }
    return c_count;
}

int main(void)
{
    vector<int> _in = {1};
    cout << coinChange(_in, 0) << endl;
    return 0;
}