#include<bits/stdc++.h>
using namespace std;

int partition(vector <int> &v, int start, int end) {
	int pivot = start;
	int count = 0;
	for(int i = start+1; i <= end; i++) {
		if(v[i] <= v[pivot]) {
			count += 1;
		}
	}
	pivot = start + count;
	swap(v[pivot], v[start]);

	int i = start, j = end;
	while(i < pivot && j > pivot) {
		while(v[i] < v[pivot]) {
			i += 1;
		}
		while(v[j] > v[pivot]) {
			j -= 1;
		}
		
		if(i < pivot && j > pivot) {
			swap(v[i++], v[j--]);
		}
	}

	return pivot;
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

	vector <int> v = {3, 1, 5, 4, 2};
	int n = v.size();
	quickSort(v, 0, n-1);

	for(int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	return 0;
}