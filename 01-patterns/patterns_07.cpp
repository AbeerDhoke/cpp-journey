#include <iostream>
int main()
    {
        int n = 5;
        char ch = 'A';
      for(int i = 0; i<n; i++)
      {
        for(int j = 0; j<i+1; j++)
        {
            std::cout << ch << " ";
        }
            ch = ch+1;
            std::cout << std:: endl;
      }
      return 0;  
    }
      
