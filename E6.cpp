#include <iostream>

int main()
{
    int values[5];
    int *pointer=values;
    std::cout<<"Please enter 5 values:"<<'\n';
    for (int i = 0; i < 5; i++)
    {
        std::cin >> *pointer++;
    }
    std::cout << "The values are: "<<'\n';
    for (int i=0;i<5;i++)
    {
        std::cout<<values[i]<<" ";
    }
    std::cout<<'\n';
    return 0;
}
