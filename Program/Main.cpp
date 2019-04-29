#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

void add2Nom();
void encryptWord();
void calcGlassCost();
void productName_Price();
void largestInt();
void calcTemp();
void sum_N_Noms();
void sum_Avg_IO();
void char_IO();
void balance_Loop();
void doWhile_Mark();
void switch_Grade();
void printStars();
void calc_PH();
void calc_Avg_Sem();
double avg(int num);
void metPowPro();
void getData(double &, double &, double &, double &, double &, double &);
void CalcVOC(double, double, double, double &);
double CalcSTP(double, double, double);
double CalcMP(double, double);
void PrintMetPower(double, double, double, double, double, double, double);
void order_OneDArray();
void getArrayInput(int a[]);
void printAsc(int a[10]);
void printDesc(int a[10]);
void printSum(int a[10]);



const int inchesInSqFt = 144;
const double c1 = 273;
const double c2 = 0.179;

int main()
{
	add2Nom();
	encryptWord();
	calcGlassCost();
	productName_Price();
	largestInt();
	calcTemp();
	sum_N_Noms();
	sum_Avg_IO();
	char_IO();
	balance_Loop();
	doWhile_Mark();
	switch_Grade();
	printStars();
	calc_PH();
	calc_Avg_Sem();
	metPowPro();
	order_OneDArray();
	


	system("pause");
	return 0;
}

void add2Nom() //  adds two numbers
{
	int fst, scnd, thrd;
	cout << "This program adds two integers!\n";
	cout << "Please enter the first number: ";
	cin >> fst;
	cout << "Please enter the second number: ";
	cin >> scnd;
	cout << "The sum of the two numbers is: ";
	thrd = fst + scnd;
	cout << thrd << endl << endl;
}

void encryptWord() // encrypts a word
{
	char letter1, letter2, letter3, letter4, letter5, letter6, letter7, letter8;
	cout << "Please input an eight letter word (no space).";
	cin >> letter1 >> letter2 >> letter3 >> letter4 >> letter5 >> letter6 >> letter7 >> letter8;
	cout << "You wrote: " << letter1 << letter2 << letter3 << letter4 << letter5 << letter6 << letter7 << letter8 << endl;

	cout << "Encryption being done...\n";
	letter1 = letter1 + 10;
	letter2 = letter2 + 5;
	letter3 = letter3 + 18;
	letter4 = letter4 + 5;
	letter5 = letter5 + 13;
	letter6 = letter6 + 9;
	letter7 = letter7 + 1;
	letter8 = letter8 + 8;
	cout << "After your encryption, your word becomes: ";
	cout << letter1 << letter2 << letter3 << letter4 << letter5 << letter6 << letter7 << letter8 << endl << endl;
}

void calcGlassCost()
{
	int  length;		// measured in inches
	int   width;         	// measured in inches
	float  price;            	// sold by square foot
	float  cost;

	cout << fixed;

	cout << "Enter the width, length and price (space separating them).\n";
	cin >> width >> length >> price;

	cout << "Width: " << setw(5) << width
		<< "  Length: " << setw(5) << length
		<< "  Price: " << setw(6) << setprecision(2)
		<< price << endl;
	cost = (float)((float)((width * length) / inchesInSqFt) * price);
	cout << "The cost of the glass is $" << setw(6)
		<< cost << endl;
}

void productName_Price()
{
	string product;
	float price;

	cout << "Product name: ";
	cin >> product;

	cout << "Price: $";
	cin >> setprecision(2) >> price;
	cout << endl;

	cout << setprecision(2) << product << ": $" << price * 0.7 << " (with 30% discount)" << endl << endl; 
}

void largestInt()
{
	int a, b, c;

	cout << "Enter 3 integer numbers (space in between): ";
	cin >> a >> b >> c;
	cout << "Will now output the largest of the numbers\n";
	if (a > b && a > c)
	{
		cout << "The largest number is: " << a << endl;
	}
	else if (b > a && b > c)
	{
		cout << "The largest number is: " << b << endl;
	}
	else {
		cout << "The largest number is: " << c << endl;
	}

	cout << endl;
}

void calcTemp()
{
	char letter;	// Place to store input letter
	int tempIn;		// Temperature to be converted
	int tempOut;	// Converted temperature

	cout << "Input Menu" << endl << endl;
	cout << "F:  Convert from Fahrenheit to Celsius" << endl;
	cout << "C:  Convert from Celsius to Fahrenheit" << endl;
	cout << "Type a C or an F, then press return." << endl << endl;

	cout << "Enter your option: ";
	cin >> letter;
	if (letter != 'C' && letter != 'c' && letter != 'F' && letter != 'f')
	{
		cout << "wrong letter\n";
	}
	else {
		cout << "Type an integer number: ";
		cin >> tempIn;

		if (letter == 'C' || letter == 'c')
			tempOut = (9 * tempIn / 5) + 32;
		else
			tempOut = 5 * (tempIn - 32) / 9;

		cout << endl << endl;
		cout << "Temperature to convert: " << tempIn << endl;
		cout << "Converted temperature:  " << tempOut << endl;
	}

	cout << endl;
}

