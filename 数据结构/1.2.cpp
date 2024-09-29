#include <iostream>

template<class T, int N>
void fill(T (&arr)[N],int start,int end,T value){
    for(int i = start;i < end; i++){
        arr[i] = value;
    }
};

template<class T>
void output_arr(T arr[],int arrLen){
    std::cout << "{";
    int i = 0;
    for (; i < arrLen - 2; i++)
    {
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[i] << "}" << std::endl;
    
}

int main(void)
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "初始数组: ";
    output_arr(a,10);
    fill(a,0,9,0);
    std::cout << "填充数组: ";
    output_arr(a,10);

}
