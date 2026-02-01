// Libraries
#include <iostream>

// Constants
const int MAX_WEIGTH = 1e4 + 7;
const int INF = 5e8 + 7;
const int N = 1e3;

// Structs
struct Coin { int value, weight; };

int main() {
	// Lines, that remove delay of I/O
	std::ios_base::sync_with_stdio(0); std::cout.tie(0); std::cin.tie(0);

	// Input
	Coin coins[N];
	int n, w_prim;

	std::cin >> w_prim >> n;
	for (int i = 0; i < n; i++) std::cin >> coins[i].value >> coins[i].weight;

	// Reverse knapsack problem
	int dp[MAX_WEIGTH];
	for (int i = 0; i < MAX_WEIGTH; i++) dp[i] = INF;
	dp[0] = 0;

	// Squeeze each coin
	for (int i = 0; i < n; i++) {
		// Find smaller sum
		for (int w = coins[i].weight; w <= w_prim; w++) {
			dp[w] = std::min(dp[w], dp[w - coins[i].weight] + coins[i].value);
		}
	}

	// Output
	if (dp[w_prim] == INF)
		std::cout << "NIEMOZLIWE";
	else 
		std::cout << dp[w_prim];

	return 0;
}