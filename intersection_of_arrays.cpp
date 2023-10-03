#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{
        1, 2, 3, 3, 4, 6, 8};
    vector<int> brr{
        3, 4, 10}; //  3, 3 , 4 ,10 check with  this mark :)
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])

            { 
                answer.push_back(arr[i]);
                // once it is pushed ! mark it
                brr[j] = -1;
                break;
            }
        }
    }

    for (auto value : answer)
    {
        cout << value << " ";
    }

    return 0;
}
