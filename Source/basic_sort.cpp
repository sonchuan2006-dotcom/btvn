#include <iostream>
#include "../Header/basic_sort.hpp"
using namespace std;

void swap(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
}
void lua_chon(int* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if(a[min] > a[j]) min = j;
        }
        swap(a[i], a[min]);
        cout << "buoc " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}
void noi_bot (int* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (a[j] < a[j - 1]) swap(a[j], a[j - 1]);
        }
        cout << "buoc " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}
void chen(int* a, int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key) {
            swap(a[j + 1], a[j]);
            j--;
        }
        cout << "buoc " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}