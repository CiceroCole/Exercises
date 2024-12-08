#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

long long maximumSumOfHeights(vector<int> &maxHeights)
{
    int max_v = 0;
    int max_i = 0;
    int size = maxHeights.size();

    for (int i = 0; i < size; i++)
    {
        if (maxHeights[i] >= max_v)
        {
            max_i = i;
            max_v = maxHeights[i];
        }
    }
    for (int i = max_i; i > 0; i--)
    {
        if (maxHeights[i - 1] > maxHeights[i])
            maxHeights[i - 1] = maxHeights[i];
    }
    for (int i = max_i; i < size - 1; i++)
    {
        if (maxHeights[i + 1] > maxHeights[i])
            maxHeights[i + 1] = maxHeights[i];
    }

     long long int count = 0;
    for (int i : maxHeights)
    {
        count += i;
        cout << i << " ";
    }
    return count;
}

int main(void)
{
    ifstream input;
    ofstream output;
    int temp;
    vector<int> _in;
    input.open("input", ios::in);
    output.open("output", ios::out);
    while (input >> temp)
        _in.push_back(temp);
    output << maximumSumOfHeights(_in);
    input.close();
    output.close();
    return 0;
}