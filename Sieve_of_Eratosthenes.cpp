#include <iostream>
const int n = 30;
 
int main()
{
   
    int arr[n] = {0};
 
    for (int i = 2; i <n; i++)
    {
        for (int j = i * i; j <n; j+=i)
        {
            arr[j - 1] = 1;
        }
    }
    for (int i = 2; i <n; i++)
    {
        if (arr[i - 1] == 0)
            std::cout << i << "\t";
    }

   return 0;
} 