// Libraries
#include <iostream>

// Constants
const int MAX_WEIGHTS_SUM = 15e5 + 7;
const int P = 150;

int main() {
	// Lines, that remove delay of I/O
	std::ios_base::sync_with_stdio(0); std::cout.tie(0); std::cin.tie(0);
	
	// Input 
	int p, total_sum = 0, weights[P];
	std::cin >> p;
	for (int i = 0; i < p; i++) {
		std::cin >> weights[i];
		total_sum += weights[i];
	}

	// Knapsack problem
	int w_prim = total_sum / 2, dp[MAX_WEIGHTS_SUM];
	for (int i = 0; i <= w_prim; i++) dp[i] = 0;

	// Squeeze each element 
	for (int i = 0; i < p; i++) 
		// Find bigger sum
		for (int w = weights[i]; w <= w_prim; w++) 
			dp[w] = std::max(dp[w], dp[w - weights[i]] + weights[i]);

	// Get inheritance of first son
	int inher1 = std::max(dp[w_prim], total_sum - dp[w_prim]);
	std::cout << inher1 << ' ' << total_sum - inher1;

	return 0;
}
