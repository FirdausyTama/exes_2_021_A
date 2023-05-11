#include <iostream>
using namespace std;

int main() {
    int n, desired_element;
    cout << "========================" << endl;
    cout << "Masukan jumlah element: " << endl;
    cout << "========================" << endl;
    cin >> n;

    int tam[17];
    cout << "masukan " << n << " bilangan bulat:\n";
    for (int i = 0; i < n; i++) {
        cin >> tam[i];
    }
    cout << "===========================================" << endl;
    cout << "Masukan jumlah element yang ingin di cari: " << endl;
    cout << "===========================================" << endl;
    cin >> desired_element;

    int lowerbound = 0;
    int upperbound = n - 1;
    int mid = (lowerbound + upperbound) / 2;

    if (tam[mid] = desired_element) {
        cout << "Found" << mid << endl;
        return 0;
    }
    if (desired_element < tam[mid]) {
        upperbound = mid - 1;
    }
    if (desired_element > tam[mid]) {
        lowerbound = mid + 1;
    }
    if (lowerbound <= upperbound);
    cout << "Not Found" << endl;
    return 0;
}