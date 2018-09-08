/* Output:
 *
 * Enter number of steps: 5
 * _____
 *     1|
 *       _____
 *           2|
 *             _____
 *                 3|
 *                   _____
 *                       4|
 *                         _____
 *                             5|
 *                               5-----4-----3-----2-----1-----
 *                             5|
 *                         -----
 *                       4|
 *                   -----
 *                 3|
 *             -----
 *           2|
 *       -----
 *     1|
 * -----
 */

#include <iostream>
#include <string>

void space(const int n, const char ch) {
	for (int i = 0; i < n; i++)
		std::cout << ch;
}

void space(const int n) {
	space(n, ' ');
}

int main() {
	std::cout << "Enter number of steps: ";
	const int s = 6;
	int n = 0, l = s;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < s - 1; j++)
			std::cout << "_";
		std::cout << "\n";
		space(l - (i > 9 ? 3 : 2));
		std::cout << i << "|\n";
		space(l);
		l += s;
	}
	for (int i = n; i > 0; i--) {
		std::cout << i;
		space(5, '-');
	}
	for (int i = n; i > 0; i--) {
		l -= s;
		std::cout << "\n";
		space(l - (i > 9 ? 3 : 2));
		std::cout << i << "|\n";
		space(l - 6);
		for (int j = 0; j < s - 1; j++)
			std::cout << "-";
	}
	std::cout << std::endl;
	return 0;
}
