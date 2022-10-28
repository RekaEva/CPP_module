#include "iostream"
#include "string"

class Student
{
	private:
		std::string login;
	public:
		Student(): login("Mikki")
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
	Student *students = new Student[3];

	delete [] students;
}
