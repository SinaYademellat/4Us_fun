/**************************************************
**                                               **
**      	SINA_YADEMELLAT                  **
**                                               **
**         sina_yademellat@yahoo.com             **
**                                               **
**************************************************/





// URL: https://leetcode.com/explore/interview/card/top-interview-questions-medium/109/backtracking/795/
//
// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
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




class Solution {
private:
	vector<int> tmp_out;
	vector<vector<int>>out_;
	int max_level = -1;

	bool checkleafo()
	{
		return true;
	}
	bool put(int a, int b, string& A)
	{
		if (a == b)
		{
			return true;
		}
		swap(A[a], A[b]);
		return true;
	}
	void pick(int a, int b, string& A)
	{
		swap(A[a], A[b]);
	}
	void BT(int level, string inp)
	{
		if (level == max_level)
		{
			if (checkleafo())
			{
			/*	string tmp_str = "0";
				tmp_str += inp;
				tmp_out.push_back(stoi(tmp_str));*/
			//	cout << inp << endl;
				for (long long s = 0; s < inp.size(); s++)
				{
					tmp_out.push_back(inp[s] - '0');
				}
				out_.push_back(tmp_out);
				tmp_out.clear();
				return;
			}
		}
		else
		{
			for (int i = level; i < max_level; i++)
			{
				if (put(level, i, inp))
				{
					BT(level + 1, inp);
					pick(level, i, inp);
				}

			}

		}

		/*cout << inp << endl;

		for (int i = level; i < max_level; i++)
		{
			if (put(level, i, inp))
			{
				BT(level + 1, inp);
				pick(level, i, inp);
			}

		}*/
	}


public:
	vector<vector<int>> permute(vector<int>& nums) {

		if (nums.size()==0)
		{
			out_.clear();
			return out_;

		}
		else
		{
			string input_ = "";
			for (int si = 0; si < nums.size(); si++)
			{
				input_ += nums[si] + '0';


			}

			this->max_level = input_.size();
			BT(0, input_);
			//cout << input_ << endl;
		}
		return out_;
	}
};



