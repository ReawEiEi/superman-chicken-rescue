#include <iostream>

using namespace std;

int main()
{

    // Variables
    int chicken_count, superman_length, max_carry = 0;

    // Input
    cout << "Enter the [Number of chickens] and [Length of the roof Superman can carry]: ";
    cin >> chicken_count >> superman_length;

    // Array of chickens and their positions
    int chickens[chicken_count];
    cout << "Enter the [Position of chickens]: ";

    // Input the positions of chickens
    for (int i = 0; i < chicken_count; i++)
    {
        cin >> chickens[i];
    }

    // Find the maximum number of chickens Superman can carry
    int left = 0;
    for (int right = 0; right < chicken_count; right++)
    {
        while (chickens[right] - chickens[left] >= superman_length)
        {
            left++;
        }
        max_carry = max(max_carry, right - left + 1);
    }

    cout << "Maximum number of chickens Superman can carry: " << max_carry << endl;
}