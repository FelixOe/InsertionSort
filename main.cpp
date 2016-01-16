#include <iostream>
#include <stdlib.h>
#include <array>

using namespace std;

void InsertionSort(int*, int);

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    int d = 0;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    InsertionSort(arr,size);

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    delete arr;

    return 0;
}

void InsertionSort(int input[], int size)
{
    int length = size;
    int a;

    //First for loop to go through each element of the input array
    for(int c = 1; c < length; c++)
    {
        //Get the current element that is to be inserted
        int temp = input[c];
        //Loop through the input array from the right until the end of the
        //array is reached, or the current element is smaller than the
        //current element we loop over
        for(a = c-1; a >= 0 && temp < input[a]; a--)
        {
            //As long as the new location is not found,
            //shift each element one to the right
            input[a+1] = input[a];
        }
        //Once in the proper location, reinsert the element into the array.
        input[a+1] = temp;
    }
}