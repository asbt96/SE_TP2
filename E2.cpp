#include<iostream>
int max_value(int numbers[])
{
    int maximo=numbers[0];
    for(int i=0;i<10;i++)
    {
        if(numbers[i]>maximo)
        {
            maximo=numbers[i];
        }
    }
    return maximo;
}
int min_value(int numbers[])
{
    int minimo=numbers[0];
    for(int i=0;i<10;i++)
    {
        if(numbers[i]<minimo)
        {
            minimo=numbers[i];
        }
    }
    return minimo;

}
int most_ocurred(int numbers[])
{
    int res,rep=0;
     for(int i=0; i<10; i++)
    {
        int contador=1;
        for(int j=i+1; j<10; j++)
        {
            if(numbers[i]==numbers[j])
            {
                contador++;
            }
            if(contador>rep)
            {
                rep = contador;
            }
        }
    }
    for(int i=0; i<10 ; i++)
    {
        int contador = 1;
        for (int j=i+1; j<10; j++)
        {
            if (numbers[i]==numbers[j])
            {
                contador++;
            }
            if (contador==rep)
            {
                res= numbers[i];
            }
        }
    }
    return res;


}
int main()
{
    int numbers[10];
    int num;
    std::cout<<"Please enter 10 integer numbers:"<<'\n';
    for (int i=0;i<10;i++)
    {
        std::cin>>num;
        numbers[i]=num;
    }
    std::cout<<'\n';
    std::cout<<"The greatest value among the numbers is: "<<max_value(numbers)<<'\n';
    std::cout<<"The smallest value among the numbers is: "<<min_value(numbers)<<'\n';
    std::cout<<"The value that occurs the most among the numbers is: "<<most_ocurred(numbers)<<'\n';
    return 0;
}
