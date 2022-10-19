#include <iostream>
#include <string>
#include <utility>

typedef std::pair<float, std::string> Result;

Result calculateBMI(float weight, float height);

int main()
{
	float weight, height;

	std::cout << "Enter weight: ";
	std::cin >> weight;

	std::cout << "Enter height: ";
	std::cin >> height;

	Result result = calculateBMI(weight, height);
	std::cout << "Your BMI is " << result.first << endl;
	std::cout << "Result: " << result.second << endl;
}

Result calculateBMI(float weight, float height)
{
	std::string Second = "";

	return make_pair((weight/(height*height)), Second);
}