#include <iostream>
#include <fstream>
#include <map>
using namespace std;

// 比较两个map是否相等
template <typename K_t, typename V_t>
bool maps_equation(map<K_t, V_t> map1, map<K_t, V_t> map2)
{
    if (map1.size() != map2.size())
        return false;
    for (auto it : map1)
    {
        if (map2.count(it.first) == 0)
            return false;
        else if (map2[it.first] != it.second)
            return false;
    }
    return true;
}

bool isAnagram(string s, string t)
{
    map<char, int> s_dict;
    map<char, int> t_dict;
    if (s.size() != t.size())
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s_dict.count(s[i]) == 0)
            s_dict[s[i]] = 1;
        else
            s_dict[s[i]] += 1;

        if (t_dict.count(t[i]) == 0)
            t_dict[t[i]] = 1;
        else
            t_dict[t[i]] += 1;
    }
    return maps_equation(s_dict, t_dict);
}

int main(void)
{
    ifstream input;
    ofstream output;
    string _in1, _in2;
    input.open("input", ios::in);
    output.open("output", ios::out);
    input >> _in1;
    input >> _in2;
    output << isAnagram(_in1, _in2);
    input.close();
    output.close();
    return 0;
}