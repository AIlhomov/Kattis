#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

#define inf 1e9
#define neg_inf -1e9
#define quit cout << endl; exit(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

template <typename T>
class Graph{
private:
    class Edge{
    public:
        T fromVertex;
        T toVertex;
        ll weight;
        Edge() {}
        Edge(T fromVertex, T toVertex, ll weight) : fromVertex(fromVertex), toVertex(toVertex), weight(weight) {}
        bool operator<(const Edge& other) const{
            return weight < other.weight;
        }
        bool operator>(const Edge& other) const{
            return weight > other.weight;
        }
        bool operator==(const Edge& other) const{
            return weight == other.weight && fromVertex == other.fromVertex && toVertex == other.toVertex;
        }
        bool operator!=(const Edge& other) const{
            return weight != other.weight || fromVertex != other.fromVertex || toVertex != other.toVertex;
        }
        bool operator<=(const Edge& other) const{
            return weight <= other.weight;
        }
        bool operator>=(const Edge& other) const{
            return weight >= other.weight;
        }
    };
    vector<vector<Edge>> adjList;
    unordered_map<T, ll> vertexMap;
public:
    void addVertex(T vertex){
        if (vertexMap.count(vertex) > 0) throw runtime_error("Wrong");
        vertexMap[vertex] = adjList.size();
        adjList.push_back(vector<Edge>());
    }
    void addEdge(T fromVertex, T toVertex, ll weight){
        if (vertexMap.count(fromVertex) == 0 || vertexMap.count(toVertex) == 0) throw runtime_error("Wrong");
        adjList[vertexMap[fromVertex]].push_back(Edge(fromVertex, toVertex, weight)); //directed graph
        //adjList[vertexMap[toVertex]].push_back(Edge(toVertex, fromVertex, weight)); 
    }
    
    void bellmanFord(T start, vector<ll>& dst){
        int n = adjList.size();
        dst.assign(n, inf);
        dst[vertexMap[start]] = 0;

        for (int i=0; i<n-1; i++){
            for (int u=0; u<n; u++){
                for (auto& edge : adjList[u]){
                    if (dst[vertexMap[edge.fromVertex]] != inf && dst[vertexMap[edge.fromVertex]] + edge.weight < dst[vertexMap[edge.toVertex]]){
                        dst[vertexMap[edge.toVertex]] = dst[vertexMap[edge.fromVertex]] + edge.weight;
                    }
                }
            }
        }

        //detect negative cycle
        for (int i=0; i<n-1; i++){
            for (int u=0; u<n; u++){
                for (auto& edge : adjList[u]){
                    if (dst[vertexMap[edge.fromVertex]] != inf && dst[vertexMap[edge.fromVertex]] + edge.weight < dst[vertexMap[edge.toVertex]]) 
                        dst[vertexMap[edge.toVertex]] = neg_inf;
                }
            }
        }

        //mark all vertices reachable from negative cycle
        for (int i=0; i<n; i++){
            for (auto& edge : adjList[i]){
                if (dst[vertexMap[edge.fromVertex]] == neg_inf) 
                    dst[vertexMap[edge.toVertex]] = neg_inf;
            }
        }
    }

    void print(){
        for (int i=0; i<adjList.size(); i++){
            cout << i << ": ";
            for (auto& edge : adjList[i]){
                cout << edge.toVertex << " ";
            }
            cout << endl;
        }
    }
    
};

int main(){
    fast;
    
    while(true){
        ll n, m, q, s;
        cin >> n >> m >> q >> s;
        if (n == 0 && m == 0 && q == 0 && s == 0) break;

        Graph<ll> g;
        rep(i, n) g.addVertex(i);
        
        for (int i=0; i<m; i++){
            ll u, v, w;
            cin >> u >> v >> w;
            g.addEdge(u, v, w);
        }

        vector<ll> dist(n);

        g.bellmanFord(s, dist);

        for (int i = 0; i < q; ++i) {
            ll node;
            cin >> node;
            if (dist[node] == inf) {
                cout << "Impossible\n";
            } else if (dist[node] == neg_inf) {
                cout << "-Infinity\n";
            } else {
                cout << dist[node] << endl;
            }
        }
        cout << endl;
        
    }
    
    return 0;
}
