#include <iostream>
#include <vector>

using namespace std;

struct Date{
	int year;
	int month;
	int day;
};

int main(){

	// excercise 1

	Date d1{};
	d1.year = 2020;
	d1.month = 5;
	d1.day = 6;

	Date d2{};
	d2.year = 2010;
	d2.month = 5;
	d2.day = 6;

	Date d3{};
	d3.year = 2022;
	d3.month = 5;
	d3.day = 10;

	vector<Date> myVec{d1, d2, d3};

	for( auto v: myVec ){
		string postfx;		// cannot be declared inside switch-case
		switch(v.day){
			case 1:
			case 21:
			case 31: postfx = "st";
				 break;
			case 2:
			case 22: postfx = "nd";
				 break;
			case 3:
			case 23: postfx = "rd";
				 break;
			default: postfx = "th";
				 break;
		}
	

		int year = v.year;
		int day = v.day;

		switch(v.month){
                        case 1: cout << day << postfx << " January " << year << endl;
                                break;
                        case 2: cout << day << postfx << " February " << year << endl;
                                break;
                        case 3: cout << day << postfx << " March " << year << endl;
                                break;
                        case 4: cout << day << postfx << " April " << year << endl;
                                break;
                        case 5: cout << day << postfx << " May " << year << endl;
                                break;
                        case 6: cout << day << postfx << " June " << year << endl;
                                break;
                        case 7: cout << day << postfx << " July " << year << endl;
                                break;
                        case 8: cout << day << postfx << " August " << year << endl;
                                break;
                        case 9: cout << day << postfx << " September " << year << endl;
                                break;
                        case 10: cout << day << postfx << " October " << year << endl;
                                break;
                        case 11: cout << day << postfx << " November " << year << endl;
                                break;
                        case 12: cout << day << postfx << " December " << year << endl;
                                break;
                        default: cout << "Sorry...invalid month" << endl;
                                break;
                }

	}

	
 
	// using conditionals 
		
	if( (d1.year > d2.year) && (d1.year > d3.year)){
		cout << "Earliest: " << d1.day << "-" << d1.month << "-" << d1.year << endl;
	}
	else if( (d2.year > d1.year) && (d2.year > d3.year)){	
		cout << "Earliest: " << d2.day << "-" << d2.month << "-" << d2.year << endl;
	}
	else if( (d3.year > d1.year) && (d3.year > d2.year) ){
		cout << "Earliest: " << d3.day << "-" << d3.month << "-" << d3.year << endl;
	}
	else{
		
		if( (d1.month > d2.month) && (d1.month > d3.month)){
			cout << "Earliest: " << d1.day << "-" << d1.month << "-" << d1.year << endl;
		}
		
		else if( (d2.month > d1.month) && (d2.month > d3.month)){
			cout << "Earliest: " << d2.day << "-" << d2.month << "-" << d2.year << endl;
		}
		
		else if( (d3.month > d1.month) && (d3.month > d2.month)){
			cout << "Earliest: " << d3.day << "-" << d3.month << "-" << d3.year << endl;
		}
		else {
			
			if( (d1.day > d2.day) && (d1.day > d3.day)){
				cout << "Earliest: " << d1.day << "-" << d1.month << "-" << d1.year << endl;
			}

			else if( (d2.day > d1.day) && (d2.day > d3.day)){
				cout << "Earliest: " << d2.day << "-" << d2.month << "-" << d2.year << endl;
			}

			else if( (d3.day > d1.day) && (d3.day > d2.day)){
				cout << "Earliest: " <<  d3.day << "-" << d3.month << "-" << d3.year << endl;
			}
			else {
				cout << "Same Dates: " ;
				cout << d1.day << "-" << d1.month << "-" << d1.year << " = ";
				cout << d2.day << "-" << d2.month << "-" << d2.year << " = ";
				cout << d3.day << "-" << d3.month << "-" << d3.year << endl;
			}
		}
	}

	

	// using loop
	Date earliest = myVec[0];

	for( int i = 0; i < 3; ++i){
		if(earliest.year > myVec[i].year){
     	        	earliest = myVec[i];
	        }


	}

}
