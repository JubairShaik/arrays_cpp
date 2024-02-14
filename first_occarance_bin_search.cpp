// Using LinearSearch  First Occarance is Okay  !

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int firstOccurance(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;

    int mid = (s + e) / 2;

    int element = v[mid];
    int ans = -1 ;  

    while (s <= e)
    {
        if (element == target)
        {

            //Store the Answer check in left half
            ans = mid;
            e = mid - 1;
        }

        else if (target > element)
        {
            //check in Right half

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
    vector<int> v{1 ,3 ,4 ,4 ,4 ,4, 6 ,7, 9};
    int target = 4 ;

    int indexOfFirstOccurance = firstOccurance(v, target);

    cout << "Answer is " << indexOfFirstOccurance << endl;
}





// 1 3 4 4 4 4 6 7 9

// in binary Search ! we Know we have to find the mid

// (0 + 9)/2

// 4.5 ~ 5th element

// its a common Sense  that '

// this 5th element is the first Occarance of 4

// or

// remaining elements present in left side (i.e.) 4th element or 3rd element so on  ...

// LEFT SIDE MEANS   end = mid -1

// so Array Becomes

//   1   3   4   4
// start        end  ===> mid = 1st element i.e  element = 3

// we know that our target first Occarance is 4

// target > midelement so (.RightSide.)

// so , the current mid ,(3) which becomes start = mid+1  ;

// then (4)====== Which is the Target and hence we Found the First Occurance at index 2 !
