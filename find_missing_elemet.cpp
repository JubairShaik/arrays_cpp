// Missing Elements from an Array with Duplicates

// we have an Array  1 2 3 4 5

// Given Array is 1 3 5 3 4

// We Can Clearly Observe that (2) is the missing element in the Given Array

// 2 Methods

// Visited or Not Visited

// Given Array is  1 3 5 3 4

// 1 to n Elementrs but there will be some missing elements
// there should be no duplicates

// method 2

// Sort and Swapping

// hint : match index and element

// elements : 1 3 5 3 4

// basically indexes start from 0s !

// natural numbers (n) starts from 1 , 2 , 3 , 4.... n

// so consider the indexes with (i+1)

// array of elements : 1 3 5 3 4

// index of elemnets : 1 2 3 4 5

// sort the elements

// if element and index value matches then super !  everythings is doing great

// else ! Somthing is Fishy

// array of elements : 1 3 5 3 4

// After Sorting : 1 3 3 4 5

// Indexes       : 1 2 3 4 5

// status        : M N M M M    (  M = Index Matched    N = Index Not Matched  // )

// Therefore Replace the element with its respective index , i.e Swapping

// index == a[i]  Cool !

// if index != a[i] ;

// swap karo maharaj

#include <iostream>
#include <algorithm>
using namespace std;

void findMissing(int *a, int n)
{
    int i = 0;

    while (i < n)
    {
        int index = a[i] - 1; // subtract 1 to get the correct index

        if (a[i] != a[index])
        {
            swap(a[i], a[index]);
        }
        else
        {
            ++i;
        }
    }

    cout << "Missing elements: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    // cout << "Correct array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
}

void Method1(int *a, int n)
{

    for (int i = 0; i < n; i++)
    {
        /* code */
        int index = abs(a[i]);
        if (a[index - 1] > 0)
        {
            a[index - 1] *= -1;
        }
    }
    // for ( int i = 0; i < n ; i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    for (int i = 0; i < n; i++)
    {
        /* code */
        // cout << i + 1 << " ";
        if(a[i]>0){
            cout << i + 1 << " ";
        }
    }
}



int main()
{
    int a[] = {1, 3, 3, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);

    findMissing(a, n);

    Method1(a, n);

    return 0;
}
 