void sum_N_Noms()
{
	int i = 0, count, sum = 0, num;
	cout << "Input the number of integers that you would like to add: ";
	cin >> count;

	while (i < count)
	{
		cout << "Enter an integer value: ";
		cin >> num;
		sum += num;
		i++;
	}

	cout << "The sum of the " << count << " integers is " << sum << endl << endl;
}

void sum_Avg_IO()
{
	cout << fixed << showpoint;

	float val;
	float sum = 0;
	float average = 0;
	int count = 0;
	ifstream inData;			// declares input stream
	ofstream outData;			// declares output stream

	inData.open("inputfile.txt");
	if (!inData)
	{
		cout << "Input File could not be opened successfully\n";
		system("pause");
		//return 1;
		exit(1);
	}

	outData.open("outputfile.txt");
	if (!outData)
	{
		cout << "Output file could not be opened successfully\n";
		system("pause");
		//return 1;
		exit(1);
	}

	cout << "The initial value for count is " << count << ".  " << endl;
	cout << "Starting to process input file ... " << endl;

	inData >> val;  //read in the first value
	while (inData)   //while previous input succeeded
	{
		sum += val;
		count++;
		inData >> val;
	}

	if (count != 0)
		average = sum / count;
	else
		average = 0;

	// outputs sum, count  and average
	outData << "The sum of the input values is " << sum << "." << endl;
	outData << "The number of valid input values is " << count << "." << endl;
	outData << "The average is " << average << "." << endl;
	cout << "Output has been placed in the file: outputfile.txt" << endl;

	inData.close();
	outData.close();
}

void char_IO()
{
	int lineNo;
	char character;
	int number;
	ifstream inData;

	inData.open("LineData.txt");
	lineNo = 0;
	inData.get(character);

	//while not EOF, go into the loop
	while (!inData.eof())
	{
		lineNo++;
		number = 0;


		//while not "end of line", go into the loop
		while (character != '\n')
		{
			// get() function here to get a character
			inData.get(character);
			// add to the "number" variable which counts characters
			number++;
		}

		cout << "Line " << lineNo << " contains "
			<< number << " characters." << endl;
		inData.get(character); // clear out the \n
	}

	inData.close();
}

void balance_Loop()
{
	int total = 10;
	float cost, balance = 10;

	cout << "You have a 10$ budget to buy music from an online music store\n";
	cout << "Choices: 0.99 || 1.99 || 2.99\n";
	while (balance > 0.0)
	{
		cout << "Enter the cost of the song: ";
		cin >> cost;
		if (balance - cost < 0.0)
		{
			cout << "Too expensive! Choose another one.\n";
		}
		else
		{
			balance -= cost;
			cout << "Your remianing balance is $" << balance << ".\n";
		}

		if (balance < 0.99)
		{
			cout << "Your remaining balance is $" << balance << ". You cannot buy any more music\n";
			break;
		}
	}

	cout << endl;
}

void doWhile_Mark()
{
	int mark;
	char grade;

	cout << "Please enter an integer mark: " << endl;

	// make sure a valid mark between [0, 100] is entered. 
	do {
		cin >> mark;
	} while (mark < 0 || mark > 100);


	if (mark >= 85)
	{
		grade = 'A';
		cout << "Great Mark. " << endl;
	}
	else if (mark >= 75 && mark < 85)
	{
		grade = 'B';
		cout << "Good Mark. " << endl;
	}
	else if (mark >= 65 && mark < 75)
	{
		grade = 'C';
		cout << "Average Mark. " << endl;
	}
	else if (mark >= 50 && mark < 65)
	{
		grade = 'D';
		cout << "You passed the class. " << endl;
	}
	else
	{
		grade = 'F';
		cout << "You failed the class. " << endl;
	}

	cout << "The corresponding character grade is " << grade << endl << endl;
}

void switch_Grade()
{
	char grade;

	//Fill in this for loop so it will repeat six times
	for (int i = 0; i < 6; i++)
	{
		cout << "Please enter a character grade (A, B, C, D, or F): ";
		cin >> grade;

		switch (grade)
		{
		case 'A': cout << "Great work. " << endl;
			break;

		case 'B': cout << "Good work. " << endl;
			break;

		case 'C': cout << "Passing work. " << endl;
			break;
		case 'D':
		case 'F': cout << "Unsatisfictory work. " << endl;
			cout << "See your instructor." << endl;
			break;
		default:
			cout << grade << " is not a legal grade.\n";

		} //end of switch statement

	} //end of for loop
	cout << endl;
}

void printStars()
{
	int stars;

	cout << "How many stars on the first line? ";
	cin >> stars;

	for (int i = 0; i < stars; i++)
	{
		for (int k = 0; k < stars - i; k++)
		{
			cout << '*';
		}
		cout << endl;
	}
	cout << endl;
}

