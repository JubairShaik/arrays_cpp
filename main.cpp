#include <vector> // Include the C++ vector library
#include <iostream> // Include the input and output library

using namespace std; // Use the standard namespace

int main()
{
    vector<int> arr; // Declare a vector of integers named 'arr'

    // Insert elements into the 'arr' vector
    arr.push_back(100);
    arr.push_back(200);

    // Output the size and capacity of the 'arr' vector
    cout << "Size: " << arr.size() << endl;
    cout << "Capacity: " << arr.capacity() << endl;

    // Iterate through the elements of the 'arr' vector and print them
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int n; // Declare an integer variable 'n' to hold user input
    cout << "Enter N Value: ";
    cin >> n; // Read an integer from the user and store it in 'n'

    // Create a new vector 'array' of size 'n' with all elements initialized to -1
    vector<int> array(n, -1);

    // Iterate through the elements of the 'array' vector and print them
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0; // Return 0 to indicate successful program execution
}
