// C++ program for implementation of
// selection sort
#include <iostream>
using namespace std;

void swap(int*& a, int*& b) {
    int* temp = a;
    a = b;
    b = temp;
}

// Driver 
int main()
{
    //Getting Input From User
    int arr[10];
    cout << "Enter 10 Numbers: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ": ";
        cin >> arr[i];
    }

    //Making Array of pointers (points to the items of the Original Array)
    int* array[10];
    for (int i = 0; i < 10; i++) {
        array[i] = &arr[i];
    
    }
    //Determining the size of the Array
    int n = sizeof(array) / sizeof(array[0]);



   
    //Selection Sort--------------
    for (int i = 0; i < n; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (*array[j] < *array[min_idx]) {
                min_idx = j;
            }
        }
        swap(array[min_idx], array[i]);
    }
    //End of Selection Sort
    
 //-------------------
 //Printing- Output-
    cout << "Sorted Array:";
    for (int i = 0; i < n; i++) {
        std::cout << *array[i] << ' ';
        
    }
    cout << endl;
    cout << "Original Array: ";
    for (int i = 0; i < n; i ++ ) {
        std::cout << arr[i]<<" ";
        ;
    }

    return 0;
    

    
}



