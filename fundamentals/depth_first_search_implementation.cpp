#include <iostream>
#include <list>
#include <vector>
using namespace std;
class Graph {
    private:
        int numVertices;
        list<int> *adjLists;
        vector<bool> visited;
        void DFSUtil(int vertex) {
            visited[vertex] = true;
            cout << vertex << " ";
            for (int adj : adjLists[vertex]) {
                if (!visited[adj]) {
                    DFSUtil(adj);
                }
            }
        }
    public:
        Graph(int vertices) : numVertices(vertices), adjLists(new list<int>[vertices]), visited(vertices, false) {}
        void addEdge(int src, int dest) {
            adjLists[src].push_back(dest);
        }
        void DFS(int startNode) {
            fill(visited.begin(), visited.end(), false);
            DFSUtil(startNode);
        }
};
int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    cout << "Depth First Traversal starting from vertex 2:" << endl;
    g.DFS(2);
    return 0;
}