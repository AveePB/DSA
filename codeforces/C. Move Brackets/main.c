#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initialize data
    int t, n;
    char bracket_seq[64];
    scanf("%d", &t);

    while (t--) {
        // Handle each test case
        scanf("%d %s", &n, &bracket_seq);
        int lbracket_count = 0, rbracket_count = 0, n_errors = 0;

        for (int i=0; i<n; i++) {
            if (bracket_seq[i] == '(') {
                lbracket_count++;
            }
            
            else if (lbracket_count > rbracket_count) {
                rbracket_count++;
            }

            else {
                n_errors += 1;
                lbracket_count = rbracket_count = 0;
            }
        }

        printf("%d \n", n_errors);
    }

    return 0;
}
