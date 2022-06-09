#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    bool unique = true;
    cout << "Enter array size(it's must be more then 5): ";
    cin >> n;
    while (n <= 5)
    {
        cout << "Enter again. Array size must be more than 5: ";
        cin >> n;
    }
    int array[n], finalArray[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        int tempCount = 0;
        int temp = array[i];
        for (int j = 0; j < n; j++)
        {
            if (temp == array[j])
            {
                tempCount++;
            }
        }
        if (tempCount >= 1)
        {
            if (count == 0)
            {
                finalArray[count] = temp;
                count++;
            }
            else if (count != 0)
            {
                for (int j = 0; j < count; j++)
                {
                    int breakCount = 0;
                    for (int k = 0; k < count - 1; k++)
                    {
                        if (finalArray[k] == temp)
                        {
                            breakCount++;
                            unique = false;
                            break;
                        }
                    }
                    if (breakCount >= 1)
                    {
                        break;
                    }
                    else if (finalArray[j] != temp)
                    {
                        finalArray[count] = temp;
                        count++;
                        break;
                    }
                }
            }
        }
    }
    if (unique == false)
    {
        for (int i = 0; i < count; i++)
        {
            cout << finalArray[i] << " ";
        }
    }
    else
    {
        cout << "Array already unique." << endl;
    }
    cout << endl;
}