/*
    1
   2 3
  4 5 6
 7 8 9 10

 */

#include <iostream>

int main()
{
    int rows;
    std::cout << "Enter the number of rows for the pyramid: ";
    std::cin >> rows;

    int count = 1;
    for (int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; j++)
        {
            std::cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i; k++)
        {
            std::cout << " " << count++;
        }

        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}