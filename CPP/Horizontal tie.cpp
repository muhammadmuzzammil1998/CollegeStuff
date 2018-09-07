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

void space(const int n) {
	for (auto i = 0; i < n; i++)
		std::cout << " ";
}

void space(const int n, const char ch) {
	for (auto i = 0; i < n; i++)
		std::cout << ch;
}

int main() {
	std::cout << "Enter number of steps: ";
	const auto s = 6;
	auto n = 0, l = s;
	std::cin >> n;
	for (auto i = 1; i <= n; i++) {
		for (auto j = 0; j < s - 1; j++)
			std::cout << "_";
		std::cout << "\n";
		space(l - (i > 9 ? 3 : 2));
		std::cout << i << "|\n";
		space(l);
		l += s;
	}
	for (auto i = n; i > 0; i--) {
		std::cout << i;
		space(5, '-');
	}
	for (auto i = n; i > 0; i--) {
		l -= s;
		std::cout << "\n";
		space(l - (i > 9 ? 3 : 2));
		std::cout << i << "|\n";
		space(l - 6);
		for (auto j = 0; j < s - 1; j++)
			std::cout << "-";
	}
	std::cout << std::endl;
	while (1);
}
