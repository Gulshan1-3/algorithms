#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> &arr,int x) {
    int low = 0;
    int high = arr.size() -1 ;

    while(low<=high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x){
            return mid;
        }
        else if (arr[mid]<x){
            low = mid + 1;
        }

        else 
            high = mid -1 ;
        
    }
    return -1;

}


int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int x = 7;

    int idx = binarysearch(arr, x);
    if (idx != -1) {
        cout << "Element found at index " << idx << endl;
    } else {
        cout << "Element not found" << endl;
    }
}