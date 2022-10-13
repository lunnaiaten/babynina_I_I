# include <iostream>
# include <string>

int main() {
	int x = 0;
	std::string rout;
	int y = 0;
	int flag = 0;
	int money = 0;
	int i = 0;
	int shag = 0;
	std::cin >> shag;
	std::cin >> rout;
	for (i = 0; i < shag; i++) {
		if (rout[i] == 'R') {
			x += 1;
		}
		if (rout[i] == 'U') {
			y += 1;
		}
		if (x == y and rout[i] == rout[i + 1]) {
			money += 1;
		}
	}
	std::cout << money;
}
