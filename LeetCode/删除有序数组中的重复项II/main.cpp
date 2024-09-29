#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int buy = prices[0];
    int profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] > buy)
            profit = profit + (prices[i] - buy);
        buy = prices[i];
    }
    return profit;
}

int main(int argc, char const *argv[])
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices) << endl;
    return 0;
}
