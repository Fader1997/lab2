#include "lab2.h"
float BMI::setbmi(float height, float mass){
        bmi = mass / ((height / 100) * (height / 100));
	return bmi;		
}

/*float BMI::getbmi(){
            return bmi;
}*/

string BMI::setcategory(float bmi){
	if(bmi < 15){
        	    category = "Very severely underweight";
	}
	else if(bmi >= 15.0 && bmi < 16.0){
        	    category = "Severely underweight";
	}	
	else if(bmi >= 16.0 && bmi < 18.5){
            	    category = "Underweight";
	}
	else if(bmi >= 18.5 && bmi < 25){
        	    category = "Normal";
	}
	else if(bmi >= 25 && bmi < 30){
        	    category = "Overweight";
	}
	else if(bmi >= 30 && bmi < 35){
        	    category = "Obese Class I (Moderately obese)";
	}
	else if(bmi >= 35 && bmi < 40){
        	    category = "Obese Class II (Severely obese)";
	}
	else if(bmi >= 40){
        	    category = "Obese Class III (Very severely obese)";
	}
	return category;
}

/*string BMI::getcategory(){
        return category;
}*/

float BMI::setheight(float h){
        height = h;
	return height;
}

float BMI::setmass(float m){
        mass = m;
	return mass;
}

/*float BMI::getheight(){
        return height;
}

float BMI::getmass(){
        return mass;
}*/

