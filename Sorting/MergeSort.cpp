// Program for merge sort
#include <bits/stdc++.h>
using namespace std;

void merge(vector <int> &v, int start, int mid, int end) {
    int left = start;
    int right = mid + 1;

    vector <int> temp;
    while(left <= mid && right <= end) {
        if(v[left] < v[right]) {
            temp.push_back(v[left++]);
        }
        else {
            temp.push_back(v[right++]);
        }
    }

    while(left <= mid) {
        temp.push_back(v[left++]);
    }

    while(right <= end) {
        temp.push_back(v[right++]);
    }

    for(int i = start; i <= end; i++) {
        v[i] = temp[i-start];
    }
}
void mergeSort(vector <int> &v, int start, int end) {
    if(start == end) return;
    int mid = (start + end) / 2;
    mergeSort(v, start, mid);
    mergeSort(v, mid + 1, end);
    merge(v, start, mid, end);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
}
int main() {

    vector <int> v = {4, 1, 5, 2, 3};
    int n = v.size();
    cout << "Unsorted array: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    mergeSort(v, 0, n-1);
    cout << "Sorted array: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}