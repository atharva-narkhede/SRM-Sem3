//Equal Stack hackerrank

#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define rer(i,l,u) for(int (i)=(int)(l);(i)<=(int)(u);++(i))
#define reu(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i))
static const int INF = 0x3f3f3f3f; static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;
typedef vector<int> vi; typedef pair<int, int> pii; typedef vector<pair<int, int> > vpii; typedef long long ll;
template<typename T, typename U> static void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> static void amax(T &x, U y) { if(x < y) x = y; }

int main() {
    int n1; int n2; int n3;
    while(~scanf("%d%d%d", &n1, &n2, &n3)) {
        vector<int> a(n1);
        for(int i = 0; i < n1; ++ i)
            scanf("%d", &a[i]);
        vector<int> b(n2);
        for(int i = 0; i < n2; ++ i)
            scanf("%d", &b[i]);
        vector<int> c(n3);
        for(int i = 0; i < n3; ++ i)
            scanf("%d", &c[i]);
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        reverse(c.begin(), c.end());
        map<int, int> t;
        rep(k, 3) {
            const vi &v = k == 0 ? a : k == 1 ? b : c;
            int sum = 0;
            for(int x : v) {
                sum += x;
                ++ t[sum];
            }
        }
        int ans = 0;
        for(auto p : t) if(p.second == 3)
            amax(ans, p.first);
        printf("%d\n", ans);
    }
    return 0;
}