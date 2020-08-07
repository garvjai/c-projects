/* Given an array A[] and a number x, check for pair in A[] with sum as x
Write a program that, given an array A[] of n numbers and another number x,
determines whether or not there exist two elements in S whose sum is exactly x.     */

#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    //int arr[] = {0, -1, 2, -3, 1};
    //int flag = -1;
    int arr [] =  {1, -2, 1, 0, 1, 5, -5, -3, -2, -1, 0, 3, 4, 6, -4};
    int sum;
    int len = sizeof (arr)/sizeof (arr[0]);
    cout << "enter the number" << endl;
    cin >> sum;

//method 1- worst method

//    for(int i = 0; i < len; i++)
//    {
//        for (int j = i+1;j <= len; j++)
//        {
//            if(sum == (arr[i]+arr[j]))
//            {
//                cout << arr[i] << " " << arr [j] << "" << endl;
//                flag  = 0;
//            }
//        }
//    }
//    if( flag == -1)
//    {
//        cout << flag << endl;
//    }


//method 2- Sorting and Two-Pointers technique.

//    sort(arr,arr+len);
//    int first  =  0;
//    int second = len;
//    for(int i=0;i<len;i++)
//        cout << arr[i] << " " ;

//    cout <<endl;
//    for(int i = 0;first < second; i++)
//    {
//        if(sum > (arr [first] + arr [second]))
//        {
//            first++;
//        }
//        else if(sum == (arr [first] + arr [second]))
//        {
//            cout << arr [first] << " " << arr [second] << endl;
//            first++;
//        }
//        else
//        {
//            second--;
//        }
//    }



//method 3-  hasing(use of haspmap (use unordered set) )

    for(int i=0;i<len;i++)
        cout << arr[i] << " " ;

    cout << endl;
    unordered_set <int> s;
    int tempsum ;
    for(int i = 0; i < len; i++)
    {
        tempsum = sum - arr[i];
        if(s.find(tempsum) == s.end())
        {
            s.insert(arr[i]);

        }
        else
        {
            cout << sum - arr[i] << " " << arr[i] << endl;
            s.insert(arr[i]);
        }
    }



    return 0;
}
