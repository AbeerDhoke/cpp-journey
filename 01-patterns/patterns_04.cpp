#include <iostream>
int main()
    {
    int n = 3;
     char ch = 'A';
    for(int i = 0; i<3; i++)
    {
       for( int j = 0; j<3; j++)
       {
        std::cout << ch << " ";
        ch = ch+1;
       }
        std::cout << std::endl;
    }
        return 0;
    }