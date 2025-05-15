#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Item
{
public:
    int value;
    int weight;
    double ratio;

    Item(int v, int w)
    {
        value = v;
        weight = w;
        ratio = static_cast<double>(v) / w;
    }
};

double fractionalKnapsack(int capacity, vector<Item> &items)
{
    // Sort items by value-to-weight ratio in descending order
    sort(items.begin(), items.end(), [](Item &a, Item &b) 
    {
        return a.ratio > b.ratio;
    });

    double totalValue = 0.0;

    for (Item &item : items)
    {
        if (capacity <= 0)
            break;

        if (item.weight <= capacity)
        {
            totalValue += item.value;
            capacity -= item.weight;
        }
        else
        {
            totalValue += item.ratio * capacity;
            capacity = 0;
        }
    }
    return totalValue;
}

int main()
{
    int capacity;
    cout << "Enter the capacity of the knapsack: "; 

    cin >> capacity;
    int n;
    cout << "Enter the number of items: "; 

    cin >> n;
    vector<Item> items;
    for (int i = 0; i < n; ++i)
    {
        int value, weight;
        cout << "Enter value and weight of item " << i + 1 << ": ";
        cin >> value >> weight;
        items.push_back(Item(value, weight));
    }
    double maxValue = fractionalKnapsack(capacity, items);
    cout << "Maximum value in the knapsack: " << maxValue << endl;
    return 0;
}