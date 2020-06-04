#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
#include<array>
#include<vector>
#include<iterator>
#include<numeric>
#include<list>
#include<cstdint>
using namespace std;

class RGBA {
public:
	using u = uint_fast8_t;

private:
	u m_red{};
	u m_green{};
	u m_blue{};
	u m_alpha{};

public:
	RGBA(u red = 0, u green = 0, u blue = 0, u alpha = 255)
		: m_red{ red }, m_green{ green }, m_blue{ blue }, m_alpha{ alpha }{};

	void print() {
		cout << "r=" << static_cast<int>(m_red) << " ";
		cout << "g=" << static_cast<int>(m_green) << " ";
		cout << "b=" << static_cast<int>(m_blue) << " ";
		cout << "a=" << static_cast<int>(m_alpha) << " ";
	}
};

int main() {

	RGBA color{ 0,127,127,255 };
	color.print();

	return 0;
}








