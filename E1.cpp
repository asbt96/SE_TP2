#include<iostream>
double suma(double a, double b)
{
    double res;
    res=a+b;
    return res;

}
double resta(double a,double b)
{
    double res;
    res=a-b;
    return res;
}
double multiplicacion(double a,double b)
{
    double res;
    res=a*b;
    return res;
}
double division(double a,double b)
{
    double res;
    res=a/b;
    return res;
}
int modulo(int a,int b)
{
    int res;
    res=a%b;
    return res;
}

int main ()
{
    double num1,num2;
    int seleccion;
    char ans;
    bool y=true;
    while (y==1)
    {
        std::cout<<"MENU:"<<'\n';
        std::cout<<"1.ADD"<<'\n';
        std::cout<<"2.SUBSTRACT"<<'\n';
        std::cout<<"3.MULTIPLY"<<'\n';
        std::cout<<"4.DIVIDE"<<'\n';
        std::cout<<"5.MODULUS"<<'\n';
        std::cout<<"PLEASE ENTER YOUR CHOICE: ";
        std::cin>> seleccion;
        std::cout<<"PLEASE ENTER YOUR TWO NUMBERS: "<<'\n';
        std::cin>> num1;
        std::cin>> num2;
        switch (seleccion){
            case 1:
                std::cout<<'\t'<< "THE RESULT OF THE OPERATION IS: "<<suma(num1,num2)<<'\n';
                break;
            case 2:
                std::cout<<'\t'<<  "THE RESULT OF THE OPERATION IS: "<<resta(num1,num2)<<'\n';
                break;
            case 3:
                std::cout<< '\t'<< "THE RESULT OF THE OPERATION IS: "<<multiplicacion(num1,num2)<<'\n';
                break;
            case 4:
                std::cout<<'\t'<<  "THE RESULT OF THE OPERATION IS: "<<division(num1,num2)<<'\n';
                break;
            case 5:
                std::cout<<'\t'<<  "THE RESULT OF THE OPERATION IS: "<<modulo(num1,num2)<<'\n';
                break;
        }
        std::cout<< "DO YOU WANT TO CONTINUE? (IF SO PLEASE WRITE y)"<<'\n';
        std::cin>>ans;
        if (ans!='y')
            {
                y=false;
            }
    }
    return 0;
}
