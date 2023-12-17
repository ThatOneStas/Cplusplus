#include <iostream>
using namespace std;

void push_by_index(int*& arr_1, int size_1, int* arr_2, int size_2, int index) {
    int* newArr = new int(size_1 + size_2);
    for (int i = 0;i < index;i++) {
        newArr[i] = arr_1[i];
    }
    int c = 0;
    for (int i = index;i < size_2+index;i++) {
        newArr[i] = arr_2[c];
        c++;
    }
    int d = index;
    for (int i = index+size_2;i < size_1 + size_2;i++) {
        newArr[i] = arr_1[d];
        d++;
    }
    arr_1 = newArr;
}

int main()
{
    int size_1 = 3;
    int* arr_1 = new int[size_1];
    for (int i = 0;i < size_1;i++) {
        arr_1[i] = i;
    }
    int size_2 = 3;
    int* arr_2 = new int[size_2];
    for (int i = 0;i < size_2;i++) {
        arr_2[i] = i;
    }
    // show first arr before adding second
    for (int i = 0;i < size_1;i++) {
        cout << arr_1[i] << endl;
    }

    int index;
    cout << "=================================" << endl << "Input index: ";
    cin >> index;
    cout << "=================================" << endl;
    push_by_index(arr_1,size_1,arr_2,size_2,index);

    // show first arr after adding second
    for (int i = 0;i < size_1 + size_2;i++) {
        cout << arr_1[i] << endl;
    }
}
