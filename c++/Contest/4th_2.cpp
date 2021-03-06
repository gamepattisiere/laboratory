


#include <iostream>
#include <algorithm>


const int arrayNum = 1000;
int result = 512;
int array[arrayNum];

int squareArray[arrayNum * arrayNum];



bool binary_search(int x) {
	int l = 0;
	int r = arrayNum * arrayNum;

	while (r - l >= 1) {
		const int i = (l + r)/2;

		if (squareArray[i] == x) {
			// 見つかった
			return true;
		} else {
			r = i;
		}

	}

	return false;
}


void solve() {
	// array[c] + array[d] のとりうる値を列挙
	for (int c = 0; c < arrayNum; ++c) {
		for (int d = 0; d < arrayNum; ++d) {
			squareArray[c * arrayNum + d] = array[c] + array[d];
		}
	}

	std::sort(squareArray, squareArray + arrayNum * arrayNum);

	bool f = false;

	for (int a = 0; a < arrayNum; ++a) {
		for (int b = 0; b < arrayNum; ++b) {
			// 内側の２つのループの変わりに二分探索
			if (binary_search(result - array[a] - array[b])) {
				f = true;
				break;
			}
		}
	}


	if (f) {
		puts("Yes");
	} else {
		puts("No");
	}
}




int main() {
	for (int i = 0; i < arrayNum; ++i) {
		const int random = rand()%result;
		array[i] = random;
	}

	solve();
}

