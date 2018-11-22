#include "MNISTReader.h"
#include <chrono>

int main() {
	MNISTReader reader;
	std::vector<std::vector<int>> images;
	std::vector<int> labels;

	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	reader.loadImages("images.idx3-ubyte",images);
	reader.loadLabels("labels.idx1-ubyte", labels);

	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	float time = std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() / 1000.f;
	std::cout << time << " miliseconds" << std::endl;
	system("pause");
}