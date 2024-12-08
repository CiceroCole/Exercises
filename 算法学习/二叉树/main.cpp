#include <iostream>

using namespace std;

template <typename V_T>
struct TNode
{
    TNode *left;
    TNode *right;

    V_T value;
};

int main(void)
{
    TNode<int> BST;
    BST.value = 25;
    std::cout << "Hello World!\n";
    return 0;
}
