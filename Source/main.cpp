#include <iostream>
#include "../Header/basic_sort.hpp"
#include "../Header/complex_sort.hpp"
#include "../Header/test_vector.hpp"

using namespace std;

int main() {
    int choose;
    cout << "chon thuat toan sap xep: \n"
        << "1. lua chon \n"
        << "2. noi bot \n"
        << "3. chen \n"
        << "4. nhanh \n"
        << "5. tron\n";
    cout << "lua chon cua ban: "; cin >> choose;
    
    for (int i = 0; i < nums_count; i++) {
        int* arr = new int[nums_size[i]];
        for (int j = 0; j < nums_size[i]; j++) {
            arr[j] = nums[i][j];
        }

        cout << "\n mang truoc khi sap xep: ";
        for (int j = 0; j < nums_size[i]; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;

        switch(choose) {
            case 1:
                cout << "lua chon: " << endl;
                lua_chon(arr, nums_size[i]);
                break;
            
            case 2:
                cout << "noi bot: " << endl;
                noi_bot(arr, nums_size[i]);
                break;

            case 3:
                cout << "chen: " << endl;
                chen(arr, nums_size[i]);
                break;
            
            case 4:
                cout << "nhanh: " << endl;
                nhanh(arr, nums_size[i]);
                break;

            case 5:
                cout << "Tron: " << endl;
                SapXepTron(arr, 0, nums_size[i] - 1);
                break;

            default: 
                cout << "Error" << endl;
                break;

        }
        delete[] arr;

    }
    return 0;
}