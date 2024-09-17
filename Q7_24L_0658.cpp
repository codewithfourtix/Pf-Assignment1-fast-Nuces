#include <iostream>
using namespace std;

int main(){
	float A , B , C  ,Left_Side , Right_Side;
	cout << "Enter the 3 Numbers : ";
	cin >> A >> B >> C;
	if (A>B && A>C){
		Left_Side = A * A;
		Right_Side = B*B + C*C;
		if(Left_Side == Right_Side){
			cout << "It Holds the Pathagoras Theorm \nThe First Number that you have entered is the HYPOTANOUS !!";
		}else {
			cout << "Its Doesn't Hold the Property";
			return 0;
		}
	}else if(B>C && B>A){
		Left_Side = B * B;
		Right_Side = C*C + A*A;
		if(Left_Side == Right_Side){
			cout << "It Holds the Pathagoras Theorm \nThe Second Number that you have entered is the HYPOTANOUS !!";
		}else {
			cout << "Its Doesn't Hold the Property";
			return 0;
		}
	}else if(C>A && C>B){
		Left_Side = C * C;
		Right_Side = B*B + A*A;
		if(Left_Side == Right_Side){
			cout << "It Holds the Pathagoras Theorm \nThe Third Number that you have entered is the HYPOTANOUS !!";
		}else {
			cout << "Its Doesn't Hold the Property";
			return 0;
		}
	}else{
		
	}
	return 0;
}
