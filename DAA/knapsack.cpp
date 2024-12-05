#include <bits/stdc++.h>
using namespace std;

class Item {
    public:
    int value, weight;
};

bool compare(Item a, Item b) {
    double r1 = (double) a.value / a.weight;
    double r2 = (double) b.value / b.weight;

    return r1 > r2;
}

double knapsack(vector <Item> &items, int w) {
    sort(items.begin(), items.end(), compare);
    
    double currentWeight = 0;
    double finalValue = 0.0;


    for(Item item:items) {
        if(currentWeight + item.weight <= w) {
            currentWeight += item.weight;
            finalValue += item.value;
        }
        else {
            double remainingWeight = w - currentWeight;
            finalValue += item.value * ((double) remainingWeight / item.weight);
            break;
        }
    }

    return finalValue;
}
int main() {

    int w = 50;
    vector <Item> items = {{10, 60}, {20, 100}, {30, 120}};
    double maxResult = knapsack(items, w);
    cout << "Maximum result is: " << maxResult << endl;
    return 0;
}