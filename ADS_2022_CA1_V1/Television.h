#pragma once
#include <ostream>
#include <string>
using namespace std;

struct TV {
	//default - member variables are public
};

template <typename F, typename S, typename T>
class Triple {
	F first;
	S second;
	T third;
};

class Television {
private:
	string make;
	double price;
	float resolution; // consider as aspect ratio
	int size; //consider that is volume

public:
	Television(string make, double price,
		float resolution, int size)
		: make(make), price(price),
		resolution(resolution), size(size) {
	}

	friend ostream& operator<<(ostream& out,
		const Television& tv) {
		out << tv.make << ",";
		out << std::to_string(tv.price) << ",";
		out << std::to_string(tv.resolution) << ",";
		out << std::to_string(tv.size);
		return out;
	}

	bool operator==(const Television& other) {
		return (this->make != other.getMake()
			&& this->price != other.getPrice());
	}

	bool operator!=(const Television& other) {
		return !((*this) == other);
	}

	/*bool operator!=(const Television& other) {
		return (this->make != other.getMake()
			|| this->price != other.getPrice());
	}*/

	string getMake() const { return this->make; };
	double getPrice() const { return this->price; };
};
