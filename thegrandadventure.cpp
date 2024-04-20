#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

template <typename T>
class Stack{
    private:
        T* elements;
        int currentCapacity;
        int top;
        void expand();
    public:
        Stack(int initialCapacity = 10);
        virtual ~Stack();
        Stack(const Stack<T>& other) = delete;
        Stack<T>& operator=(const Stack<T>& other) = delete;
        void push(const T& element);
        T pop();
        T peek();
        bool isEmpty();
};

template <typename T>
void Stack<T>::expand(){
    T* newElem = new T[currentCapacity * 2];
    for (int i=0; i<currentCapacity; i++){
        newElem[i] = elements[i];
    }
    delete[] elements;
    elements = newElem;
    currentCapacity *= 2;
}

template <typename T>
Stack<T>::Stack(int initialCapacity){
    elements = new T[initialCapacity];
    currentCapacity = initialCapacity;
    top = -1;
}

template <typename T>
Stack<T>::~Stack(){
    delete[] elements;
}

template <typename T>
void Stack<T>::push(const T& element){
    if (top == currentCapacity - 1) {
         expand();
    }
    elements[++top] = element;
}

template <typename T>
T Stack<T>::pop(){
    if (top == -1) throw runtime_error("Nah");
    return elements[top--];
}

template <typename T>
T Stack<T>::peek(){
    if (top == -1){
        throw runtime_error("Nah");
    }
    return elements[top];
}

template <typename T>
bool Stack<T>::isEmpty(){
    return top == -1;
}

bool finish(const std::string &adventure) {
    Stack<char> backpack;

    for (char item : adventure) {
        switch (item) {
            case '$':  //Money
            case '*':  //Gem
            case '|':  //Incense
                backpack.push(item);
                break;
            case 'b':  //Banker
                if (!backpack.isEmpty() && backpack.peek() == '$') {
                    backpack.pop();
                } else {
                    return false;
                }
                break;
            case 'j':  //Jeweler
                if (!backpack.isEmpty() && backpack.peek() == '*') {
                    backpack.pop();
                } else {
                    return false;
                }
                break;
            case 't':  //Trader
                if (!backpack.isEmpty() && backpack.peek() == '|') {
                    backpack.pop();
                } else {
                    return false;
                }
                break;
            default:  //Ground "."
                break;
        }
    }

    return backpack.isEmpty();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string adventure;

    while (n--){
        cin >> adventure;
        cout << (finish(adventure) ? "YES" : "NO") << endl;
    }

    quit;
}