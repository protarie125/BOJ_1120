#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	const auto& la = static_cast<int>(a.length());
	const auto& lb = static_cast<int>(b.length());
	const auto& d = lb - la;

	auto minv = int{ 100 };
	for (int i = 0; i <= d; ++i) {
		auto dv = int{ 0 };
		for (int j = 0; j < la; ++j) {
			if (a[j] != b[j + i]) {
				++dv;
			}
		}

		if (dv < minv) {
			minv = dv;
		}
	}

	cout << minv;

	return 0;
}