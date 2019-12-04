#include <iostream>
#include <vector>
#include <stack>
#define MAX 10001

using namespace std;

vector<int> graph[MAX];
stack<int> s;
bool isVisited[MAX];

void dfs(int startNode)
{
    s.push(startNode);
    isVisited[startNode] = true;
    cout << startNode << ' ';
    while (!s.empty())
    {
        int currentNode = s.top();
        bool isMaxDepth = true; // 접근 가능한 인접노드 유무 판별
        for (int i = 0; i < graph[currentNode].size(); i++)
        {
            int nextNode = graph[currentNode][i];
            if (!isVisited[nextNode]) // 인접 노드 중 방문한 적 없는 노드인 경우
            {
                s.push(nextNode);
                isVisited[nextNode] = true;
                isMaxDepth = false; // 스택에 들어갈 인접한 노드가 있으면 Max Depth가 아님
                cout << nextNode << ' ';
                break;
            }
        }
        if (isMaxDepth)
            s.pop(); // 접근 가능한 인접노드가 없으면 스택에서 pop
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