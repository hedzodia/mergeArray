#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	bool endAlgo = false;
	int value;
	while (!endAlgo) {
		#pragma region value
		vector<int> tab1;
		vector<int> tab2;

		bool allTabsFilled = false;
		bool tab1Filled = false;
		bool tab2Filled = false;	
		#pragma endregion

		while (!allTabsFilled)
		{
		#pragma region tab1AndTab2
			while (!tab1Filled)
			{
				// fill tab1
				cout << "Enter a number for the first array :" << endl;
				cin >> value;
				if (cin.good()) {
					int choix;
					cout << "Do you want to keep filling the first array ? (1 yes, 2 no)" << endl;
					cin >> choix;
					if (cin.good()) {
						system("CLS");
						if (choix == 2) { tab1.push_back(value);  tab1Filled = true; }
						else if (choix == 1) { tab1.push_back(value); }
						else if (!(choix == 1 || choix == 2)) {
							cout << "is not valid" << endl;
						}
					}
				}				
				while (!cin.good())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					system("CLS"); 
					cout << "number i did" << endl;
				}
			}

			while (!tab2Filled)
			{
				// fill tab2
				cout << "Enter a number for the second array :" << endl;
				cin >> value;
				int choix;
				if (cin.good()) {
					cout << "Do you want to keep filling the second array ? (1 yes, 2 no)" << endl;
					cin >> choix;
					if (cin.good()) {
						system("CLS");
						if (choix == 2) { tab2.push_back(value); tab2Filled = true; }
						else if (choix == 1) { tab2.push_back(value); }
						else if (!(choix == 1 || choix == 2)) {
							cout << "is not valid" << endl;
						}
					}
				}	
				while (!cin.good())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					system("CLS");
					cout << "number i did" << endl;
				}
			}
			if (tab1Filled && tab2Filled)
			{
				allTabsFilled = true;
			}
		#pragma endregion
		}

		#pragma region mergeAndCout
		sort(tab1.begin(), tab1.end());
		sort(tab2.begin(), tab2.end());

		cout << "Array 1 ascending order :" << endl;

		for (int i = 0; i < tab1.size(); i++)
		{
			if (i == tab1.size() - 1){cout << tab1[i];}
			else{cout << tab1[i] << " ,";}
		}
		cout << endl;

		cout << "Array 2 ascending order :" << endl;

		for (int i = 0; i < tab2.size(); i++)
		{
			if (i == tab2.size() - 1){cout << tab2[i];}
			else{cout << tab2[i] << " ,";}
		}
		cout << endl;

		for (int i = 0; i < tab2.size(); i++)
		{
			tab1.push_back(tab2[i]);
		}

		sort(tab1.begin(), tab1.end());

		cout << "The 2 arrays fused in an ascending order : " << endl;

		for (int i = 0; i < tab1.size(); i++)
		{
			if (i == tab1.size() - 1){cout << tab1[i];}
			else{cout << tab1[i] << " ,";}
		}
		cout << endl<< endl;

		int choix = 0;
		#pragma endregion

		#pragma region restartOrQuit
		cout << "Would you like to restart ? (1 yes, 2 no)" << endl;
		cin >> choix;
		while (!cin.good())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}

		system("CLS");
		if (choix == 2)
		{
			endAlgo = true;
			cout << endl;
			cout << "Merci, au revoir, good bye !" << endl;
		}

		if (!(choix == 1) || (choix == 2)) {
			cout << "error detected !,it not 2 or 1 : restart defaut"<<endl;
		}
		#pragma endregion
	}
}