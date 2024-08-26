// Quick sort algorithm:

#include <bits/stdc++.h>
using namespace std;

int partition(vector <int> &v, int start, int end) {
    int i = start;
    int j = end;
    int pivot = v[start];
    while(i < j) {
        while(v[i] <= pivot && i <= end - 1) {
            i += 1;
        }
        while(v[j] > pivot && j >= start + 1) {
            j -= 1;
        }

        if(i < j) {
            swap(v[i], v[j]);
        }
    }

    swap(v[start], v[j]);
    return j;

}
void quickSort(vector <int> &v, int start, int end) {
    if(start >= end) {
        return;
    }
    int p = partition(v, start, end);
    quickSort(v, start, p-1);
    quickSort(v, p+1, end);
}
int main() {

    vector <int> v = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = v.size();
    cout << "Unsorted array: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    quickSort(v, 0, n-1);

    cout << "Sorted Array: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}