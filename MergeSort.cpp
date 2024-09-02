#include <iostream>
#include <vector> 
using namespace std;

void merge_sort(int arr[], int sizearr){
    
    if (sizearr>1){
        int mid = (sizearr/2);
        vector<int> left_half(arr, arr + mid);
        vector<int> right_half(arr + mid, arr + sizearr);

        merge_sort(left_half.data(), left_half.size());
        merge_sort(right_half.data(), right_half.size());
        
        int i=0, j=0, k=0;
        
        while (i < left_half.size() && j < right_half.size()){
            if (left_half[i]<right_half[j]){
                arr[k] = left_half[i];
                i++;
            }
            else{
                arr[k] = right_half[j];
                j++;
            }
            k++;
        }
        while (i < left_half.size()) {
            arr[k] = left_half[i];
            i++;
            k++;
        }

        while (j < right_half.size()) {
            arr[k] = right_half[j];
            j++;
            k++;
        }
        
    }
}

int main(){
    int arr[] = {8, 4, 30, 23, 67, 98, 43, 13, 2, -7, 33};
    int sizearr = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr, sizearr);
    for (int i = 0; i < sizearr; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
