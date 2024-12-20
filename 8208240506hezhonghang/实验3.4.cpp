#include<iostream>
using namespace std;
class student
{
private:
	char num[4];
	int score;
public:
	student(const char Num[4], int Score)
	{
		for (int i = 0; i < 4; i++)
			num[i] = Num[i];
		score = Score;
	}
	char* get_num()
	{
		return num;
	}
	int get_score()
	{
		return score;
	}
}; 

void max(student *ptr)
{
	student* max_stu = ptr;
	for (int i = 1; i < 5; i++)
		if (ptr[i].get_score() > max_stu->get_score())
			max_stu = &ptr[i];
	cout << "成绩最高的学生学号是：";
	cout<< max_stu->get_num()<<" ";
}
	int main()
	{
		student students[5] = { {"001", 87}, {"002", 91},{"003", 84},{"004",95},{"005",86} };
		max(students);
		return 0;
	}
