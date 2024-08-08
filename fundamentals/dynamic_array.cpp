#include <iostream>
#include <cassert>
using namespace std;
class DynamicArray {
    private:
        int* data;
        int size;
        int capacity;
        void resize() {
            capacity *= 2;
            int* newData = new int[capacity];
            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }
    public:
        DynamicArray() : size(0), capacity(1), data(new int[capacity]) {}
        ~DynamicArray() {
            delete[] data;
        }
        void add(int item) {
            if (size == capacity) {
                resize();
            }
            data[size++] = item;
        }
        int get(int index) const {
            assert(index >= 0 && index < size);
            return data[index];
        }
};
int main() {
    DynamicArray arr;
    arr.add(5);
    arr.add(10);
    cout << "Element at index 0: " << arr.get(0) << endl;
    cout << "Element at index 1: " << arr.get(1) << endl;
    return 0;
}