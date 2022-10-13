# include <iostream>
# include <string>

int main() {
	int n = 0;
	int posled = 0;
	int leng = 0;
	std::string posl;
	std::cin >> n;
	int i = 0;
	int a = 0;
	int count = 0;
	int j = 0;
	int minimal = 100000;
	for (posled = 0; posled <= n; posled++) {
		std::cin >> leng;
		std::cin >> posl;
		for i in range(i = 0; i < (leng - 1); i++) {
			for j in range(j > i; j < leng; j++) {
				if (posl[i] == posl[j]) {
					count += 1;
				}

			}
		}
		for (i in range(i = 0; i < leng; i++)) {
			if (leng[i] <= minimal) {
				minimal = leng[i];
			}
		}
		for i in range(i = 0; i < (leng - 1); i++) {
			if 
			if (leng[i] == minimal) {
				
	}
}
