#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

template <typename T>
class OrderedList{
    private:
        class Node{
            public:
                T data;
                Node* next;
                Node(const T &data, Node* next = nullptr): data(data), next(next){}
        };
        Node* front;
    public:
        OrderedList(): front(nullptr){}
        ~OrderedList(){
            Node *walker = front;
            while (front != nullptr){
                this->front = walker->next;
                delete walker;
                walker = this->front;
            }
        }
        OrderedList(const OrderedList &other) = delete;
        OrderedList &operator=(const OrderedList &other) = delete;

        int size() const{
            int count = 0;
            Node* current = front;
            while (current != nullptr){
                count++;
                current = current->next;
            }
            return count;
        }
        bool is_empty() const{
            return front == nullptr;
        }
        void add(const T& element){
            Node* new_node = new Node(element);
            if (front == nullptr || front->data > element){
                new_node->next = front;
                front = new_node;
            } else {
                Node* current = front;
                while (current->next != nullptr && current->next->data < element){
                    current = current->next;
                }
                new_node->next = current->next;
                current->next = new_node;
            }
        }
        T removeAt(int index){
            if (index < 0 || index >= size()){
                throw out_of_range("Index out of range");
            }
            Node* current = front;
            Node* previous = nullptr;
            for (int i = 0; i < index; i++){
                previous = current;
                current = current->next;
            }
            T result = current->data;
            if (previous == nullptr){
                front = current->next;
            } else {
                previous->next = current->next;
            }
            delete current;
            return result;
        }
        T removeFirst(){
            if (is_empty()){
                throw out_of_range("List is empty");
            }
            T result = front->data;
            Node* next = front->next;
            delete front;
            front = next;
            return result;
        }
        T removeLast(){
            if (is_empty()){
                throw out_of_range("List is empty");
            }
            Node* current = front;
            Node* previous = nullptr;
            while (current->next != nullptr){
                previous = current;
                current = current->next;
            }
            T result = current->data;
            if (previous == nullptr){
                front = nullptr;
            } else {
                previous->next = nullptr;
            }
            delete current;
            return result;
        }
        T getAt(int index) const{
            if (index < 0 || index >= size()){
                throw out_of_range("Index out of range");
            }
            Node* current = front;
            for (int i = 0; i < index; i++){
                current = current->next;
            }
            return current->data;
        }
        T first() const{
            if (is_empty()){
                throw out_of_range("List is empty");
            }
            return front->data;
        }
        T last() const{
            if (is_empty()){
                throw out_of_range("List is empty");
            }
            Node* current = front;
            while (current->next != nullptr){
                current = current->next;
            }
            return current->data;
        }
};

class PriorityQueue{
    private:
        OrderedList<int> list;
    public:
        PriorityQueue(){}
        void enqueue(int element){
            list.add(element);
        }
        int dequeue(){
            return list.removeLast();
        }
        int peek(){
            return list.last();
        }
        int size(){
            return list.size();
        }
        bool is_empty(){
            return list.is_empty();
        }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    while (cin >> n){

        stack<int> s;
        queue<int> q;
        PriorityQueue pq;
        

        bool is_stack = true, is_queue = true, is_pq = true;

        for (int i = 0; i < n; i++) {
            int op, x;
            cin >> op >> x;

            if (op == 1) {
                s.push(x);
                q.push(x);
                pq.enqueue(x);
            } else {
                if (s.empty() || s.top() != x) is_stack = false;
                if (q.empty() || q.front() != x) is_queue = false;
                if (pq.is_empty() || pq.peek() != x) is_pq = false;

                if (!s.empty()) s.pop();
                if (!q.empty()) q.pop();
                if (!pq.is_empty()) pq.dequeue();
            }
        }

        if (is_stack && !is_queue && !is_pq) cout << "stack\n";
        else if (!is_stack && is_queue && !is_pq) cout << "queue\n";
        else if (!is_stack && !is_queue && is_pq) cout << "priority queue\n";
        else if (!is_stack && !is_queue && !is_pq) cout << "impossible\n";
        else cout << "not sure\n";
    }
    
    quit;
}