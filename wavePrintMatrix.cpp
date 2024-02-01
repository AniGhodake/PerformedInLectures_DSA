#include <bits/stdc++.h>
using namespace std;
#include<vector>
 
#define R 3
#define C 3
 
// Function to print wave
// Form for a given matrix
void WavePrint(int m, int n, int arr[R][C])
{
    vector<int>nums;
    int brr[R][C];

    
        for(int j = 0; j < n; j++){
           

           if(j%2==0){
            for(int i =0; i<R; i++){
               cout<<arr[i][j]<<" ";
               //nums.push_back(arr[i]);
            }
           }

             if(j%2!=0){
            for(int i =R-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
           }


        }
    





//    for(int i=0; i<R; i++) {
//         for(int j=0; j<C; j++) {
//              cout << brr[i][j]<< " ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;

}
 
// Driver Code
int main()
{
   
    int arr[R][C] = { { 1, 2, 3},
                      { 4, 5, 6,},
                      { 7, 8, 9},
                       };

    //printing the array;
   for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
             cout << arr[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
 
    WavePrint(R, C, arr);
 
    return 0;
}