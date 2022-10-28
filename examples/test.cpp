#include "iostream"
#include "string"

// class Student
// {
// 	private:
// 		std::string login;
// 	public:
// 		Student(): login("Mikki")
// 		{
// 			std::cout << "Student " << this->login << " is born\n";
// 		}
// 		~Student()
// 		{
// 			std::cout << "Student " <<this->login << " died" << std::endl;
// 		}
// };

// int main()
// {
// 	Student *students = new Student[3];

// 	delete [] students;
// }

class Student
{
	private:
		std::string login;
	public:
		Student(std::string login) : login(login)
		{
			std::cout << "Student " << this->login << " is born\n";
		}
		~Student()
		{
			std::cout << "Student " <<this->login << " died" << std::endl;
		}
};

int main()
{
	Student bob = Student("bfubar"); // память выделяется на стеке
	Student*  jim = new Student("jfubar"); // почему указатель?

	// do some stuff here

	delete jim; // jim is desrtoyed
	return (0); // bob is destroyed
}