#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

using namespace std;

int main() {
    int n;
    int cnt = 0;

    // 설탕 무게 입력
    cin >> n;

    // 설탕무게가 0이 될 때까지 실행
    while (n >= 0) {
        // 5의 배수라면 5로 나눈 몫을 출력
        if (n % 5 == 0) {
            cnt += n / 5;
            cout << cnt << "\n";
            return 0;
        }
        // 5의 배수가 아니라면 3kg 봉지를 하나 만들고 다시 반복문 실행
        n = n - 3;
        cnt++;
    }

    // 나누어지지 않는다면 -1 출력
    cout << -1 << "\n";

    return 0;
}