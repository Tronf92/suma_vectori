#include <iostream>
using namespace std;

struct vector{
	double x,y,z;
}v1,v2,v;

vector suma(vector, vector);
vector citire();

void main(){
	v1=citire();
	v2=citire();
	suma(v1,v2);

	system("pause");
}

vector citire(){
	cout << "Introduceti un vector" << endl;
	cout << "X:";
	cin >> v.x;
	cout << "Y:";
	cin >> v.y;
	cout << "Z:";
	cin >>v.z;

	return v;
}

vector suma(vector,vector){
	cout << "Suma celor doi vectori este:" << endl;
	v.x=v1.x+v2.x;
	v.y=v1.y+v2.y;
	v.z=v1.z+v2.z;
	cout << "( " << v.x << "," << v.y << ", " << v.z << ")" << endl;
	return v;
}
