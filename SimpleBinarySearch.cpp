#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int binarysearch(int array[], int start, int end, int target){
    if (start > end) {
        cout << "Not found";
        return -1;
    }
    int mid = floor(static_cast<float>(start + end) / 2);

     if(array[mid]==target) {
        cout << "Found number";
        return 0; 
    }

    else if(array[mid]>target) return binarysearch(array, start, mid-1, target);
    else if(array[mid]<target) return binarysearch(array, mid+1, end, target);
    return -1;
}

int main(){
    int arr[50]={11, 12, 13, 15, 16, 18, 19, 21, 23, 24, 25, 27, 29, 32, 33, 34, 35, 37, 38, 39, 41, 42, 
    43, 45, 46, 49, 54, 56, 58, 59, 61, 65, 67, 70, 72, 74, 76, 77, 78, 80, 81, 83, 85, 87, 88, 90, 91, 92, 94, 97};
    int target =56;
    int start = 0;
    int end = 49;
   
    return binarysearch(arr, start, end, target);
   
}