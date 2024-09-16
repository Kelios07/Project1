#include <iostream> 
#include <string>
using namespace std;

class Thing
{
private:
	string m_color = "blue";
	double m_radius = 20.0;

public:
	Thing()
	{
	}

	Thing(const string& color) :
		m_color(color)
	{
	}
	Thing(double radius) :
		m_radius(radius)
	{
	}
	Thing(const string& color, double radius) :
		m_color(color), m_radius(radius)
	{
	}
		void print()
	{
		cout << "color: " << m_color << " and radius: " << m_radius << '\n';
	}
};

int main()
{
	Thing defl;
	defl.print();

	Thing red("red");
	red.print();

	Thing thirty(30.0);
	thirty.print();

	Thing redThirty("red", 30.0);
	redThirty.print();

	return 0;
}