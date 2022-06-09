#include <iostream>

using namespace std;

int BinarySearch(int arr[], int first, int last, int element)
{
	while (first <= last)
    {
		int middle = (first + last) / 2;

		if (arr[middle] == element)
        {
            return middle;
        }

		else if (arr[middle] < element)
        {
            first = middle + 1;
        }

		else
        {
            last = middle - 1;
        }
	}

	return -1;
}


int main(){
    int n, i, j, temp;
    int element;
      cout << "Please enter the size of an array: ";
      cin >> n;
      int array[n];
      cout<< "Please enter the elements of an array: ";
      for (i = 0; i < n; i++)
      {
          cin >> array[i];
      }

      cout<<"\nUnsorted array: ";
      for(int i = 0; i < n; i++)
      {
          cout << array[i] << " ";
      }
      cout << endl << endl;

      for (i = 1; i < n; i++)
      {
          j = i;
          while (j > 0)
          {
              if(array[j - 1] > array[j])
              {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
              }

            j--;
          }
       }

    cout<<"Sorted Elements: ";
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout << endl << endl;

    cout << "\nPlease enter the element which you want to search: ";
    cin >> element;

    int result = BinarySearch(array, 0, n, element);

	if(result == -1)
    {
        cout << "\nElement is not present in array" << endl;
    }
    else
    {
        cout << "\nElement is present at index " << result << endl;
    }

	return 0;

}