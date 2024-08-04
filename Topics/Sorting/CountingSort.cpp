#include<bits/stdc++.h>
using namespace std;

vector <int> countSort(vector <int> &arr) {
    int n = arr.size();

    int maxEle = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > maxEle) {
            maxEle = arr[i];
        }
    }
    vector <int> count(maxEle + 1, 0);

    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    vector<int> sortedArr(arr.size());
    for(int i = 0; i <= maxEle; i++) {
        while(count[i] > 0) {
            sortedArr[index++] = i;
            count[i]--;
        }
    }

    return sortedArr;
}
int main() {

    clock_t start, end;
    vector <int> arr = {4, 3, 12, 1, 5, 5, 3, 9, 4, 2, 2, 8, 3, 3, 1};
    start = clock();
    vector <int> ans = countSort(arr);
    end = clock();
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    cout << "Execution time: " << fixed 
         << double(end - start) / double(CLOCKS_PER_SEC) 
         << setprecision(5) << " seconds" << endl
         << endl;
    return 0;
}