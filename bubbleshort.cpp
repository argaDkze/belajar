#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {5,3,4,1,2};
    int n = sizeof(arr) / sizeof (arr[0]);

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++)
    {
    cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; i++)
        {
            if (arr[j] > arr [j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}