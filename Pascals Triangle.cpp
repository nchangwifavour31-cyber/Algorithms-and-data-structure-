//Pascals Triangle
#include<iostream>
int main()
{
    int rows;
    std::cout<<"Enter the number of pascals rows:";
    std::cin>>rows;

    for (int i=0; i<rows; i++)
    {
        int val=1;
        std::cout.width(rows-i);
        for (int x=0; x<=i; x++)
        {
            std::cout<<val<<" ";
            val=val*(i-x)/(x+1);
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

    return 0;

}
