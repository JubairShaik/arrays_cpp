#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 7, 6, 5, 4};
    int brr[] = {3, 4, 5, 6, 5, 4, 3, 2};

    // Calculate the size of arr and brr
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int brrSize = sizeof(brr) / sizeof(brr[0]);

    cout << "The Size of Array 1 is " << arrSize << endl;
    cout << "The Size of Array 2 is " << brrSize << endl;

    vector<int> ans(arr, arr + arrSize); // Copy arr to ans
    
    ans.insert(ans.end(), brr, brr + brrSize); // Insert elements of brr to ans

    // Sort the vector and remove duplicates
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    cout << "Printing Final Array" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}



















// brute Force  






// #include <iostream>
// #include <vector>
 
// using namespace std;

// int main()
// {
//     int arr [] = {1,2,4,6,7,7,6,5,4} ;
//     int brr [] = {3,4,5,6,5,4,3,2} ;

//     // Calculate the size of arr and brr
//     int arrSize = sizeof(arr) / sizeof(arr[0]);
//     int brrSize = sizeof(brr) / sizeof(brr[0]);

//      cout << "The Size of Array 1 is " << arrSize << endl ;
//      cout << "The Size of Array 2 is " << brrSize << endl ;

//     vector <int> ans ;
 
//     for (int i = 0; i < arrSize ; i++)
//     {
         
//           ans.push_back(arr[i]);
//           arr[i] = -1 ;
//     }
//     for (int i = 0; i < brrSize ; i++)
//     {
//           ans.push_back(brr[i]);
//           arr[i] = -1  ;
//     }

//     cout << "Printing Final Array " << endl ;
//     for ( int i = 0; i < ans.size() ; i++)
//     {
//         if( arr[i]  !=  -1 ) { 
            
//         cout<<ans[i]<< " ";
//         }
//     }
    

//     return 0;
// }