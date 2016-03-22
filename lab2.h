#include <iostream>
#include <string>

using namespace std;

class BMI {
    public:
        float setbmi(float height, float mass);
        string setcategory(float bmi);
	float setheight(float h);
	float setmass(float m);
    private:
        string category;
        float mass;
        float height;
        float bmi;
};
