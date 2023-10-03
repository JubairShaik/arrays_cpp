// Finding Unique Element

#include <vector>
#include <iostream>

using namespace std;

int findUniqueElement(vector<int> arr)

{

    int answer = 0 ;
    for ( int i = 0; i < arr.size() ; i++)
    {
        answer = answer ^ arr[i] ;
    }
    
    return answer ;
}

int main()
{
    int n;
    cout << "Enter the Size of Array";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter The Elmenets";
    for (int i = 0; i < arr.size(); i++)
    {

        cin >> arr[i];
    }
    int UniqueElement = findUniqueElement(arr);
    cout << "The Unique Element is " << UniqueElement << endl;

    return 0;
}
