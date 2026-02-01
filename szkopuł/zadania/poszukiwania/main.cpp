// Libraries
#include <iostream>

// Constants
const int N = 1e3;

int main() {
	// Lines, that remove delay of I/O
	std::ios_base::sync_with_stdio(0); std::cout.tie(0); std::cin.tie(0);

	// Input
	int n, mat[N][N];
	std::cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) std::cin >> mat[i][j];

	// Create matrix where dp[i][j] is a number of max princesses
	int dp[N][N]; dp[n - 1][n - 1] = mat[n - 1][n - 1];

	// Handle edge cases
	for (int i = n - 2; i >= 0; i--) {
		dp[n - 1][i] = mat[n - 1][i] + dp[n - 1][i + 1];
		dp[i][n - 1] = mat[i][n - 1] + dp[i + 1][n - 1];
	}

	// Row -> r, Column -> c
	for (int r = n - 2; r >= 0; r--) {
		for (int c = n - 2; c >= 0; c--) {
			dp[r][c] = mat[r][c] + std::max(dp[r + 1][c], dp[r][c + 1]);
		}
	}

	// Max number of princesses
	std::cout << dp[0][0];

	return 0;
}
