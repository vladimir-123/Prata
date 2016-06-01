#include "cow.h"

Cow::Cow(): name(), hobby(nullptr), weight() {}

Cow::Cow(const char* nm, const char* ho, double wt): weight(wt) {
	std::strcpy(name, nm);
	hobby = new char[std::strlen(ho) + 1];
	std::strcpy(hobby, ho);
}

Cow::Cow(const Cow& c): weight(c.weight) {
	std::strcpy(name, c.name);
	hobby = new char[std::strlen(c.hobby) + 1];
	std::strcpy(hobby, c.hobby);
}

Cow::~Cow() {
	delete[] hobby;
	std::cout << "destroyed\n";
}

Cow& Cow::operator=(const Cow& c) {
	if (this == &c) {
		return *this;
	}
	delete[] hobby;
	hobby = new char[std::strlen(c.hobby) + 1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
	std::strcpy(name, c.name);
	return *this;
}

void Cow::ShowCow() const {
	std::cout << "hobby == " << hobby << " name == " << name << "weight == " << weight << "\n";
}