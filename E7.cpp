#include <iostream>
int *sort_withpointer(int n,int* values)
{
    int tmp=0;
	int *a =values;
	int *values2=values+1;
	for(int i=0;i<=n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*values>*values2)
			{
				tmp=*values;
				*values=*values2;
				*values2=tmp;
			}
			values++;
			values2++;
		}
		values=a;
		values2=a+1;
	}
	return values;
}

int main()
{
	int values[10];
	std::cout<<"Please enter 10 integer values:"<<'\n';
    for(int i=0; i<10;i++)
    {
	    std::cin>>values[i];
    }
    std::cout<<'\n';
	int *sort_values=sort_withpointer(10,values);
    std::cout << "VALUES SORTED: ";
	for(int i=0; i<10;i++)
    {
	    std::cout <<*sort_values++<<" ";
    }
    return 0;
}

