#include <iostream>
#include <vector>
#include <queue>

#define MAX 10001

using namespace std;

vector<int> graph[MAX];
queue<int> q;
bool isVisited[MAX];

void bfs(int startNode)
{
    q.push(startNode);
    isVisited[startNode] = true;
    while (!q.empty())
    {
        int currentNode = q.front();
        q.pop();
        cout << currentNode << ' ';
        isVisited[currentNode] = true;

        for (int i = 0; i < graph[currentNode].size(); i++)
        {
            int nextNode = graph[currentNode][i];
            if (!isVisited[nextNode]) // 현재 노드와 인접한 노드 중 방문하지 않은 노드가 있으면 Queue에 저장 후 방문 표시
            {
                q.push(nextNode);
                isVisited[nextNode] = true;
            }
        }
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
    bfs(startNode);
    return 0;
}