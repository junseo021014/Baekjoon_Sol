#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

using namespace std;

int main() {
    int n;
    int cnt = 0;

    // ���� ���� �Է�
    cin >> n;

    // �������԰� 0�� �� ������ ����
    while (n >= 0) {
        // 5�� ������ 5�� ���� ���� ���
        if (n % 5 == 0) {
            cnt += n / 5;
            cout << cnt << "\n";
            return 0;
        }
        // 5�� ����� �ƴ϶�� 3kg ������ �ϳ� ����� �ٽ� �ݺ��� ����
        n = n - 3;
        cnt++;
    }

    // ���������� �ʴ´ٸ� -1 ���
    cout << -1 << "\n";

    return 0;
}