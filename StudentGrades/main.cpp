#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

double grades(double midterm, double final, double homework) {
	return .02 * midterm + 0.4 * final + 0.4 * homework;
}

double median(vector<double> grades) {
	typedef vector<double>::size_type vec_sz;
	vec_sz size = grades.size();

	if(size == 0) {
		throw domain_error("median of an empty vector");
	}

	sort(grades.begin(), grades.end());

	vec_sz mid = size / 2;

	return size % 2 == 0 ? (grades[mid] + grades[mid-1])/2 : grades[mid];
}

int main() {

	string name;
	double midterm, final, medianGrade, x;
	vector<double> homework;

	// ask for and read the student's name
	cout << "Please enter your first name: ";
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	// ask for and read the midterm and final grades
	cout << "Please enter your midterm and final exam grades: ";
	cin >> midterm >> final;

	// ask for the homework grades
	cout << "Enter your homework grades, followed by end-of-file: ";



	while(cin >> x) 
		homework.push_back(x);

	medianGrade = median(homework);


	streamsize prec = cout.precision();
	cout << "Your final grade is: " << setprecision(3)
			<< grades(midterm, final, medianGrade) << endl;

	return 0;
}