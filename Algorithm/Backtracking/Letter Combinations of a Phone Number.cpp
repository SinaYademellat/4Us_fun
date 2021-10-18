/**************************************************
**                                               **
**      	SINA_YADEMELLAT                  **
**                                               **
**         sina_yademellat@yahoo.com             **
**                                               **
**************************************************/





// URL: https://leetcode.com/explore/interview/card/top-interview-questions-medium/109/backtracking/793/
//
//Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any orde
//
//~~~~~~~~~~~~~~~~~~~~~  Backtracking ~~~~~~~~~~~~~~~~~~~~
//
//	void BT(int level)
//	{
//		if(level==maxlevel)
//			{ if(cheeckLeafo()) cout<<"javab:)";return 0;}
//		else
//			for (... i ...)
//				{
//					if(put(i))
//						{
//						BT(level+1)
//						pick(i)
//						}
//
//				}
//
//		
//	}
//
///~~~~~~~~~~~~~~~~~~~~~  Backtracking ~~~~~~~~~~~~~~~~~~~~
//
//



class Solution {
private:
	string phone[10] = { "?"
					  ,"?","abc","def"
					  ,"ghi","jkl","mno",
					 "pqrs","tuv","wxyz" };

	vector<string>out_;
	string tmp_ = "";
	string input_ = "";
	int G = 0;// input_[level] - '0';

	int max_level = 0;
	bool checkit() { return true; };
	bool put(int Level, int index)
	{
		tmp_[Level] = phone[this->G][index];
		return true;
	}
	void pick(int Level, int index)
	{
		tmp_[Level] = ' ';
	}

	void Backtracking(int level)
	{
		//level -> X - -

		level -= 1;
		if (level==max_level)
		{
			if (checkit())
			{
				//solution
				//cout << tmp_<<endl;
				out_.push_back(tmp_);
				return;
			}			
		}
		else
		{
			
			G = input_[level] - '0';

			for (int i = 0; i < phone[G].length(); i++) // X -> - - -
			{
				if (put(level,i))
				{

					Backtracking(level + 2);

					pick(level,i);
					G = input_[level] - '0';

				}

			}
		
		}
	}


public:
    vector<string> letterCombinations(string digits) {
   // void  letterCombinations(string digits) {

		this->max_level = digits.size();
		if (max_level==0||max_level == 1 && digits[0]==' ')
		{

			vector<string>foo9;
			foo9.clear();
			//cout << "???";
			//return vector<string>();
			return foo9;
		}
		else
		{
			string foo(digits.size(), '=');
			
			this->tmp_ = foo;
			this->input_ = digits;
			Backtracking(1);

		}

		return this->out_;
    }

	void test()
	{
		for (int i = 0; i < this->out_.size(); i++)
		{
			cout << out_[i] << " ";
		}
	}
};



