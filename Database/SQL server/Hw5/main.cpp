

/*##############################
#                            #
#       sina yademellat      #
#         9813027346         #
#       INSERT VALUE         #
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
#include <sstream>


using namespace std;

typedef long long ll;
typedef vector<string>vs ;
typedef vector<int>vi ;



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
			for (int ii = 0; ii < this->tmp_v.size(); ii++)//- 1; ii++)
			{
				cout << tmp_v[ii];
				if (ii != 2)
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
				if (put(l, i))
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

	bool put(int type, int value)
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

class pensil
{
private:
  string nameOfDatatBase = "";
  ll tadad = 0;
  // 0 nvar
  // 1 int
  // 2
  // 3
  void foo(int ty)
  {
	  //cout << value <<" , ";
	  string tmp_="";
	  ll tmp_int=0;
	  
	  
	  if (ty==1) // id 
	  {
		  cout<<50 + rand() % 58 <<" , ";
	  }
	  else if (ty==0) // NMAE ...
	  {
		  	tmp_ = "\'";
			tmp_int = (1378 * (time(0) + 5)) % 97;
			tmp_int += rand();
			tmp_int %= 21;
			tmp_ += (char('a' + tmp_int));
			tmp_ += char('Z' - tmp_int);
			tmp_int += 1;
			tmp_ += char('Z' - tmp_int);
			tmp_int += 1;
			tmp_ += (char('a' + tmp_int));
			tmp_ += "\'";
			cout<<tmp_<<" , ";
	  }
	  else if(ty==2)
	  {
		  	//2001-01-01
			vs base={"2000","01","01"}; 
	  		int R=rand()%3;			
			ll Tr=rand()%90;	
			stringstream  sstr;				
			if (R==0)
			{	
				Tr+=8;
				sstr<<Tr;
				string GGG="20";
				sstr>>GGG;	
				while(GGG.length()<4)	
				{
					GGG+="1";//+GGG;
				}	
				base[R] =GGG;
			}
			else if(R==1)
			{
				Tr%=10;
				Tr+=1;
				sstr<<Tr;
				string GGG="";
				sstr>>GGG;
				while(GGG.length()<2)	
				{
					GGG="0"+GGG;
				}	
				base[R]=GGG;
			}
			else
			{	Tr%=24;
				Tr+=1;
				sstr<<Tr;
				string GGG="";
				sstr>>GGG;
				while(GGG.length()<2)	
				{
				GGG="0"+GGG;
				}	
				base[R]=GGG;

			}
			
			cout<<"'";
			for (int H = 0; H < base.size()-1; H++)
			{
				cout<<base[H]<<"-";
			}
			cout<<base[base.size()-1]<<"' , ";
	  }
	  else if(ty==3)
	  {
		  cout<<( abs(rand()) % 2 )<<" , ";
	  }
	  
  }

  void foo2(int ty) 
  {
	  //cout << value <<" , ";
	  string tmp_="";
	  ll tmp_int=0;
	  
	  
	  if (ty==1) // id 
	  {
		  cout<<50 + rand() % 58 ;//<<" , ";
	  }
	  else if (ty==0) // NMAE ...
	  {
		  	tmp_ = "\'";
			tmp_int = (1378 * (time(0) + 5)) % 97;
			tmp_int += rand();
			tmp_int %= 21;
			tmp_ += (char('a' + tmp_int));
			tmp_ += char('Z' - tmp_int);
			tmp_int += 1;
			tmp_ += char('Z' - tmp_int);
			tmp_int += 1;
			tmp_ += (char('a' + tmp_int));
			tmp_ += "\'";
			cout<<tmp_;//<<" , ";
	  }
	  
  else if(ty==2)
	  {
		  	//2001-01-01
			vs base={"2000","01","01"}; 
	  		int R=rand()%3;			
			ll Tr=rand()%90;	
			stringstream  sstr;				
			if (R==0)
			{	
				Tr+=1;
				sstr<<Tr;
				string GGG="";
				sstr>>GGG;
				while(GGG.length()<4)	
				{
					GGG+="2";//+GGG;
				}				
				base[R]=GGG;
			}
			else if(R==1)
			{
				Tr%=10;
				Tr+=1;
				sstr<<Tr;
				string GGG="";
				sstr>>GGG;
				while(GGG.length()<2)	
				{
					GGG="0"+GGG;
				}	
				base[R]=GGG;
			}
			else
			{	Tr%=24;
				Tr+=1;
				sstr<<Tr;
				string GGG="";
				sstr>>GGG;
				while(GGG.length()<2)	
				{
					GGG="0"+GGG;
				}	
				base[R]=GGG;

			}
			
			cout<<"'";
			for (int H = 0; H < base.size()-1; H++)
			{
				cout<<base[H]<<"-";
			}
			cout<<base[base.size()-1];//<<"' , ";
	  }
	  else if(ty==3)
 	  {
		  cout<<( abs(rand()) % 2 );//<<" , ";
	  }

	  
  }


public:
    void insertIntoRandom(string Name,vs input_v,vi type_v,int T)
    {
        
        string TMP_ = "INSERT INTO ";
		TMP_ += Name;
		TMP_ += "\n VALUES  \n";
		cout << TMP_;
        //INSERT INTO [sina]
        //VALUES
        this->tadad =T;
        while (tadad--)
        {
            /* code */
        cout<<"( ";
		///for(int i =0 ;i<type_v.size();i++)
		//for(auto e:type_v)
                        ///foo(type_v[i]);foo(e)
		for(int i =0 ;i<type_v.size()-1;i++)
			foo(type_v[i]);			
        
		foo2(type_v[type_v.size()-1]);		
		cout<<" ), \n";

        }
        
      	cout<<"( ";

		for(int i =0 ;i<input_v.size()-1;i++)
			cout<<input_v[i]<<" , ";

		cout<<input_v[input_v.size()-1]<<" );\n ";

	    // cout<<"( ";for(auto e:input_v)
        //                 cout<<e<<" , ";
        // cout<<" );\n ";
        
        cout << "\n------------------------------\n";
        
    }
};

