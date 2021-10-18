/**************************************************
**                                               **
**      	SINA_YADEMELLAT                  **
**                                               **
**         sina_yademellat@yahoo.com             **
**                                               **
**************************************************/



//URL: https://leetcode.com/explore/interview/card/top-interview-questions-medium/109/backtracking/794/
//
// ^^ solution ^^ : https://leetcode.com/problems/generate-parentheses/solution/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//	my solution :)
//
//~~~~~~~~~~~~~ >>   Backtracking   << ~~~~~~~~~~~~~~~~
//		
//		    Branch and Bound
//
//~~~~~~~~~~~~~ >>   Backtracking   << ~~~~~~~~~~~~~~~~



class Solution {
private:

	vector<string>SINA;
	int max_level;
	inline bool isok(string foo)
	{
		int tmp_ = 0;
		for (long long i = 0; i < foo.length(); i++)
		{
			if (foo[i] == '(')
			{
				tmp_++;
			}
			else
			{
				tmp_--;
			}
			if (tmp_ < 0)
			{
				break;

			}
		}

		return tmp_ == 0;

	}
	inline void BT(int level, string& input_)
	{


		if (level == max_level)//max_level -> last index
		{
			if (isok(input_))
			{
				//cout << input_ << endl;

				SINA.push_back(input_);
			}

			return;
		}
		else
		{

			if (level == 0)
			{
				input_[level] = '(';
				BT(level + 1, input_);
			}
			else if (level == max_level - 1)
			{
				input_[level] = ')';
				BT(level + 1, input_);
			}
			else
			{
				input_[level] = '(';
				BT(level + 1, input_);
				input_[level] = ')';
				BT(level + 1, input_);

			}

		}
	}



public:
	vector<string> generateParenthesis(int n) {
		string tmp_(2 * n, '?');
		max_level = 2 * n;
		BT(0, tmp_);
		return this->SINA;
	}
};

