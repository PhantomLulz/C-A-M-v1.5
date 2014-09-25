// C-A-M.cpp : Defines the entry point for the console application.

#include "stdafx.h" // used for compilation  in Visual C++ 2013... (Only if you;re using VS, otherwise delete this header.
#include <iostream>
#include <string>
#include <cmath>
#include <cfloat> 
#include "windows.h"

#define PI 3.14159265

/*light years to astronomical units or reverse*/

//5,878,499,810,000 miles = 1 light year

//d = Days, the first J = Jovian units

long double dToJoJ(long double); //Jupiter
long double dToJoN(long double); //Neptune
long double dToJoS(long double); //Saturn
long double dToJoU(long double); //Uranus
long double eToPD(long double, int); //Venus, Mars, and Mercury

long double ParsecData(long double, int); //Main Parsec conversions

int _tmain(int argc, _TCHAR* argv[])
{
	system("mode con: cols=110 lines=60"); //Display
	system("color 0F");
	Beep(600, 200);


	/****************************************************************************************************************************************************


	 _____________________________________________________________________________________________________________________________________________________

	 "Astronomical units to light years.    (A)"

	 "Light years to an astronomical units. (L)"

	 "Earth Days to Jovian time/days.       (D)"

	 "Parsecs conversions.                  (P)"

	 "Temperature conversions.              (T)"

	 "LY to Miles or Miles to LY.           (M)"

	 "Planet rotations around the sun.      (R)"

	 "Trigonometric Functions.              (TF)"

	 "Exponential Function.                 (E)"

	 "Power Functions.                      (PF)"
	 ____________________________________________________________________________________________________________________________________________________



	 ***************************************************************************************************************************************************/

	using std::cout;

	cout << "C-A-M v1.5...";

	system("title C-A-M");
	system("cls");

	int main(void);
	{
		using std::cout;
		using std::cin;
		using std::endl;
		using std::string;
		using std::ios_base;

		cout.setf(ios_base::fixed, ios_base::floatfield); //show last six points after decimal

		double long lightYears;
		double long astroUnits;
		unsigned int Days;

		string lightX = "";

		cout << "C-A-M v1.5" << endl << endl;

		//Enter Space operation

		cout << "____________________________________________"
			<< endl << endl
			<< "Earth Days to Jovian Time/Days.       (D)"
			<< endl << "____________________________________________"
			<< endl << endl
			<< "Parsecs Conversions.                  (P)"
			<< endl
			<< "____________________________________________"
			<< endl << endl
			<< "Temperature Conversions.              (T)"
			<< endl << "____________________________________________"
			<< endl << endl
			<< "Unit Conversions.                     (C)"
			<< endl << "____________________________________________"
			<< endl << endl
			<< "Planet Rotations Around The Sun.      (R)"
			<< endl << "____________________________________________"
			<< endl << endl
			<< "Trigonometric Functions.              (TF)"
			<< endl << "____________________________________________"
			<< endl << endl
			<< "Exponential Function.                 (E)"
			<< endl << "____________________________________________"
			<< endl << endl
			<< "Power Functions.                      (PF)"
			<< endl << "____________________________________________"
			<< endl << endl << endl;

	restartSC:

		string AL = "";

		cout << "Enter Input: ";
		cin >> AL;

		system("cls");

		//Jovian units to days and days to units.

		if (AL == "D")
		{
			string EorY = "";

			cout << "____________________________________________" << endl << endl
				<< "Using Earth Years (Y)" << endl
				<< "____________________________________________" << endl << endl
				<< "Using Earth Days  (D)" << endl
				<< "____________________________________________" << endl << endl
				<< "Enter Input: ";

			cin >> EorY;
			system("cls");
			cout << endl << endl;

			if (EorY == "D")
			{
				cout << "Jupiter" << endl << "Saturn" << endl << "Uranus" << endl << "and Neptune in Jovian units." << endl << endl
					<< "(Including earth days to jovian units.)" << endl << endl << endl << endl;

				cout << "!Warning! long values may not be accurate and may cause the program to break." << endl << endl
					<< "Enter input in Earth Days: ";

				cin >> Days;
				Days = Days * 24;

				long long Days2 = Days / 24;

				long double JovianJ;
				long double JovianN;
				long double JovianS;
				long double JovianU;

				long double JovianUU = dToJoU(Days); //Days Jovian Uranus
				long double DaysU;

				if (JovianUU > 0)
				{
					DaysU = JovianUU / 9.92496;
				}

				long double JovianUJ = dToJoJ(Days); //Days Jovian Jupiter
				long double DaysJ;

				if (JovianUJ > 0)
				{
					DaysJ = JovianUJ / 2.418136;
				}

				long double JovianUN = dToJoN(Days); //Days Jovian Neptune
				long double DaysN;

				if (JovianUN > 0)
				{
					DaysN = JovianUN / 1.489757;
				}

				long double JovianUS = dToJoS(Days); //Days Jovian Saturn
				long double DaysS;

				if (JovianUS > 0)
				{
					DaysS = JovianUS / 2.252252;
				}

				JovianU = dToJoU(Days);

				JovianS = dToJoS(Days);

				JovianN = dToJoN(Days);

				JovianJ = dToJoJ(Days);

				cout << endl << endl;
				cout << "______________________________________________________________" << endl << endl;
				cout << Days2 << " Earth days is equal to:" << endl
					<< "_______________________________________________________________"
					<< endl << endl << JovianJ << " Jupiter jovian units."
					<< endl << endl << JovianU << " Uranus jovian units."
					<< endl << endl << JovianN << " Neptune jovian units."
					<< endl << endl << JovianS << " Saturn jovian units." << endl
					<< "_______________________________________________________________" << endl << endl;

				cout << "Full rotations compared to earths 24 hours 1 day." << endl << endl
					<< "_______________________________________________________________" << endl << endl
					<< DaysJ << " Jupiter Jovian days compared to earth's days." << endl << endl
					<< DaysU << " Uranus Jovian days compared to earth's days." << endl << endl
					<< DaysN << " Neptune Jovian days compared to earth's days." << endl << endl
					<< DaysS << " Saturn Jovian days compared to earth's days." << endl
					<< "_______________________________________________________________" << endl << endl << endl;

				int key1 = 1;
				int key2 = 2;
				int key3 = 3;

				long double DaysMe;
				long double DaysV;
				long double DaysMa;

				DaysMe = eToPD(Days, key1);
				DaysV = eToPD(Days, key2);
				DaysMa = eToPD(Days, key3);

				cout << "______________________________________________________________" << endl << endl;
				cout << DaysMe << " Days on Mercury." << endl << endl
					<< DaysV << " Days on Venus." << endl << endl
					<< DaysMa << " Days on Mars." << endl
					<< "_______________________________________________________________" << endl << endl;

				goto end;
			}

			if (EorY == "Y")
			{
				long double Days2;

				cout << "Jupiter" << endl << "Saturn" << endl << "Uranus" << endl << "and Neptune in Jovian units." << endl << endl
					<< "(Including earth days to jovian units.)" << endl << endl << endl << endl;

				cout << "!Warning! long values may not be accurate and may cause the program to break." << endl << endl;
				cout << "Enter input in Earth Years: ";
				cin >> Days2;

				Days2 = Days2 * 8765.76;

				long double Days3 = (Days2 / 24) / 365.24;

				long double JovianJ;
				long double JovianN;
				long double JovianS;
				long double JovianU;

				long double JovianUU = dToJoU(Days2); //Days Jovian Uranus
				long double DaysU;

				if (JovianUU > 0)
				{
					DaysU = JovianUU / 9.92496;
				}

				long double JovianUJ = dToJoJ(Days2); //Days Jovian Jupiter
				long double DaysJ;

				if (JovianUJ > 0)
				{
					DaysJ = JovianUJ / 2.418136;
				}

				long double JovianUN = dToJoN(Days2); //Days Jovian Neptune
				long double DaysN;

				if (JovianUN > 0)
				{
					DaysN = JovianUN / 1.489757;
				}

				long double JovianUS = dToJoS(Days2); //Days Jovian Saturn
				long double DaysS;

				if (JovianUS > 0)
				{
					DaysS = JovianUS / 2.252252;
				}

				JovianU = dToJoU(Days2);

				JovianS = dToJoS(Days2);

				JovianN = dToJoN(Days2);

				JovianJ = dToJoJ(Days2);

				cout << endl << endl;
				cout << "______________________________________________________________" << endl << endl;
				cout << Days3 << " Earth years is equal to:" << endl
					<< "_______________________________________________________________"
					<< endl << endl << JovianJ << " Jupiter jovian units."
					<< endl << endl << JovianU << " Uranus jovian units."
					<< endl << endl << JovianN << " Neptune jovian units."
					<< endl << endl << JovianS << " Saturn jovian units." << endl
					<< "_______________________________________________________________" << endl << endl;

				cout << "Full rotations compared to earths 365 days per year." << endl << endl
					<< "_______________________________________________________________" << endl << endl
					<< DaysJ << " Jupiter Jovian days compared to earth's days." << endl << endl
					<< DaysU << " Uranus Jovian days compared to earth's days." << endl << endl
					<< DaysN << " Neptune Jovian days compared to earth's days." << endl << endl
					<< DaysS << " Saturn Jovian days compared to earth's days." << endl
					<< "_______________________________________________________________" << endl << endl << endl;

				int key1 = 1;
				int key2 = 2;
				int key3 = 3;

				long double DaysMe;
				long double DaysV;
				long double DaysMa;

				DaysMe = eToPD(Days2, key1);
				DaysV = eToPD(Days2, key2);
				DaysMa = eToPD(Days2, key3);

				cout << "______________________________________________________________" << endl << endl;
				cout << DaysMe << " Days on Mercury." << endl << endl
					<< DaysV << " Days on Venus." << endl << endl
					<< DaysMa << " Days on Mars." << endl
					<< "_______________________________________________________________" << endl << endl;

				goto end;
			}
		}

		//Parasec Conversions
		//keys are = to the function to persuit in ParsecData()

		long double input;
		long double parData;
		long double lightyears;
		long double kiloPar;
		long double astronomicalUnits;
		long double megaPar;

		int key1;
		int key2;
		int key3;
		int key4;

		//Parsecs start

		if (AL == "P")
		{
			long double league;

			string parsecdata = "";
			cout << "Enter in which unit of parsecs you want to continue." << endl
				<< "_______________________________________________________________" << endl << endl
				<< "MegaParsecs    (MPC)" << endl
				<< "_______________________________________________________________" << endl << endl
				<< "Parsecs        (PC)" << endl
				<< "_______________________________________________________________" << endl << endl
				<< "Or KiloParsecs (KPC)" << endl
				<< "_______________________________________________________________" << endl << endl;

			cout << "Enter Input: ";
			cin >> parsecdata;
			cin.get();
			system("cls");

			if (parsecdata == "MPC") //MEGAPARSECS
			{
				cout << "Enter your value in MegaParsecs: ";
				cin >> input;
				cout << endl << endl;

				key1 = 1;
				key2 = 8;
				key3 = 2;
				key4 = 5;

				parData = ParsecData(input, key1);
				lightyears = ParsecData(input, key2);
				kiloPar = ParsecData(input, key3);
				astronomicalUnits = ParsecData(input, key4);

				league = input * 34308689947200;

				cout << input << " MegaParsecs is equal to: " << endl
					<< "_______________________________________________________________" << endl << endl
					<< parData << " Parsecs" << endl << endl << kiloPar << " KiloParsecs" << endl << endl
					<< lightyears << " Light Years" << endl << endl << league << " Leagues" << endl << endl
					<< astronomicalUnits << " AU in final." << endl
					<< "_______________________________________________________________" << endl << endl;

				goto end;
			}

			if (parsecdata == "KPC") //KILOPARSECS
			{
				cout << "Enter your value in KiloParsecs: ";
				cin >> input;
				cout << endl << endl;

				key1 = 9;
				key2 = 11;
				key3 = 10;
				key4 = 12;

				parData = ParsecData(input, key1);
				lightyears = ParsecData(input, key2);
				megaPar = ParsecData(input, key3);
				astronomicalUnits = ParsecData(input, key4);

				league = input * 34308689947.2;

				cout << input << " KiloParsecs is equal to: " << endl
					<< "_______________________________________________________________" << endl << endl
					<< parData << " Parsecs" << endl << endl << megaPar << " MegaParsecs" << endl << endl
					<< lightyears << " Light Years" << endl << endl << league << " Leagues" << endl << endl
					<< astronomicalUnits << " AU in final." << endl
					<< "_______________________________________________________________" << endl << endl;

				goto end;
			}

			if (parsecdata == "PC") //PARSECS
			{
				cout << "Enter your value in Parsecs: ";
				cin >> input;
				cout << endl << endl;

				key1 = 6;
				key2 = 3;
				key3 = 7;
				key4 = 12;

				megaPar = ParsecData(input, key1);
				lightyears = ParsecData(input, key2);
				kiloPar = ParsecData(input, key3);
				astronomicalUnits = ParsecData(input, key4);

				league = input * 34308689.9472;

				cout << input << " Parsecs is equal to: " << endl
					<< "_______________________________________________________________" << endl << endl
					<< megaPar << " MegaParsecs" << endl << endl << kiloPar << " KiloParsecs" << endl << endl
					<< lightyears << " Light Years" << endl << endl << league << " Leagues" << endl << endl
					<< astronomicalUnits << " AU in final." << endl
					<< "_______________________________________________________________" << endl << endl;

				goto end;
			}
		}

		if (AL == "C")
		{
			double long Leagues;
			double long Miles;
			double long AU;
			double long LY;
			double long PD;

			cout << "____________________________________________" << endl << endl
				<< "Light Years. (Y)" << endl
				<< "____________________________________________" << endl << endl
				<< "AU.          (A)" << endl
				<< "____________________________________________" << endl << endl;

			cin >> lightX;
			system("cls");

			if (lightX == "A")
			{
				cout << "Enter input in AU: ";
				cin >> astroUnits;

			    LY = astroUnits / 63240;
				Leagues = astroUnits * 26925462.728545;
				Miles = astroUnits * 92955807.3;
				PD = astroUnits * 0.00000485;

				cout << endl << endl;
				cout << "________________________________________________________________________________________"
					<< endl << endl << astroUnits << " AU is equal to "
					<< LY << " Light Years." << endl << endl
					<< Leagues << " Leagues." << endl << endl
					<< Miles << " Miles." << endl << endl
					<< PD << " Parsecs." << endl << endl << "(for KPC multiply or divide Parsecs by 1,000 for MPC 1,000,000)"
					<< endl << "________________________________________________________________________________________" << endl;

				goto end;
			} 

			if (lightX == "Y")
			{
				cout << "Enter input in Light Years: ";
				cin >> lightYears;

				AU = lightYears * 63240;
				Leagues = lightYears * 1702758890000;
				Miles = lightYears * 5108276670000;
				PD = lightYears * 0.306594845;

				cout << endl << endl;
				cout << "________________________________________________________________________________________"
					<< endl << endl << lightYears << " Light Years is equal to "
					<< AU << " AU." << endl 
					<< Leagues << " Leagues." << endl << endl
					<< Miles << " Miles." << endl << endl
					<< PD << " Parsecs." << endl << endl << "(for KPC multiply or divide Parsecs by 1,000 for MPC 1,000,000)"
					<< endl << "________________________________________________________________________________________"<< endl;

				goto end;
			}
		}


		//newVal = LorM * 5878499810000;
		//newVal = LorM / 5878499810000;


		//Temperature start

		if (AL == "T")
		{
			string Tem = "";
			cout << "____________________________________________" << endl << endl
				<< "Fahrenheit to Celsius (FC)" << endl
				<< "____________________________________________" << endl << endl
				<< "Celsius to Kelvin (CK)" << endl
				<< "____________________________________________" << endl << endl
				<< "or Celsius to Fahrenheit (CF)" << endl
				<< "____________________________________________" << endl << endl;
			cin >> Tem;
			system("cls");

			cout << endl << endl << endl;

			if (Tem == "FC")
			{
				double FT;
				cout << "Enter temperature in Fahrenheit: ";
				cin >> FT;
				cout << endl << endl;

				FT = (FT - 32) / 1.8; //convert Fahrenheit to Celsius

				cout << "_______________________________________________________________" << endl << endl
					<< FT << " Degrees Celsius." << endl << endl
					<< "_______________________________________________________________" << endl << endl;

				goto end;
			}

			if (Tem == "CK")
			{
				double CK;
				cout << "Enter temperature in Celsius: ";
				cin >> CK;
				cout << endl << endl;

				CK = CK + 273; //convert Celsius to Kelvin

				cout << "_______________________________________________________________" << endl << endl
					<< CK << " Degrees Kelvin." << endl << endl
					<< "_______________________________________________________________" << endl << endl;

				goto end;
			}

			if (Tem == "CF")
			{
				double CF;
				cout << "Enter temperature in Celsius: ";
				cin >> CF;
				cout << endl << endl;

				CF = (CF * 1.8) + 32; //convert Celsius to Fahrenheit

				cout << "_______________________________________________________________" << endl << endl
					<< CF << " Degrees Fahrenheit." << endl << endl
					<< "_______________________________________________________________" << endl << endl;

				goto end;
			}
		}
		

			//Rotations start

			if (AL == "R")
			{
				//list planets

				string EYorED = "";

				double long Earth;
				double long EarthD;
				double long Jupiter;
				double long Neptune;
				double long Mars;
				double long Venus;
				double long Mercury;
				double long Saturn;
				double long Uranus;
				double long Pluto;

				//input for Earth days.

				cout << "____________________________________________" << endl << endl
					<< "Using Earth Years (Y)" << endl
					<< "____________________________________________" << endl << endl
					<< "Using Earth Days  (D)" << endl
					<< "____________________________________________" << endl << endl
					<< "Enter Input: ";

				cin >> EYorED;
				cout << endl << "________________________________________________________________________________________" << endl << endl;

				if (EYorED == "D")
				{
					cout << "Enter time in Earth days: ";
					cin >> Earth;
					cout << endl << "________________________________________________________________________________________" << endl << endl;

					//Calculation crunching

					EarthD = Earth / 365.26;

					Jupiter = Earth / 4332.71412;

					Neptune = Earth / 60209.4584;

					Mars = Earth / 686.98;

					Venus = Earth / 224.68;

					Mercury = Earth / 87.96;

					Saturn = Earth / 10759.09856;

					Uranus = Earth / 30707.4082;

					Pluto = Earth / 90547.954;

					cout << Mercury << " Mercury rotations around the sun." << endl << endl
						<< Venus << " Venus rotations around the sun." << endl << endl
						<< EarthD << " Earth rotations around the sun." << endl << endl
						<< Mars << " Mars rotations around the sun." << endl << endl
						<< Jupiter << " Jupiter rotations around the sun." << endl << endl
						<< Saturn << " Saturn rotations around the sun." << endl << endl
						<< Uranus << " Uranus rotations around the sun." << endl << endl
						<< Neptune << " Neptune rotations around the sun." << endl << endl
						<< "________________________________________________________________________________________"
						<< endl << endl
						<< "(Dwarf Planet)"
						<< endl
						<< "________________________________________________________________________________________"
						<< endl << endl
						<< Pluto << " Pluto rotations around the sun." << endl
						<< "________________________________________________________________________________________"
						<< endl << endl;

					goto end;
				}

				if (EYorED == "Y")
				{
					cout << "Enter time in Earth years: ";
					cin >> Earth;
					cout << endl << "________________________________________________________________________________________" << endl << endl;

					//Calculation crunching

					Earth = Earth * 365.26;

					EarthD = Earth / 365.26;

					Jupiter = Earth / 4332.71412;

					Neptune = Earth / 60209.4584;

					Mars = Earth / 686.98;

					Venus = Earth / 224.68;

					Mercury = Earth / 87.96;

					Saturn = Earth / 10759.09856;

					Uranus = Earth / 30707.4082;

					Pluto = Earth / 90547.954;

					cout << Mercury << " Mercury rotations around the sun." << endl << endl
						<< Venus << " Venus rotations around the sun." << endl << endl
						<< EarthD << " Earth rotations around the sun." << endl << endl
						<< Mars << " Mars rotations around the sun." << endl << endl
						<< Jupiter << " Jupiter rotations around the sun." << endl << endl
						<< Saturn << " Saturn rotations around the sun." << endl << endl
						<< Uranus << " Uranus rotations around the sun." << endl << endl
						<< Neptune << " Neptune rotations around the sun." << endl << endl
						<< "________________________________________________________________________________________"
						<< endl << endl
						<< "(Dwarf Planet)"
						<< endl
						<< "________________________________________________________________________________________"
						<< endl << endl
						<< Pluto << " Pluto rotations around the sun." << endl
						<< "________________________________________________________________________________________"
						<< endl << endl;

					goto end;
				}
			}

			if (AL == "TF")
			{
				double hypotnuse, opposite, adjacent, param, value;

				string TrigDecide = "";

				cout << "____________________________________________"
					<< endl << endl
					<< "Cosine.               (C)"
					<< endl << "____________________________________________"
					<< endl << endl
					<< "____________________________________________"
					<< endl << endl
					<< "Tangent.              (T)"
					<< endl << "____________________________________________"
					<< endl << endl
					<< "____________________________________________"
					<< endl << endl
					<< "Sine.                 (S)"
					<< endl << "____________________________________________"
					<< endl << endl
					<< "____________________________________________"
					<< endl << endl
					<< "Hyperbolic Sine.      (HS)"
					<< endl << "____________________________________________"
					<< endl << endl
					<< "____________________________________________"
					<< endl << endl
					<< "Hyperbolic Cosine.    (HC)"
					<< endl << "____________________________________________"
					<< endl << endl
					<< "____________________________________________"
					<< endl << endl
					<< "Hyperbolic Tangent.   (HT)"
					<< endl << "____________________________________________"
					<< endl << endl << endl;

				cin >> TrigDecide;

				system("cls");

				if (TrigDecide == "C")
				{
					cout << "Enter the Hypotenuse: ";
					cin >> hypotnuse;
					cout << endl << endl;
					cout << "Enter the Adjacent: ";
					cin >> adjacent;
					cout << endl << endl;

					value = cos(adjacent / hypotnuse);

					cout << "_______________________________________________________________" << endl << endl
						<< "The cosine is equal to: " << value << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}

				if (TrigDecide == "S")
				{
					cout << "Enter the Hypotenuse: ";
					cin >> hypotnuse;
					cout << endl << endl;
					cout << "Enter the Opposite: ";
					cin >> opposite;
					cout << endl << endl;

					value = sin(opposite / hypotnuse);

					cout << "_______________________________________________________________" << endl << endl
						<< "The sine is equal to: " << value << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}

				if (TrigDecide == "T")
				{
					cout << "Enter the Opposite: ";
					cin >> opposite;
					cout << endl << endl;
					cout << "Enter the Adjacent: ";
					cin >> adjacent;
					cout << endl << endl;

					value = tan(opposite / adjacent);

					cout << "_______________________________________________________________" << endl << endl
						<< "The tangent is equal to: " << value << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}

				if (TrigDecide == "HC")
				{
					cout << "Enter the logarithm to compute: ";
					cin >> param;
					cout << endl << endl;

					param = log(param);
					value = cosh(param);

					cout << "_______________________________________________________________" << endl << endl
						<< "The hyperbolic cosine is equal to: " << value << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}

				if (TrigDecide == "HS")
				{
					cout << "Enter the logarithm to compute: ";
					cin >> param;
					cout << endl << endl;

					param = log(param);
					value = sinh(param);

					cout << "_______________________________________________________________" << endl << endl
						<< "The hyperbolic sine is equal to: " << value << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}

				if (TrigDecide == "HT")
				{
					cout << "Enter the logarithm to compute: ";
					cin >> param;
					cout << endl << endl;

					param = log(param);
					value = tanh(param);

					cout << "_______________________________________________________________" << endl << endl
						<< "The hyperbolic tangent is equal to: " << value << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}
			}

			if (AL == "E")
			{
				long double calcExp;
				cout << "Enter value to get the exponential value: ";
				cin >> calcExp;
				cout << endl << endl;

				calcExp = exp(calcExp);

				cout << "_______________________________________________________________" << endl << endl
					<< "The exponential value is: " << calcExp << endl
					<< "_______________________________________________________________" << endl << endl;

				goto end;
			}

			if (AL == "PF")
			{
				double long powerB;
				double long powerE;
				double long output;

				string decideAM = "";

				cout << "____________________________________________"
					<< endl << endl
					<< "X to the power of Y.  (P)"
					<< endl << "____________________________________________"
					<< endl << endl
					<< "____________________________________________"
					<< endl << endl
					<< "Square Root.          (S)"
					<< endl << "____________________________________________"
					<< endl << endl
					<< "____________________________________________"
					<< endl << endl
					<< "Cubic Root.           (C)"
					<< endl << "____________________________________________"
					<< endl << endl
					<< "____________________________________________"
					<< endl << endl
					<< "Hypotenuse.           (H)"
					<< endl << "____________________________________________"
					<< endl << endl
					<< "____________________________________________"
					<< endl << endl
					<< "Common Logarithm.     (CL)"
					<< endl << "____________________________________________"
					<< endl << endl
					<< "____________________________________________"
					<< endl << endl
					<< "Natural Logarithm.     (NL)"
					<< endl << "____________________________________________"
					<< endl << endl << endl;

				cin >> decideAM;
				system("cls");

				if (decideAM == "P")
				{
					cout << "Enter the base unit: ";
					cin >> powerB;
					cout << endl << endl
						<< "Enter your exponent: ";
					cin >> powerE;

					output = pow(powerB, powerE);

					cout << "_______________________________________________________________" << endl << endl
						<< powerB << " to the power of " << powerE << " is: " << output << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}

				if (decideAM == "S")
				{
					double long square;

					cout << "Enter the value to be squared: ";
					cin >> square;
					cout << endl << endl;
					square = sqrt(square);

					cout << "_______________________________________________________________" << endl << endl
						<< "The square root is: " << square << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}

				if (decideAM == "C")
				{
					double long cube;

					cout << "Enter the value to be cubed: ";
					cin >> cube;
					cout << endl << endl;

					cube = cbrt(cube);

					cout << "_______________________________________________________________" << endl << endl
						<< "The cubic root is: " << cube << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}

				if (decideAM == "H")
				{
					double leg_x, leg_y, result;

					cout << "Enter X height: ";
					cin >> leg_x;
					cout << endl << endl;

					cout << "Enter Y length: ";
					cin >> leg_y;
					cout << endl << endl;

					result = hypot(leg_x, leg_y);

					cout << "_______________________________________________________________" << endl << endl
						<< "The hypotenuse is: " << result << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}

				if (decideAM == "CL")
				{
					double common;

					cout << "Enter value to convert to a common logarithm: ";
					cin >> common;

					common = log10(common);
					cout << endl << endl;

					cout << "_______________________________________________________________" << endl << endl
						<< "The common logarithm is: " << common << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}

				if (decideAM == "NL")
				{
					double natural;

					cout << "Enter value to convert to a natural logarithm: ";
					cin >> natural;

					natural = log10(natural);
					cout << endl << endl;

					cout << "_______________________________________________________________" << endl << endl
						<< "The natural logarithm is: " << natural << endl
						<< "_______________________________________________________________" << endl << endl;

					goto end;
				}
			}

			//if improper input option

			else{
				Beep(600, 200);

				system("cls");

				cout << "Improper input" << endl << endl;

				cout << "____________________________________________" << endl << endl
					<< "Earth Days to Jovian Time/Days.       (D)" << endl << "____________________________________________" << endl << endl
					<< "Parsecs Conversions.                  (P)" << endl << "____________________________________________" << endl << endl
					<< "Unit Conversions.                     (C)" << endl << "____________________________________________" << endl << endl
					<< "Temperature Conversions.              (T)" << endl << "____________________________________________" << endl << endl
					<< "Planet Rotations Around The Sun.      (R)" << endl << "____________________________________________" << endl << endl
					<< "Trigonometric Functions.              (TF)" << endl << "____________________________________________" << endl << endl
					<< "Exponential Function.                 (E)" << endl << "____________________________________________" << endl << endl
					<< "Power Functions.                      (PF)" << endl << "____________________________________________" << endl << endl << endl;

				goto restartSC;
			}

		end: //restart or end application of SC

			string redo = "";

			cout << endl << "(case sensetive) Enter any random character(s) to close the program.  "
				<< endl << "Or to restart, enter (restart)" << endl << endl
				<< " !Warning!, will lose data: ";

			cin >> redo;
			cin.get();

			//restart 
			if (redo == "restart")
			{
				cout << endl << endl;
				system("cls");
				cout << "____________________________________________" << endl << endl
					<< "Earth Days to Jovian Time/Days.       (D)" << endl << "____________________________________________" << endl << endl
					<< "Parsecs Conversions.                  (P)" << endl << "____________________________________________" << endl << endl
					<< "Unit Conversions.                     (C)" << endl << "____________________________________________" << endl << endl
					<< "Temperature Conversions.              (T)" << endl << "____________________________________________" << endl << endl
					<< "Planet Rotations Around The Sun.      (R)" << endl << "____________________________________________" << endl << endl
					<< "Trigonometric Functions.              (TF)" << endl << "____________________________________________" << endl << endl
					<< "Exponential Function.                 (E)" << endl << "____________________________________________" << endl << endl
					<< "Power Functions.                      (PF)" << endl << "____________________________________________" << endl << endl << endl;

				goto restartSC;
			}

			//or end application
			else if (redo != "restart") 
			{
				goto ReturnSC;
			}

		ReturnSC:
			return 0;
		}
	}
	

