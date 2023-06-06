//COMP_209 Project- Student Name: Zahra al elou , Fatima Al marar , Anwar Almomen , Atheer Alnassir

#include <iostream>
#include <cmath>
using namespace std;

void equation_menu()
{
	cout << " \n PLEASE CHOOSE  NUMBER  FROM THE MENU " << endl;
	cout << " 1. to applying kinetic energy equation" << endl;
	cout << " 2. to applying Newton's secound law " << endl;
	cout << " 3. to applying  ideal gas law " << endl;
	cout << " 4. to applying momentum law " << endl;
	cout << " 5. End the program " << endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;

}
//Kinetic energy funtion

void Kinetic_Energy_Equation()
{
	double Velocity, Mass, KE;
	cout << "\t.....calculate the kinetic energy ..... \n";
	cout << " Enter value for velocity :";
	cin >> Velocity;
	cout << "Enter valur for mass :";
	cin >> Mass;
	KE = (0.5) * (Mass) * (pow(Velocity, 2));
	cout << "The  result for kinetic energy equation =" << KE<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;

}

//Newton's second law funtion
void calculate_Force()
{
	double accelration, Mass, Force;
	cout << " \t.....calculate the Force..... \n";

	cout << "enter value of acceleration: ";
	cin >> accelration;
	cout << "enter value for Mass: ";
	cin >> Mass;
	Force = Mass * accelration;
	cout << "Value of Force =" << Force<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;

}

void calculate_Accelration()
{
	double accelration, Mass, Force;
	cout << " \t.....calculate the accelration ..... \n";

	cout << "enter value for force :";
	cin >> Force;
	cout << "enter value for mass :";
	cin >> Mass;
	accelration = Force / Mass;
	cout << "The value of accelration =" << accelration<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;

}

void calculate_Mass()
{
	double accelration, Mass, Force;

	cout << " \t.....calculate the mass ..... \n";

	cout << "enter  value for force :";
	cin >> Force;
	cout << "enter value accelration :";
	cin >> accelration;
	Mass = Force / accelration;
	cout << "The value of Mass=" << Mass<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;

}
void Newton_Second_Law()
{
		int unkown_value;
	do{
	cout << "\t.....Newton's Second Law ..... \n";
	cout << "Enter number of the value you want to calucated :" << endl;
	cout << "1.calculate force " << endl;
	cout << "2.calculate accelration " << endl;
	cout << "3.calculate mass " << endl;
	cout<<  "4.Choose another equation from the menu"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;

	cin >> unkown_value;
	if (unkown_value == 1) {
		calculate_Force();
	}
	else if (unkown_value == 2) {
		calculate_Accelration();
	}
	else if (unkown_value == 3) {
		calculate_Mass();
	}
	else if (unkown_value==4)
	break;
	
    else; {
     	cout<<"\t---------Choose again---------"<<endl;	
     		
     	}
 }
     	while (unkown_value!=4);
}

//Ideal gas function 
void calculate_Pressure()
{
	const double R = 0.0831;
	double volume, number_mole, temp, pressure;
	cout << " \t.....calculate the pressure ..... \n";
	cout << "Enter the volume: ";
	cin >> volume;
	cout << "Enter number of mole:";
	cin >> number_mole;
	cout << "Enter value for temperture:";
	cin >> temp;
	pressure = (number_mole * R * temp) / volume;
	cout << "the value of pressure =" <<pressure;
}

void calculate_Volume()
{
	const double R = 0.0831;
	double volume, number_mole, temp, pressure;
	cout << " \t.....calculate the volume ..... \n";

	cout << "Enter number of mole:";
	cin >> number_mole;
	cout << "Enter the valur of temperture: ";
	cin >> temp;
	cout << "Enter the pressure:";
	cin >> pressure;
	volume = (number_mole * R * temp) / pressure;
	cout << "The value of volume = " << volume;
}

void calculate_Temprature()
{
	const double R = 0.0831;
	double volume, number_mole, temp, pressure;
	cout << " \t.....calculate the temperture ..... \n";

	cout << "Enter the pressure:";
	cin >> pressure;
	cout << "Enter the value of volume: ";
	cin >> volume;
	cout << "Enter number of mole:";
	cin >> number_mole;
	temp = (pressure * volume) / (number_mole * R);
	cout << "The value of temperture = " << temp;
}

void calculate_Num_Mole()
{
	const double R = 0.0831;
	double volume, number_mole, temp, pressure;
	cout << " \t.....calculate the number of mole ..... \n ";
	cout << "Enter the pressure :";
	cin >> pressure;
	cout << "Enter the volume:";
	cin >> volume;
	cout << "Enter the value of temperture: ";
	cin >> temp;
	number_mole = (pressure * volume) / (R * temp);
	cout << "The number of mole = " << number_mole;
}
void calculate_Ideal_Gas()
{
	
	int unkown_value;
	cout << " \t.....Ideal Gas Equation .....\n ";
	do{

	cout<<"please enter the number of the unknown value : \n ";
	cout <<"1.calculate  the pressure " << endl;
	cout <<"2.calculate the volume " << endl;
	cout <<"3.calculate temperture" << endl;
	cout <<"4.calculate number of mole" << endl;
	cout <<"5.Choose another equation from the menu"<<endl;
	cin >> unkown_value;

	//calculate Pressure
	if (unkown_value == 1) {
		calculate_Pressure();
	}
	//calculate volume
	else if (unkown_value == 2) {
		calculate_Volume();
	}
	//calculate Temp
	else if (unkown_value == 3) {
		calculate_Temprature();
	}
	//calculate number of moles
	else if(unkown_value==4){
		calculate_Num_Mole();
	}
	else if (unkown_value==5)
	break;
	
    else; {
     	cout<<"\t---------Choose again---------"<<endl;	
     	}
 }
  	while (unkown_value!=5);
}

void calculate_Momentum()
{
	double Mass, Velocity, momentum;
	cout << " \t.....calculate the momentum ..... \n ";
	cout << "Enter the value of mass ";
	cin >> Mass;
	cout << "Enter value of velocity ";
	cin >> Velocity;
	momentum = Mass * Velocity;
	cout << "The value of momentum = " << momentum;
}
//--------------------- main part --------------------- 

int main(int argc, char** argv) {

int euation_number;
    cout<<"\n \t\t\t\t Welcom \n \n ";
    cout<<"-------------------------------------------------------------------------------"<<endl;
	do{
	equation_menu();
	cout << "the number is :";
	cin >> euation_number;
	//KE 
	if (euation_number == 1) {
		Kinetic_Energy_Equation();
	}
	//Newton 2nd law
	else if (euation_number == 2) {
		Newton_Second_Law();
	}
	
	// ideal gas equation
	else if (euation_number == 3) {
		calculate_Ideal_Gas();
	}
	
	//momentume
	else if(euation_number==4) {
		calculate_Momentum();
	}

	else if (euation_number==5)
	cout<<"End The program";
	
	else;
	cout<<"Choose number from the menu\n "<<endl<<".....................";
}
while(euation_number!=5);
   
	return 0;
}