void calc_PH()
{
	double hydCon, hPlus, phLev;
	cout << "This program calculates the ph level\n";
	cout << "Enter 0 to quit the program.\n";
	cout << "Input the concentration of hydroxide: ";
	cin >> hydCon;
	while (hydCon != 0)
	{
		hPlus = (double)(pow(10, -14) / hydCon);
		phLev = (double)(-log10(hPlus));
		cout << "The ph level of solution " << setprecision(9) << (double)hydCon << " is " << setprecision(9) << (double)phLev << '.';
		if (phLev < 7.0)
		{
			cout << " The solution is acidic.\n";
		}
		else
		{
			cout << " The solution is basic.\n";
		}
		cout << "\nInput the concentration of hydroxide: ";
		cin >> hydCon;
	}
	cout << "You entered 0, so quit the program.\n\n";
}

void calc_Avg_Sem()
{
	int classes;
	double average;

inv:
	cout << "Enter how many classes you have (3 to 6 classes): ";
	cin >> classes;
	if (classes < 3 || classes > 6)
	{
		cout << "Invalid\nTry again.\n";
		goto inv;
	}
	else {
		average = avg(classes);
	}

	cout << "Your average of your " << classes << " classes is: " << average << endl << endl;
}

double avg(int num)
{
	double mark, avg = 0;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter Class " << i + 1 << "'s mark: ";
		cin >> mark;
		avg += mark;
	}
	avg /= num;
	return avg;
}

void metPowPro()
{
	double mass; // mass in grams
	double at; // ambient temperature in degree celsius
	double cp; // chamber pressure in mmHG
	double pre; // concentration of ambient air (pre-animal)
	double post; // concentration of ambient air (post-animal)
	double vaf; // the rate in which oxygen is pumped into the chamber in mL/hr
	double voc, stp, mp;

	cout << "This program computes the metabolic power of mammals and reptiles.\n";
	getData(mass, at, cp, pre, post, vaf);
	CalcVOC(vaf, pre, post, voc);
	stp = CalcSTP(voc, cp, at);
	mp = CalcMP(stp, mass);
	PrintMetPower(mass, at, cp, pre, post, vaf, mp);
}

void getData(double & m, double & a, double & c, double & pr, double & po, double & v)
{
	cout << "Input the mass of the animal: ";
	cin >> m;
	cout << "Input the ambient temperature: ";
	cin >> a;
	cout << "Input chamber pressure: ";
	cin >> c;
	cout << "Input concentration of oxygen in ambient air (pre-animal): ";
	cin >> pr;
	cout << "Input concentration of oxygen in ambient air (post-animal): ";
	cin >> po;
	cout << "Input the rate of oxygen: ";
	cin >> v;
	cout << endl;
}

void CalcVOC(double vaf, double pre, double post, double & voc)
{
	voc = (double)(vaf * (double)(pre - post) / (double)(1 - post));
}

double CalcSTP(double voc, double cp, double at)
{
	return (double)(voc * (double)(cp / 760) * (double)(c1 / (double)(c1 + at)));
}

double CalcMP(double stp, double mass)
{
	return (double)(stp / (double)(mass*c2));
}

void PrintMetPower(double m, double a, double c, double pr, double po, double v, double mp)
{
	cout << "The mass of the animal is " << m << " grams.\n";
	cout << "The ambient temperature is " << a << " degrees.\n";
	cout << "The chamber pressure is " << c << " mmHG.\n";
	cout << "The concentration of ambient air (pre-animal) is " << pr << ".\n";
	cout << "The concentration of ambient air (post-animal) is " << po << ".\n";
	cout << "The rate of oxygen is " << v << " mL/hr.\n";
	cout << "\nThe metabolic power for this mammal or reptile is " << mp << ".\n\n";
}

void order_OneDArray()
{
	int array[10];

	cout << "Enter 10 numbers (space in-between): ";
	getArrayInput(array);
	printAsc(array);
	printDesc(array);
	printSum(array);
}

void getArrayInput(int a[10])
{
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
}

void printAsc(int a[10])
{
	int temp;

	cout << "Your array in ascending order: ";

	for (int i = 0; i < 10; i++)
	{
		for (int k = i; k < 10; k++)
		{
			if (a[i] > a[k])
			{
				temp = a[k];
				a[k] = a[i];
				a[i] = temp;
			}
		}
		cout << a[i] << ' ';
	}
	cout << endl;
}

void printDesc(int a[10])
{
	int temp;

	cout << "Your array in descending order: ";

	for (int i = 0; i < 10; i++)
	{
		for (int k = i; k < 10; k++)
		{
			if (a[i] < a[k])
			{
				temp = a[k];
				a[k] = a[i];
				a[i] = temp;
			}
		}
		cout << a[i] << ' ';
	}
	cout << endl;
}

void printSum(int a[10])
{
	int sum = 0;

	cout << "Your array total is: ";

	for (int i = 0; i < 10; i++)
	{
		sum += a[i];
	}
	cout << sum << endl << endl;
}