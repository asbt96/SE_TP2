#include <iostream>

int *pointer(int n,int data[] )
{
    int *maximo=data;

    for (int i=0;i<n;i++)
    {
        if (*maximo<data[i])
        {
            *maximo=data[i];
        }
    }
    return maximo;
}

int main()
{
    int n;
    std::cout<<"Please enter the number of data values: ";
    std::cin>>n;
    if(n<0)
    {
        std::cout<<"Sorry, the number must be positive";
        return -1;
    }
    int data[n];
    for (int i=0;i<n;i++)
    {
        std::cout<<"Enter value "<<i<<" :";
        std::cin>>data[i];
    }

    int *maximo= pointer(n,data);
    std::cout << "The max is: " << *maximo <<'\n';
    return 0;
}

