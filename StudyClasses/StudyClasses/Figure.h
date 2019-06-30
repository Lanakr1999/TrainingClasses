#ifndef FIGURE_H_
#define FIGURE_H_

#include <string>
class Figure
{
public:
	Figure();

	Figure(std::string x);

	Figure(const Figure& other);

	Figure & operator=(const Figure& other);

	std::string name() const;

	void setName(std::string x);

	void print() const;

private:
	std::string m_name = "";

	const float pi = 3.14f;
};

#endif
