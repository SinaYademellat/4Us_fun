

/*##############################
#                            #
#       sina yademellat      #
#         9813027346         #
#           HW_4  :)         #
#            DB				 #
#                            #
##############################*/

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//for DB :)
class HW4
{
private:
	string nameOfDatatBase = "";
	int MAX_level = 1;
	int X = 30;
	vector<string>tmp_v;

	void sina_yademellat(int l)

	{
		if (l == MAX_level)
		{
		
			cout << "( ";
			for (int ii = 0; ii < this->tmp_v.size() ; ii++)//- 1; ii++)
			{
				cout << tmp_v[ii];
				if (ii!=2)
				{
					cout << " , ";
				}
			}

			cout << " ),\n";

			return;
		}
		else
		{
			for (int i = 0; i <= this->X; i++)
			{
				if (put(l,i))
				{
					sina_yademellat(l + 1);
					//pick(i);
					pick();
				}

			}
		}
	}

	vector<string>A;
	int Rand_number = 13;

	bool put(int type,int value)
	{
		//tmp_v.push_back(Index);
		string tmp_ = "";
		int tmp_int = 0;
		switch (type)
		{
		case 0:// Type
			
			// 0 --> sia
			// 1 --> dozd
			// 2 --> ghatl
			// 3 ...

			tmp_int = (1378 * (value + 5) + rand()) % 3;// tmp_int += 1;
			tmp_ = to_string(tmp_int);
			break;

		case 1:// age
			tmp_int = (1378 * (value + 5) + rand()) % 69;	// Max age == > 69 :)
			tmp_ = to_string(tmp_int);
			break;

		case 2:// Name

			tmp_ = "\'";
			tmp_int = (1378 * (value + 5)) % 97;
			tmp_int += rand();
			tmp_int %= 21;

			tmp_ += (char('a' + tmp_int));
			

			tmp_ += char('Z' - tmp_int);

			tmp_int += 1;
			tmp_ += char('Z' - tmp_int);
			tmp_int += 1;
			tmp_ += (char('a' + tmp_int));
			tmp_ += "\'";
			break;
		default:
			break;
		}

		tmp_v.push_back(tmp_);
		return true;
	}

	void pick()//int Index)
	{
		tmp_v.pop_back();
	}
	

public:
	HW4()
	{
		this->nameOfDatatBase = "[TMP_Zendan]";
	}

	HW4(string Ndb)
	{
		while (!(Ndb[0] == '[' && Ndb[Ndb.length() - 1] == ']'))
		{
			cout << "your input --> " << Ndb << endl;
			cout << "input struct must be \"[Name]\" \n";
			cout << "Try again: ";
			cin >> Ndb;
		}
		this->nameOfDatatBase = Ndb;
	}

	void insertIntoRandom(string Name, int cow_)
	{
		int c = cow_;
		this->tmp_v.clear(); this->MAX_level = c;
		switch (c)
		{
		case 1:
			this->X = 30;
			break;
		case 2:
			this->X = 5;
			break;
		default:
			this->X = 4;
			break;
		}
		string TMP_ = "INSERT INTO ";
		TMP_ += Name;
		TMP_ += "\n VALUES  \n";
		cout << TMP_;
		sina_yademellat(0);
		
	}


	
};


int main()
{
	
	HW4 A("[TMP_Zendan]");
	srand(time(0));
	string nameOfTablE[1] = {"[HW4]"};
	int numberOfColumn[1] = {3};

	cout << "\n------------------------------\n\n";
	A.insertIntoRandom(nameOfTablE[0], numberOfColumn[0]);
	cout << "( 3 , 22 , \'sinayademellat\');\n";
	cout << "\n------------------------------\n";

}

