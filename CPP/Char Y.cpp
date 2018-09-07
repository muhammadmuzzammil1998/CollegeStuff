/* Output:
 *
 * Enter a number: 7
 *        \7            7/
 *         \6          6/
 *          \5        5/
 *           \4      4/
 *            \3    3/
 *             \2  2/
 *              \11/
 *              /7
 *             /6
 *            /5
 *           /4
 *          /3
 *         /2
 *        /1
 */
 
#include <iostream>
#include <string>

std::string space(const int n) {
	std::string s;
	for (auto i = 0; i < n; i++)
		s += " ";
	return s;
}

int main() {
	std::cout << "Enter a number: ";
	int n, down = 0;
	std::cin >> n;
	for (auto i = n; i > 0; i--) {
		if (down) {
			std::cout << space(i + n - 2) << "/" << i << "\n";
			continue;
		}
		std::cout << space(i) << space((n - i) * 2);
		std::cout << "\\" << i << space(i * 2 - 2) << i << "/\n";
		if (i == 1 && !down) {
			i = ++n;
			down = 1;
		}
	}
	std::cout << std::endl;
	return 0;
}
