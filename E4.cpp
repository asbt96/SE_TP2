#include <iostream>
void get_triangle(int n)
{
    int triangle[n][n];
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<=r;c++)
        {
            if (r==c||c==0)
            {
                triangle[r][c] = 1;
            }
            else
            {
                triangle[r][c]=triangle[r-1][c-1]+triangle[r-1][c];
            }
            std::cout<<triangle[r][c]<<" ";
        }
        std::cout<<'\n';
    }


}

int main()
{
    int n;
    std::cout<<"Please enter the size of the Pascal triangle you want: ";
    std::cin>>n;
    if(n<0)
    {
        std::cout<<"Sorry, the size must be positive";
        return -1;
    }
    std::cout<<"******PASCAL TRIANGLE******"<<'\n';
    get_triangle(n);
    return 0;
}
