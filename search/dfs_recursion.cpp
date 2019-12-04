#include <iostream>
#include <vector>
#define MAX 10001

using namespace std;

vector<int> graph[MAX];
bool isVisited[MAX];

void dfs(int node)
{
    if (isVisited[node])
    {
        return;
    }
    isVisited[node] = true;
    cout << node << ' ';
    for (int i = 0; i < graph[node].size(); i++)
    {
        int nextNode = graph[node][i];
        dfs(nextNode);
    }
}

int main()
{
    int nodeCount, edgeCount, startNode;

    cout << "노드갯수, 간선갯수 입력 : ";
    cin >> nodeCount >> edgeCount; // 정점과 간선의 개수를 입력받음
    for (int i = 0; i < nodeCount; i++)
    {
        isVisited[i + 1] = false; // 방문 체크 리스트 초기화
    }

    cout << "간선 연결 정보 입력 : " << endl;
    for (int i = 0; i < edgeCount; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout << "시작 노드 : ";
    cin >> startNode;
    dfs(startNode);
    return 0;
}