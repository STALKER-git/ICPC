#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (!(cin >> N >> M))
        return 0;

    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < M; ++i)
    {
        int u, v;
        cin >> u >> v;
        if (u >= 1 && u <= N)
        {
            adj[u].push_back(v);
        }
    }

    vector<bool> visited(N + 1, false);
    queue<int> q;

    q.push(1);
    visited[1] = true;
    int count = 0;

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        count++;

        for (int next_item : adj[curr])
        {
            if (!visited[next_item])
            {
                visited[next_item] = true;
                q.push(next_item);
            }
        }
    }

    cout << count << endl;

    return 0;
}