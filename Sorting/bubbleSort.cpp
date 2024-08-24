// Program for bubble sort
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector <int> &v) {
    for(int i = 0; i < v.size(); i++) {
        for(int j = i+1; j < v.size(); j++) {
            if(v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
}
int main() {

    clock_t start, end;
    vector <int> v = {4, 1, 5, 2, 3};

    cout << "Unsorted array: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    start = clock();
    bubbleSort(v);
    end = clock();
    cout << "Sorted array: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    double execution_time = double(end - start) / CLOCKS_PER_SEC;
    cout << endl << "Execution time: " << fixed << setprecision(5) << execution_time << " Seeconds"  << endl;
    return 0;
}