int main()
{
	// HW4 A("[TMP_Zendan]");
	// srand(time(0));
	// string nameOfTablE[1] = { "[HW4]" };
	// int numberOfColumn[1] = { 3 };
	// cout << "\n------------------------------\n\n";
	// A.insertIntoRandom(nameOfTablE[0], numberOfColumn[0]);
	// cout << "( 3 , 22 , \'sinayademellat\');\n";
	// cout << "\n------------------------------\n";

	// 0 nvar --> name, ..
	// 1 int  --> id ,...
	// 2 date  2001-01-01
	// 3 bit

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //[crimeTable]
    //[namaeOfCrime] nva
    //[typeOfCrime] int
    //[codeOfcrime] int
    //[prisonYears] int
    //[shalagh]     int
    // vs NAMEV={"[namaeOfCrime]","[typeOfCrime]","[codeOfcrime]","[prisonYears]","[shalagh]"};
    vs N1={"'sisi'","1","1234","23","23"};
	vi T1 ={0,1,1,1,1}; 
    //A.insertIntoRandom("[crimeTable]",N1,T1,4);

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//[personnel]
	//[personnel] nvarchar
	//[lname]  nvarchar
	//[position] nvarchar
	//[id] int
	//[codeM] int
	vs N2={"'ali'","'yademellat'","'darban'","88888","2222222"};
	vi T2{0,0,0,1,1};
	//A.insertIntoRandom("[crimeTable]",N2,T2,4);

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


	//[placeTable]
	//[addressOfPri] nvarchar
	//[nameofPr] nvarchar
	//[numberOfz] int
	//[numberOfp] int
	//[id] int
	vs N3={"'shiraz'","'Zendan'","100","1000","123456789"};
	vi T3={0,0,1,1,1};

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//[prison]
	//[fname] nvarchar 0
	//[lname] nvarchar 0
	//[father_name] nvarchar 0
	//[codeM] int 1
	//[birthday] date 2
	//[crime] nvarchar 0
	//[firsttime] bit 3
	vs N4={"'javad'","'yademellat'","'sina'","2233","'2001-01-01'","'DOZDI'","0"};
	vi T4={0,0,0,1,2,0,3};

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	pensil A;
	vector<vs>part1={N1,N2,N3,N4};//N1,N2,N3,N4
	vector<vi>part2={T1,T2,T3,T4};//T1,T2,T3,T4
	vs DBtable={"[crimeTable]","[personnel]","[placeTable]","[prison]"};
	for (int ii = 0; ii < part1.size(); ii++)
	{
		A.insertIntoRandom(DBtable[ii],part1[ii],part2[ii],100);
	}
	



}

