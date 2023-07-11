#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

/* vector (동적 배열) 출력 연습 */
/* 그래프를 vector로 저장하고 정렬 후 출력함 */
/* 입력 예시
	4 5
	1 2
	1 3
	1 4
	2 4
	3 4

	출력
	노드 1에 연결된 노드: 2 3 4
	노드 2에 연결된 노드: 1 4
	노드 3에 연결된 노드: 1 4
	노드 4에 연결된 노드: 1 2 3
	*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, a, b;
	int i, j;
	vector<vector<int>> A;

	// 노드: n개, 에지: m개
	cin >> n >> m;
	// 인접 리스트 A 크기 초기화
	A.resize(n + 1);

	// 인접 리스트 A에 그래프 데이터 저장
	for (i = 0; i < m; i++) {
		cin >> a >> b;
		A[a].push_back(b);
		A[b].push_back(a);
	}

	// 각 노드들에 연결된 노드 번호를 오름차순으로 정렬
	for (i = 1; i <= n; i++)
		sort(A[i].begin(), A[i].end());

	// 1번 노드부터 각 노드에 연결된 노드들 출력
	for (i = 1; i <= n; i++) {
		cout << "노드 " << i << "에 연결된 노드: ";
		for (j = 0; j < A[i].size(); j++) {
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
}