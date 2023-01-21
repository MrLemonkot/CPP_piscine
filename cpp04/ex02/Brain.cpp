#include "Brain.hpp"

Brain::Brain() {
	cout << "Brain: Wow, I am alive!" << endl;
}

Brain::Brain(const Brain &origin) {
	*this = origin;
	cout << "Brain: transferring ideas..." << endl;
}

Brain& Brain::operator=(const Brain& origin) {
	if (this != &origin)
		for (unsigned int i = 0; i < sizeof(ideas) /sizeof(*ideas); ++i)
			this->ideas[i] = origin.ideas[i];
	return *this;
}

Brain::~Brain() {
	cout << "Brain: bzzzz..." << endl;
}

const string &Brain::getIdea(unsigned int index) const {
	if (index < sizeof(ideas) / sizeof(*ideas))
		return ideas[index];
	else
		return ideas[0];
}

void Brain::setIdea(unsigned int index, const string &idea) {
	if (index < sizeof(ideas) / sizeof(*ideas))
		ideas[index] = idea;
}