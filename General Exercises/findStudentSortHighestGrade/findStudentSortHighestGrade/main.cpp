#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
#include<array>
#include<vector>
#include<iterator>
#include<numeric>
using namespace std;

struct Student {
	string name{};
	int grade{};
};

int enterStudentAmount() {
	cout << "How many students do you want to enter?" << "\n";
	int numOfStudents{};
	cin >> numOfStudents;
	return numOfStudents;
}

Student getStudentInfo() {
	Student student{};
	cout << "Enter name: ";
	cin >> student.name;
	cout << "Enter grade: ";
	cin >> student.grade;
	return student;
}

bool compareStudents(const Student& a, const Student& b) {
	return (a.grade > b.grade);
}

int main() {

	int studentAmount{ enterStudentAmount() };
	vector<Student> student(studentAmount);

	cout << "Input the name and grade of the student: " << "\n";

	for (int i{ 0 }; i < studentAmount; ++i) {
		student[i] = getStudentInfo();
	}

	sort(student.begin(), student.end(), compareStudents);

	for (int i{ 0 }; i < studentAmount; ++i) {
		cout << student[i].name << "s grade is " << student[i].grade << "\n";
	}

	return 0;
}