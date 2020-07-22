#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>


struct Student_info {
	// beginning of struct
	std::string name;
	double midterm, final;
	std::vector<double> homework;
};



std::istream& read_hw(std::istream& in, std::vector<double>& homework) {
	if(in) {
		homework.clear();

		double x;
		while(in >> x){
			homework.push_back(x);
		}

		in.clear();
	}

	return in;
}

double median(std::vector<double> grades) {
	typedef std::vector<double>::size_type vec_sz;
	vec_sz size = grades.size();

	if (size == 0) {
		throw std::domain_error("Median is an empty vector");
	}

	sort(grades.begin(), grades.end());

	vec_sz mid = size / 2;

	return size % 2 == 0 ? (grades[mid] + grades[mid-1])/2 : grades[mid];
}


double grades(double midterm, double final, const std::vector<double>& homework) {
	if(homework.size() == 0) {
		throw std::domain_error("Student has done no homework");
	}

	return .02 * midterm + 0.4 * final + 0.4 * median(homework);
}


int main () {



	return 0;
}