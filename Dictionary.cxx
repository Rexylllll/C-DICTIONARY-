#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	
	cout <<"Enter your Word:";
	cin >>a;
	
	if (a== "AREA"){
		cout<<"The extent measurement of a surface or piece of land";
	}else if (a== "ACCELERATION"){ 
		cout<<"The rate at which velocity oa a body changes with time";
	}else if(a== "BATTERY"){
		cout<<"Electrochemical cells fhat transform chemical energy into electricity";
	}else if(a== "BODY FORCE"){
		cout<< "Force that acts trhoughout the volume of a body";
	}else if(a=="COMPUTER"){
		cout<< "Electronic device that can receive, store, process and output data";
	}else if(a=="CALCULUS"){
		cout<< "Branch of mathematics that deals with rates of change";
	}else if(a=="DIGITAL COMPUTERS"){
		cout<< "Capable pf processinf information in discrete form";
	}else if(a=="DERIVATIVE"){
		cout<< "The rate of change of a function with respect to a variable";
	}else if(a=="EMBEDDED SYSTEM"){
		cout<<"Specialized computers that are built into other devices";
	}else if(a=="FORCE"){
		cout<< "External agent capable of changing a bod's of rest or motion";
	}else if(a=="GRAVITY"){
		cout<< "Universal force of attraction betweem all bodies of matter";
	}else if(a=="Hypothesis"){
		cout<< "Proposed explaination made on the basis of limited evidence";
	}else if(a=="INTEGRAL"){
		cout<< "A function satisfying a given differential equation";
	}else if(a=="JOULE"){
		cout<< "SI unit of energy";
	}else if(a=="KELVIN"){
		cout<< "Absolute thermodynamic temperature scale using its null point absolute zero";
	}else if(a=="LOGARITHM"){ "The inverse function to exponentation";
	}else if(a=="MAINFRAME"){
		cout<<"Large and powerful computers";
	}else if(a=="NANOMATERIALS"){
		cout<< "Materials with structure on the nanomaterial scale";
	}else if(a=="OPTIMIZATION"){
		cout<< "Making something as good as possible";
	}else if(a=="POWER"){
		cout<<"The rate at which work is done or energy is transferred, often measured in watts or housepower";
	}else if(a=="QUADRANT"){
		cout<< "A quarter of a circle, and defined by two axis of coordinate system";
	}else if(a=="Resistance"){
		cout<<"The opposition to ghe flow of electruc current, measured in ohms";
	}else if(a=="SCALAR"){
		cout<<"A quantity that has magnitude not direction";
	}else if(a=="TABULATING MACHINE"){
		cout<< "Mechanical tabulator was was based on punch cards";
	}else if (a=="ULTRASONIC"){
		cout<< "Sound waves with frequency above";
	}else if(a=="VECTOR"){
		cout<< "A quantity that has magnitude and direction";
	}else if(a=="WAVELENGHT"){
		cout<<"Distance between successive crest of a wave";
	}else if(a=="X-AXIS"){
		cout<<"Horizontal position, it runs left and right";
	}else if("Y-AXIS"){ 
		cout<<"Vertical position, it runa ups and down";
	}else if("Z-test"){
		cout<<"Statistical test used to determine whether two population means are different";
	}else{
		cout<<"No word is found";
	}
	
	return 0;
}