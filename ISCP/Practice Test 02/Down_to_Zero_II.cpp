//Down to Zero II Hackerrank

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'downToZero' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */


int downToZero(int n) {
    // * Initializing variables
    queue<int> q;
    int dp[1000001] = {0};
 
    // * Pushing n to the queue
    q.push(n);
 
    // * Executing the loop while queue is not empty
    while (!q.empty())
    {
        // * Getting the current number
        int cn = q.front();
 
        // * Popping the current number from queue
        q.pop();
 
        /*
        *   If the current number is 0, break the loop
        *   as we don't need to scan the queue further
        */
        if(cn==0) {
            break;
        }
 
        /*
        *   Case 1:
        *   If the current number - 1, is not present in the queue,
        *   Push the current number - 1 to the queue and
        *   the number of moves + 1 to the dp array for the new value
        */
        if(dp[cn-1]==0) {
            q.push(cn-1);
            dp[cn-1] = dp[cn] + 1;
        }
 
        /*
        *   Case 2:
        *   Start the counter with square root of current number.
        *   While the square root is greater than or equal to 2,
        *   decrement the counter and check if the current number is divisible
        *   by the current value of counter. If it is, and the value after division
        *   is not already present in the queue, push the new value in the queue and
        *   add the number of moves + 1 to the dp array for the new value
        */
        for(int i=sqrt(cn); i>=2; i--) {
            if(cn%i==0 && dp[cn/i]==0) {
                q.push(cn/i);
                dp[cn/i] = dp[cn] + 1;
            }
        }
    }
 
    // * Return the number of moves to reduce n to 0
    return dp[0];


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        int result = downToZero(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}