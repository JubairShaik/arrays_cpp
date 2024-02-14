// Using LinearSearch  First Occarance is Okay  !

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int lastOccurance(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;

    int mid = (s + e) / 2;

    int element = v[mid];
    int ans = -1;

    while (s <= e)
    {
        if (element == target)
        {

            // Store the Answer check in right half
            ans = mid;
            s = mid + 1;
        }

        else if (target > element)
        {
            // check in Right half

            s = mid + 1;
        }
        else if (target < element)
        {
            // then check in Left half

            e = mid - 1;
        }

        mid = s + (e - s) / 2;

        element = v[mid];
    }
    return ans;
}



int main()
{
    vector<int> v{1, 3, 4, 4, 4, 4, 6, 7, 9};

    int target = 4;

    int indexOfLastOccurance = lastOccurance(v, target);
    cout << "Answer is at " << indexOfLastOccurance << " Index" << endl;

    auto answer = upper_bound(v.begin(), v.end()  , target);
    cout << "Answer 2 at " << distance(v.begin(), answer) << " Index" << endl;

 
}


