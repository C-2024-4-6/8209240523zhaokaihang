#include <iostream>
using namespace std;
class student
{
private:
	int id;
	int score;
public:
	int getid()
	{
		return id;
	}
	int getscore()
	{
		return score;
	}
	student(int id, int score) : id(id), score(score) {}
};
void max(student* a, int size)
{
	int max1 = 0;
	for (int i = 1;i < size;i++)
	{
		if (a[i].getscore() > a[max1].getscore())
		{
			max1 = i;
		}
	}
	cout << "成绩最高的学生的学号是" << a[max1].getid() << endl;
}
int main()
{
	student stu[5] = { 
		student(1,1),
		student(2,2),
		student(3,3),
		student(4,4),
		student(5,5) 
	};
	max(stu, 5);
	return 0;
}