/**************************************************************************************************************************************************
START

OF

FUNCTIONS
***************************************************************************************************************************************************/


//Translates Parsec Data

long double ParsecData(long double input, int key) 
{
	if (key == 1) //MPC TO PC
	{
		input = input * 1000000;
	}

	if (key == 2) //MPC TO KPC
	{
		input = input * 1000;
	}

	if (key == 3) //PC TO LY
	{
		input = input * 3.26156;
	}

	if (key == 4) //PC TO AU
	{
		input = input * 206265;
	}

	if (key == 5) //MPC TO AU
	{
		input = input * 206265000000;
	}

	if (key == 6) //PC TO MPC
	{
		input = input / 1000000;
	}

	if (key == 7) //PC TO KPC
	{
		input = input / 1000;
	}

	if (key == 8) //MPC TO LY
	{
		input = input * 3261560;
	}

	if (key == 9) //KPC TO PC
	{
		input = input * 1000;
	}

	if (key == 10) //KPC TO MPC
	{
		input = input / 1000;
	}

	if (key == 11) //KPC TO LY
	{
		input = input * 3261.56;
	}

	if (key == 12) //KPC TO AU
	{
		input = input * 206265000;
	}

	return input;
}



//Makes calculations of planetary units.

long double dToJoJ(long double DtJJ)
{
	double DsJ;
	DsJ = DtJJ * 9.92496; //9.92496
	return DsJ;
}

long double dToJoN(long double DtJN)
{
	double DsN;
	DsN = DtJN * 16.11; //16.11
	return DsN;
}

long double dToJoS(long double DtJS)
{
	double DsS;
	DsS = DtJS * 10.656; //10.656
	return DsS;
}

long double dToJoU(long double DtJU)
{
	double DsU;
	DsU = DtJU * 17.24;  //17.24
	return DsU;
}

//Earth days to Planetary days.

long double eToPD(long double Days, int key)
{
	if (key == 1)
	{
		Days = Days / 58.65;
	}

	if (key == 2)
	{
		Days = Days / 243.02;
	}

	if (key == 3)
	{
		Days = Days / 24.62;
	}

	return Days;
}
