#include<array>
#include<iostream>
using std::cout;
using std::endl;

int main()
{
    std::array<int,3>arr={1,5,23};
    arr[2]=35;
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
