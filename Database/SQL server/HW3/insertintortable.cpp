

/*##############################
#                            #
#       sina yademellat      #
#         9813027346         #
#           HW_3             #
#            DB				 #
#                            #
##############################*/

#include <iostream>
#include <string>
#include <vector>


using namespace std;

//for DB :)
class HW3
{
private:
	string nameOfDatatBase = "";
	int MAX_level = 1;
	int X = 30;
	vector<int>tmp_v;

	bool put(int Index);

	void pick(int Index);

	void sina_yademellat(int l);
	
public:
	HW3();
	HW3(string Ndb);

	/// INSERT INTO table_name [(...)]
	/// VALUES(...);
	// row  ==> 30
	void insertIntoRandom(string Name, int cow_);
};


int main()
{
	HW3 A("[TMP_Zendan]");

	string nameOfTablE   [4]    = { "[Prisoner]","[crime]","[stay]","[support]" } ;
	int numberOfColumn   [4]    = {		1		,	2	  ,	  2	   ,      2     } ;

	for (long long testCase = 0; testCase < 4; testCase++)
	{
		A.insertIntoRandom(nameOfTablE[testCase], numberOfColumn[testCase]);
		cout << "\n------------------------------\n";
	}

}


///~~~~~~~~~~ public

HW3::HW3()
{
	this->nameOfDatatBase = "[TMP_Zendan]";
}

HW3::HW3(string Ndb)
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

void HW3::insertIntoRandom(string Name, int cow_)
{
	int c = cow_;
	//cout << "number: "; cin >> c; 

	this->tmp_v.clear(); this->MAX_level = c;
	switch (c)
	{

	case 1:
		this->X = 30;//30
		break;
	case 2:
		this->X = 5;//5
		break;
	default:
		this->X = 3;//3
		break;
	}
	string TMP_ = "INSERT INTO ";
	//TMP_ += (this->nameOfDatatBase + ".[db].");
	TMP_ += Name;
	//TMP_ += "\n VALUES ( \n";
	TMP_ += "\n VALUES  \n";
	cout << TMP_;
	sina_yademellat(0);
	//cout << " ) ; ";
	//cout << "\bt \b \b";
	//cout << "( "<<this->X<< " ) ;";
}

///~~~~~~~~~~ private

bool HW3::put(int Index) 
{
	tmp_v.push_back(Index);
	return true;
}

void HW3::pick(int Index)
{
	tmp_v.pop_back();
}

void HW3::sina_yademellat(int l)
{
	if (l == MAX_level)
	{
		//cout << sina_test++ << " -->:  ";
		cout << "( ";
		/*for (auto X : this->tmp_v)
		{
			cout << X << " , ";
		}*/
		for (int ii = 0; ii < this->tmp_v.size() - 1; ii++)
		{
			cout << tmp_v[ii] << " , ";
		}
		cout << tmp_v[tmp_v.size() - 1];
		//cout << " ) ,\n";
		cout << " ) ";

		for (int ii = 0; ii < this->tmp_v.size(); ii++)
		{
			if (tmp_v[ii] != this->X)
			{
				cout << " ,\n";
				return;
			}

		}
		cout << " ; \n";
		return;
	}
	else
	{

		//c^x = 30
		//x == > log 30
		//			c
		// ---> ??????
		//c == 1 ==> x = 30
		//c == 2 ==> x = 5
		//c == 3 ==> x = 3.09
		//int X = 2;
		for (int i = 0; i <= this->X; i++)
		{
			if (put(i))
			{
				sina_yademellat(l + 1);
				pick(i);
			}

		}
	}
}

