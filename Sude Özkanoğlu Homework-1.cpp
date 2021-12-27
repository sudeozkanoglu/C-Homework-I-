/**********************************************************************
**
**						 SAKARYA ÜNİVERSİTESİ
**			   BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				       PROGRAMLAMAYA GİRİŞ DERSİ
**
**
**					   ÖDEV NUMARASI:I.ÖDEV
**					   ÖĞRENCİ ADI:SUDE ÖZKANOĞLU
**					   ÖĞRENCİ NUMARASI:G201210034
**					   DERS GRUBU:II.ÖĞRETİM C GRUBU
**********************************************************************/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	//Cities of Turkey
	string cities[81] = { "adana","adiyaman","afyonkarahisar","agri","aksaray","amasya","ankara","antalya","ardahan","artvin","aydin","balikesir","bartin","batman","bayburt","bilecik","bingol","bitlis","bolu","burdur","bursa","canakkale","cankiri","corum","denizli","diyarbakir","duzce","edirne","elazig","erzincan","erzurum","eskisehir","gaziantep","giresun","gumushane","hakkari","hatay","igdir","isparta","istanbul","izmir","kahramanmaras","karabuk","karaman","kars","kastamonu","kayseri","kirikkale","kirklareli","kirsehir","kilis","kocaeli","konya","kutahya","malatya","manisa","mardin","mersin","mugla","mus","nevsehir","nigde","ordu","osmaniye","rize","sakarya","samsun","siirt","sinop","sivas","sirnak","tekirdag","tokat","trabzon","tunceli","sanliurfa","usak","van","yalova","yozgat","zonguldak" };

	string theLongestCity = cities[0];
	string theShortestCity = cities[0];

	int n = 80;
	int i = 0;

	//Loop is that to find the longest and shortest cities
	for (i = 0; i < n; i++)
	{
		if (cities[i].length() > theLongestCity.length())
		{
			theLongestCity = cities[i];
		}
		if (cities[i].length() < theShortestCity.length())
		{
			theShortestCity = cities[i];
		}
	}

	cout << "The Longest City:" << theLongestCity << endl;
	cout << "The Shortest City:" << theShortestCity << endl;
	cout << "--------------------------------" << endl;
	cout << "Please wait..." << endl;
	cout << "--------------------------------" << endl;

	int minimum = theShortestCity.length();
	bool condition = true;

	string findCities[81] = {};
	int quantOfCity = 0;

	//Loop is that to work for finding cities 3 to 14 letters 
	for (int p = 3; p < 14; p++)
	{
		//Loop is that for 100000 trying
		for (int g = 0; g < 100000; g++)
		{
			string selectedCities[14];

			//Loop is that for choosing random cities
			for (int a = 0; a < p; a++)
			{
				int random = rand() % 81;
				string selectedCity = cities[random];
				selectedCities[a] = selectedCity;
			}

			string shortestSelectedCity = selectedCities[0];
			int lengthOfShortestSelectedCity = shortestSelectedCity.length();

			//Loop is that for finding the shortest city from chosen cities
			for (int t = 0; t < p; t++)
			{
				if (selectedCities[t].length() < lengthOfShortestSelectedCity)
				{
					lengthOfShortestSelectedCity = selectedCities[t].length();

				}
			}

			string newCity;
			bool condition3 = true;

			//Loop is that for to not being out of range 
			for (int f = 0; f < lengthOfShortestSelectedCity; f++)
			{
				//Creating new cities
				for (int fe = 0; fe < p; fe++)
				{
					//str = selectedCities[fe].substr(f,1);
					newCity.append(selectedCities[fe].substr(f, 1));
					//newCity.append(str);				
				}

				//Comparing to new cities with Turkey's cities
				for (int b = 0; b < 81; b++)
				{
					if (cities[b] == newCity)
					{
						//Loop is that for limiting to add matched same city again
						for (int z = 0; z < 81; z++)
						{
							if (newCity == findCities[z])
							{
								condition3 = false;
								break;
							}
							else
							{
								condition3 = true;
							}
						}
						//If is that for adding the new cities
						if (condition3 == true)
						{
							findCities[quantOfCity] = newCity;
							cout << "City added the list!" << endl;
							quantOfCity++;
						}
						break;
						cout << "Finded the city." << endl;
					}
					else
					{

					}
				}
				newCity = "";
			}
		}
	}

	cout << "--------------------------------" << endl;

	int quantityThree = 0;
	int quantityFour = 0;
	int quantityFive = 0;
	int quantitySix = 0;
	int quantitySeven = 0;
	int quantityEight = 0;
	int quantityNine = 0;
	int quantityTen = 0;
	int quantityEleven = 0;
	int quantityTwelve = 0;
	int quantityThirteen = 0;
	int quantityFourteen = 0;

	//Printing out the new matched cities
	for (int s = 0; s < 81; s++)
	{
		if (findCities[s].length() == 3)
		{
			cout << "3 Letters --------------> " << findCities[s] << endl;
			quantityThree++;
		}
		else if (findCities[s].length() == 4)
		{
			cout << "4 Letters --------------> " << findCities[s] << endl;
			quantityFour++;
		}
		else if (findCities[s].length() == 5)
		{
			cout << "5 Letters --------------> " << findCities[s] << endl;
			quantityFive++;
		}
		else if (findCities[s].length() == 6)
		{
			cout << "6 Letters --------------> " << findCities[s] << endl;
			quantitySix++;
		}
		else if (findCities[s].length() == 7)
		{
			cout << "7 Letters --------------> " << findCities[s] << endl;
			quantitySeven++;
		}
		else if (findCities[s].length() == 8)
		{
			cout << "8 Letters --------------> " << findCities[s] << endl;
			quantityEight++;
		}
		else if (findCities[s].length() == 9)
		{
			cout << "9 Letters --------------> " << findCities[s] << endl;
			quantityNine++;
		}
		else if (findCities[s].length() == 10)
		{
			cout << "10 Letters --------------> " << findCities[s] << endl;
			quantityTen++;
		}
		else if (findCities[s].length() == 11)
		{
			cout << "11 Letters --------------> " << findCities[s] << endl;
			quantityEleven++;
		}
		else if (findCities[s].length() == 12)
		{
			cout << "12 Letters --------------> " << findCities[s] << endl;
			quantityTwelve++;
		}
		else if (findCities[s].length() == 13)
		{
			cout << "13 Letters --------------> " << findCities[s] << endl;
			quantityThirteen++;
		}
		else if (findCities[s].length() == 14)
		{
			cout << "14 Letters --------------> " << findCities[s] << endl;
			quantityFourteen++;
		}
	}

	cout << "--------------------------------" << endl;

	//Printing out quantity of cities in each letters
	if (quantityThree != 0)
	{
		cout << "Quantity of Three Letters:" << quantityThree << endl;
	}
	else
	{
		cout << "Quantity of Three Letters are not exist!" << endl;
	}

	if (quantityFour != 0)
	{
		cout << "Quantity of Four Letters:" << quantityFour << endl;
	}
	else
	{
		cout << "Quantity of Four Letters are not exist!" << endl;
	}

	if (quantityFive != 0)
	{
		cout << "Quantity of Five Letters:" << quantityFive << endl;
	}
	else
	{
		cout << "Quantity of Five Letters are not exist!" << endl;
	}

	if (quantitySix != 0)
	{
		cout << "Quantity of Six Letters:" << quantitySix << endl;
	}
	else
	{
		cout << "Quantity of Six Letters are not exist!" << endl;
	}

	if (quantitySeven != 0)
	{
		cout << "Quantity of Seven Letters:" << quantitySeven << endl;
	}
	else
	{
		cout << "Quantity of Seven Letters are not exist!" << endl;
	}

	if (quantityEight != 0)
	{
		cout << "Quantity of Eight Letters:" << quantityEight << endl;
	}
	else
	{
		cout << "Quantity of Eight Letters are not exist!" << endl;
	}

	if (quantityNine != 0)
	{
		cout << "Quantity of Nine Letters:" << quantityNine << endl;
	}
	else
	{
		cout << "Quantity of Nine Letters are not exist!" << endl;
	}

	if (quantityTen != 0)
	{
		cout << "Quantity of Ten Letters:" << quantityTen << endl;
	}
	else
	{
		cout << "Quantity of Ten Letters are not exist!" << endl;
	}

	if (quantityEleven != 0)
	{
		cout << "Quantity of Eleven Letters:" << quantityEleven << endl;
	}
	else
	{
		cout << "Quantity of Eleven Letters are not exist!" << endl;
	}

	if (quantityTwelve != 0)
	{
		cout << "Quantity of Twelve Letters:" << quantityTwelve << endl;
	}
	else
	{
		cout << "Quantity of Twelve Letters are not exist!" << endl;
	}

	if (quantityThirteen != 0)
	{
		cout << "Quantity of Thirteen Letters:" << quantityThirteen << endl;
	}
	else
	{
		cout << "Quantity of Thirteen Letters are not exist!" << endl;
	}

	if (quantityFourteen != 0)
	{
		cout << "Quantity of Fourteen Letters:" << quantityFourteen << endl;
	}
	else
	{
		cout << "Quantity of Fourteen Letters are not exist!" << endl;
	}

	return 0;
}