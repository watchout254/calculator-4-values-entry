#include <iostream>
#include <math.h>

using namespace std;
int main() {
	//Calculator app mazeeee, lets try this , trial and error broo!!!!
	//napiga pracoo ingine imeenda chuo wazing
	
	double dig1,dig2,dig3, dig4;
	char sign;
	
	cout<<"\n\tWelcome to our newest calculator app bro, only calculates four values:";
	cout<<"\n\tHINT: You first enter an operator, then followed by the digits......";
	cout<<"\n\tKindly enter the operator/sign(/,*,-,+): ";
	cin>>sign;
	
	cout<<"Enter digit one: ";
	cin>>dig1;
	
	cout<<"Enter digit two: ";
	cin>>dig2;
	
	cout<<"Enter digit three: ";
	cin>>dig3;
	
	cout<<"Enter digit four: ";
	cin>>dig4;
	
	switch(sign) {
		case '/':
			cout<<dig1 <<"/" << dig2 << "/" <<dig3 <<"/" <<dig4 <<"=" << dig1 / dig2 / dig3 / dig4;
			break;
			
		case '*':
			cout<<dig1 <<"*" <<dig2 <<"*" <<dig3 <<"*" <<dig4 <<"=" << dig1 * dig2 * dig3 * dig4;
			break;
			
		case '-':
			cout<<dig1 <<"-" <<dig2 <<"-" <<dig3 <<"-" <<dig4 <<"=" << dig1 * dig2 * dig3 * dig4;
			break;
			
		case '+':
			cout<<dig1 <<"+" <<dig2 <<"+"  <<dig3 <<"+" <<dig4 <<"=" <<dig1 + dig2 + dig3 + dig4;
			break;
			
		default:
			cout<<"Operator not found, try the four hinted there";
			break;
	}
	
	return 0;
}
