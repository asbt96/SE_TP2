#include <iostream>
void order_numbers(int n,int number_list[])
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(number_list[i]>number_list[j])
            {
                temp=number_list[i];
                number_list[i]=number_list[j];
                number_list[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        std::cout<<number_list[i]<<'\t';
    }
}
int main()
{

    int n;
    std::cout<<"Please enter the total number of elements to read: ";
    std::cin>>n;
    int number_list[n];
    if(n<0)
    {
        std::cout<<"Sorry, the number must be positive";
        return -1;
    }
    std::cout<<"Please enter the numbers you want to sort:";
    for(int i=0;i<n;i++)
    {
        std::cin>>number_list[i];
    }
    std::cout<<"Sorted numbers: ";
    order_numbers(n,number_list);
}
