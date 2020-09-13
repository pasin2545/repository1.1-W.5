#include<stdio.h>

int main() {
	unsigned int N, M, K, L, C, Mon, re = 0, re2;
	int light[100][100];
	scanf_s("%u %u", &N, &M);
	scanf_s("%u %u", &L, &K);
	scanf_s("%u", &C);
	if (N >= 1 && N <= 100 && M >= 1 && M <= 100 && L >= 1 && L <= 100 && K >= 1 && K <= 100 && C >= 1 && C <= 1000) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				scanf_s("%d", &light[i][j]);
				if (light[i][j] <= 0) {
					light[i][j] = 0;
				}
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (light[i][j] >= 1) {
					re = re + light[i][j];
				}
			}
		}
		re2 = C;
		re2 = re2 * K;
		re2 = re2 * L;
		re2 = re2 + re;
		if (re2 % C != 0) {
			re2 = re2 / C;
			re2 = re2 + 1;
		}
		else {
			re2 = re2 / C;
		}
		printf("%u", re2);
	}
	return 0;
}