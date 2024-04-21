#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

template <typename T>
class Queue{
    private:
        class Node{
            public:
                T data;
                Node* next;
                Node(T data, Node* next = nullptr)
                    : data(data), next(next) {}
        };
        Node* first;
        Node* last;
    public:
        Queue();
        virtual ~Queue();
        Queue(const Queue& other) = delete;
        Queue& operator=(const Queue& other) = delete;
        void enqueue(const T& element);
        T dequeue();
        const T& peek() const;
        bool is_empty() const;
};

template <typename T>
Queue<T>::Queue()
{
    first = nullptr;
    last = nullptr;
}

template <typename T>
Queue<T>::~Queue()
{
    while(!is_empty()){
        dequeue();
    }
}

template <typename T>
void Queue<T>::enqueue(const T& element)
{
    Node* new_node = new Node(element);
    if(is_empty()){
        first = new_node;
        last = new_node;
    }else{
        last->next = new_node;
        last = new_node;
    }
}

template <typename T>
T Queue<T>::dequeue()
{
    if(is_empty()){
        throw out_of_range("Queue<>::dequeue(): empty queue");
    }
    T element = first->data;
    Node* old_first = first;
    first = first->next;
    delete old_first;
    return element;
}

template <typename T>
const T& Queue<T>::peek() const
{
    if(is_empty()){
        throw out_of_range("Queue<>::peek(): empty queue");
    }
    return first->data;
}

template <typename T>
bool Queue<T>::is_empty() const
{
    return first == nullptr;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int c;
    cin >> c;

    while(c--){
        int l, m;
        cin >> l >> m;

        l *= 100;
        Queue<int> left;
        Queue<int> right;

        for(int i = 0; i < m; i++){
            int length;
            string side;
            cin >> length >> side;
            if(side == "left"){
                left.enqueue(length);
            }else{
                right.enqueue(length);
            }
        }

        int ferry = 0;
        bool on_left = true;
        while(!left.is_empty() || !right.is_empty()){
            int space = l;
            if(on_left){
                while(!left.is_empty() && left.peek() <= space){
                    space -= left.peek();
                    left.dequeue();
                }
            }else{
                while(!right.is_empty() && right.peek() <= space){
                    space -= right.peek();
                    right.dequeue();
                }
            }
            ferry++;
            on_left = !on_left;
        }

        cout << ferry << endl;
    }
    
    
    
    quit;
}
