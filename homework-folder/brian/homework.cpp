#include <iostream>

using namespace std;

int main()
{
	int n; int m;
	cin >> n;
	cin >> m;
	int arr[101][101];
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			sum += arr[i][j];
		}
		cout << sum << endl;
		sum = 0;
	}
}

