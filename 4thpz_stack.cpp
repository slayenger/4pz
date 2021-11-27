#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void graph(int num, vector<vector<int>>& vert)
{
    vector<bool> vec(vert.size(), false);
    stack<int> st;

    while (num != -1)
    {
        if (vec[num] == false)
        {
            vec[num] = true;

            for (int j = 0; j < vert.size(); j++)
                if (vert[num][j] == 1 && vec[j] == false) st.emplace(j);
        }
        if (st.size() > 0)
        {
            num = st.top();
            st.pop();
        }
        else num = -1;
    }
    for (bool a : vec) cout << a << ' ';
    cout << endl;
}

int main()
{
    int n = 0;
    cout << "Enter the number of vertices in the graph: " << endl;
    cin >> n;
    cout << "Enter the number of links for each vertex: " << endl; 
    vector < vector<int>> vert(n, vector<int>(n, 0));
    int x;
    for (int i = 0; i < n; i++)
    {
        do
        {
            cin >> x;
            if (x != 0)
            {
                vert[i][x - 1] = 1;
            }
        } while (cin.peek() != '\n');
    }
    for (int i = 0; i < n; i++)
    {
        graph(i, vert);
    }
    return 0;
}