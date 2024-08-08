#include <iostream>
#include <cassert>
using namespace std;
class DynamicArray {
    private:
        int* data;
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
        int size;
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
class Stack {
    private:
        DynamicArray arr;
    public:
        void push(int item) {
            arr.add(item);
        }
        int pop() {
            assert(!isEmpty());
            int poppedElement = arr.get(arr.size - 1);
            arr.size--;
            return poppedElement;
        }
        int top() const {
            assert(!isEmpty());
            return arr.get(arr.size - 1);
        }
        bool isEmpty() const {
            return arr.size == 0;
        }
};
int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    cout << "Top element: " << stack.top() << endl;
    cout << "Popped element: " << stack.pop() << endl;
    cout << "New top element: " << stack.top() << endl;
    return 0;
}