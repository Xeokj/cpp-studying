#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

/* vector (���� �迭) ��� ���� */
/* �׷����� vector�� �����ϰ� ���� �� ����� */
/* �Է� ����
	4 5
	1 2
	1 3
	1 4
	2 4
	3 4

	���
	��� 1�� ����� ���: 2 3 4
	��� 2�� ����� ���: 1 4
	��� 3�� ����� ���: 1 4
	��� 4�� ����� ���: 1 2 3
	*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, a, b;
	int i, j;
	vector<vector<int>> A;

	// ���: n��, ����: m��
	cin >> n >> m;
	// ���� ����Ʈ A ũ�� �ʱ�ȭ
	A.resize(n + 1);

	// ���� ����Ʈ A�� �׷��� ������ ����
	for (i = 0; i < m; i++) {
		cin >> a >> b;
		A[a].push_back(b);
		A[b].push_back(a);
	}

	// �� ���鿡 ����� ��� ��ȣ�� ������������ ����
	for (i = 1; i <= n; i++)
		sort(A[i].begin(), A[i].end());

	// 1�� ������ �� ��忡 ����� ���� ���
	for (i = 1; i <= n; i++) {
		cout << "��� " << i << "�� ����� ���: ";
		for (j = 0; j < A[i].size(); j++) {
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
}