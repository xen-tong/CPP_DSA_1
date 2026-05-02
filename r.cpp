#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& vec, int low, int high, int key) {

    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (vec[mid] == key) {
        return mid;
    }
    else if (key < vec[mid]) {
        return binarySearch(vec, low, mid - 1, key);
    }
    else {
        return binarySearch(vec, mid + 1, high, key);
    }
}

int main() {
    vector<int> vec = {1, 3, 7, 9, 11};
    int key;

    cout << "Enter value to search: ";
    cin >> key;

    int index = binarySearch(vec, 0, vec.size() - 1, key);

    if (index == -1)
        cout << "Value not found" << endl;
    else
        cout << "Element found at index: " << index << endl;

    return 0;
}
