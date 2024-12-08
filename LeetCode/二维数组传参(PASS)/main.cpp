#include <iostream>
#define MAX_SIZE 3
using namespace std;

void func(char **TwoDarray)
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        // for (int j = 0; j < MAX_SIZE; i++)
        // {
        //     cout << TwoDarray[i][MAX_SIZE - j];
        // }
        cout << TwoDarray[i] << endl;
        // cout << '\0' << endl;
    }
}

int main(void)
{
    char TwoD[MAX_SIZE][MAX_SIZE + 1] = {"123", "456", "789"};
    char *ViaTwoD[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++)
        ViaTwoD[i] = TwoD[i];
    func(ViaTwoD);
    return 0;
}
