#include<bits/stdc++.h>
using namespace std;
class Employee{
	protected:
		int emp_id;
	public:
		void get_id(int a){
			emp_id=a;
		}
		void print_id(){
			cout<<"\n Employee id: "<<emp_id;
		}
};
class Salary:virtual public Employee{
	protected:
		float basic,DA,HRA;
	public:
		void get_salary(float b,float d,float h){
			basic=b;
			DA=d;
			HRA=h;
		}
		void print_salary(){
			cout<<"\n Salary is: ";
			cout<<"\n Basic: "<<basic;
			cout<<"\n DA: "<<DA;
			cout<<"\n HRA: "<<HRA;
		}
};
class Incentive:public virtual Employee{
	protected:
		float extra;
	public:
		void get_extra(float e){
			extra=e;
		}
		void print_extra(){
			cout<<"\n Incentive: "<<extra;
		}
};
class CTC:public Salary,public Incentive{
	private:
		float total;
	public:
		void display();
};
void CTC::display(){
	total=basic+DA+HRA+extra;
	print_id();
	print_salary();
	print_extra();
	cout<<"\n Total CTC: "<<total;
}
int main(){
	CTC emp1;
	emp1.get_id(7621);
	emp1.get_salary(25000,10031.50,3760.75);
	emp1.get_extra(7625.30);
	emp1.display();
	
	return 0;
}
