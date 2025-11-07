#include <iostream>
#include <algorithm>
#include "../Header/complex_sort.hpp"
using namespace std;

void chia_vung(int* nums, int left, int right, int n) {
    if (left >= right) return;

    int c = nums[left];
    int i = left + 1, j = right;

    while(i <= j) {
        while(i <= j && nums[i] < c) i++;
        while(i <= j && nums[j] > c) j--;
        if (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    
    for (int k = 0; k < n; k++) {
        cout << nums[k] << " ";
    }
    cout << endl;
    swap(nums[left], nums[j]);
    chia_vung(nums, left, j - 1, n);
    chia_vung(nums, j + 1, right, n);
}
void nhanh(int* nums, int n) {
    chia_vung(nums, 0, n - 1, n);
}
void tron(int* nums, int left, int mid, int right) {
    int* a = new int[right - left + 1];
    int k = 0;
    int i = left, j = mid + 1;
    while(i <= mid && j <= right) {
        if(nums[i] < nums[j]) a[k++] = nums[i++];
        else a[k++] = nums[j++];
    }
    while(i <= mid) a[k++] = nums[i++];
    while(j <= right) a[k++] = nums[j++];
    for (int u = 0; u < k; u++) {
        nums[left + u] = a[u];
    }
    for (int u = left; u <= right; u++) {
        cout << nums[u] << " ";
    }
    cout << endl;

    delete[] a;
}
void SapXepTron(int* nums, int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    SapXepTron(nums, left, mid);
    SapXepTron(nums, mid + 1, right);
    tron(nums, left, mid, right);
}
