#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//[Missing Code 1] Write definition of the function findGrade() here.
char findGrade (float x){
char g;
 if (x > 90.0)
 g = 'A';

 else if (x > 75.0 && x <=90.0)
 g = 'B';

 else if (x > 60.0 && x <= 75.0)
 g = 'C';

 else if (x > 45.0 && x <= 60.0)
 g = 'D';

 else g = 'F';

return g;
 }


int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		//[Missing Code 3] Get score of the i-th students.
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}


    int N,i = 0;
    cout << "Enter the number of students: ";
    cin >> N;
    string name[N];
    float score[N];


    while(i < N){
        cout << "Name of student " << i+1 << ": ";
        cin.ignore();
        getline(cin,name[i]);
        cout << "Score of student " << i+1 << ": ";
        cin >> score[i];
        i++;
    }

    i = 0;
    cout << "---------------------------------------------\n";
    cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
    cout << "---------------------------------------------\n";
    while(i < N){
        cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
        i++;
    } 
    cout << "---------------------------------------------\n";

    return 0;
    }