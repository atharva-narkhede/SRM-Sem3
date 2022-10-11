//Castle on the Grid Hackkerrank

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


class Node
{
public:
    int first;
    int second;
    int steps;
    Node(int x, int y, int steps)
    {
        first = x;
        second = y;
        this->steps = steps;
    }
};

// Complete the minimumMoves function below.
int minimumMoves(vector<string> grid, int startX, int startY, int goalX, int goalY) {
    queue<Node> indices;
    Node end(goalX, goalY, INT32_MAX);
    int grid_size = grid.size();

    Node start(startX, startY, 0);
    indices.push(start);
    vector<vector<int>> visits(grid_size, vector<int>(grid_size, -1));

    visits[start.first][start.second] = 0;
    int minSteps = INT_MAX;

    visits[startX][startY] = 0;
    while (!indices.empty())
    {
        Node thisIndex = indices.front();
        indices.pop();
        visits[thisIndex.first][thisIndex.second] = 0;

        for (int i = 1; thisIndex.second < grid_size - 1 && grid[thisIndex.first][thisIndex.second + i] == '.'
            && visits[thisIndex.first][thisIndex.second + i] == -1;)
        {

            if (thisIndex.first == end.first && thisIndex.second + i == end.second)
            {
                thisIndex.steps++;
                return thisIndex.steps;
            }

            if (thisIndex.first > 0 && grid[thisIndex.first - 1][thisIndex.second + i] == '.'
                && visits[thisIndex.first - 1][thisIndex.second + i] == -1)
            {
                Node index(thisIndex.first, thisIndex.second + i, thisIndex.steps + 1);
                indices.push(index);
                i++;
                if (thisIndex.second + i > grid_size - 1)
                {
                    break;
                }
                continue;
            }
            if (thisIndex.first + 1 < grid_size - 1 && grid[thisIndex.first + 1][thisIndex.second + i] == '.'
                && visits[thisIndex.first + 1][thisIndex.second + i] == -1)
            {
                Node index(thisIndex.first, thisIndex.second + i, thisIndex.steps + 1);
                indices.push(index);
                i++;
                if (thisIndex.second + i > grid_size - 1)
                {
                    break;
                }
                continue;
            }
            i++;
            if (thisIndex.second + i > grid_size - 1)
            {
                break;
            }
        }

        for (int i = 1; thisIndex.first < grid_size - 1 && grid[thisIndex.first + i][thisIndex.second] == '.'
            && visits[thisIndex.first + i][thisIndex.second] == -1;)
        {
            if (thisIndex.first + i == end.first && thisIndex.second == end.second)
            {
                thisIndex.steps++;
                return thisIndex.steps;
            }

            if (thisIndex.second > 0 && grid[thisIndex.first + i][thisIndex.second - 1] == '.'
                && visits[thisIndex.first + i][thisIndex.second - 1] == -1)
            {
                Node index(thisIndex.first + i, thisIndex.second, thisIndex.steps + 1);
                indices.push(index);
                i++;
                if (thisIndex.first + i > grid_size - 1)
                {
                    break;
                }
                continue;
            }
            if (thisIndex.second + 1 < grid_size - 1 && grid[thisIndex.first + i][thisIndex.second + 1] == '.'
                && visits[thisIndex.first + i][thisIndex.second + 1] == -1)
            {
                Node index(thisIndex.first + i, thisIndex.second, thisIndex.steps + 1);
                indices.push(index);
                i++;
                if (thisIndex.first + i > grid_size - 1)
                {
                    break;
                }
                continue;
            }
            i++;
            if (thisIndex.first + i > grid_size - 1)
            {
                break;
            }
        }
        for (int i = 1; thisIndex.first > 0 && grid[thisIndex.first - i][thisIndex.second] == '.' &&
            visits[thisIndex.first - i][thisIndex.second] == -1;)
        {
            if (thisIndex.first - i == end.first && thisIndex.second == end.second)
            {
                thisIndex.steps++;
                return thisIndex.steps;
            }

            if (thisIndex.second > 0 && grid[thisIndex.first - i][thisIndex.second - 1] == '.'
                && visits[thisIndex.first - i][thisIndex.second - 1] == -1)
            {
                Node index(thisIndex.first - i, thisIndex.second, thisIndex.steps + 1);
                indices.push(index);
                i++;
                if (thisIndex.first - i < 0)
                {
                    break;
                }
                continue;
            }
            if (thisIndex.second + 1 < grid_size - 1 && grid[thisIndex.first - i][thisIndex.second + 1] == '.'
                && visits[thisIndex.first - i][thisIndex.second] == -1)
            {
                Node index(thisIndex.first - i, thisIndex.second, thisIndex.steps + 1);
                indices.push(index);
                i++;
                if (thisIndex.first - i < 0)
                {
                    break;
                }
                continue;
            }
            i++;
            if (thisIndex.first - i < 0)
            {
                break;
            }
        }

        for (int i = 1; thisIndex.second > 0 && grid[thisIndex.first][thisIndex.second - i] == '.'
            && visits[thisIndex.first][thisIndex.second - i] == -1;)
        {
            if (thisIndex.first == end.first && thisIndex.second - i == end.second)
            {
                thisIndex.steps++;
                return thisIndex.steps;
            }

            if (thisIndex.first > 0 && grid[thisIndex.first - 1][thisIndex.second - i] == '.'
                && visits[thisIndex.first][thisIndex.second - i] == -1)
            {
                Node index(thisIndex.first, thisIndex.second - i, thisIndex.steps + 1);
                indices.push(index);
                i++;
                if (thisIndex.second - i < 0)
                {
                    break;
                }
                continue;
            }
            if (thisIndex.first + 1 < grid_size - 1 && grid[thisIndex.first + 1][thisIndex.second - i] == '.'
                && visits[thisIndex.first][thisIndex.second - i] == -1)
            {
                Node index(thisIndex.first, thisIndex.second - i, thisIndex.steps + 1);
                indices.push(index);
                i++;
                if (thisIndex.second - i < 0)
                {
                    break;
                }
                continue;
            }
            i++;
            if (thisIndex.second - i < 0)
            {
                break;
            }
        }

        if (visits[end.first][end.second] != -1)
        {
            break;
        }

        
    }
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    string startXStartY_temp;
    getline(cin, startXStartY_temp);

    vector<string> startXStartY = split_string(startXStartY_temp);

    int startX = stoi(startXStartY[0]);

    int startY = stoi(startXStartY[1]);

    int goalX = stoi(startXStartY[2]);

    int goalY = stoi(startXStartY[3]);

    int result = minimumMoves(grid, startX, startY, goalX, goalY);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}