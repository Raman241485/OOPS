#include <iostream> 

using namespace std; 

class Student 

{ 

    static int count; 

public: 

    Student() 

    { 

        count++; 

    } 

    static void showCount() 

    { 

        cout<<"Total Students: "<<count<<endl; 

    } 

}; 

int Student::count=0; 

int main() 

{ 

    Student s1,s2,s3; 

    Student::showCount(); 

    return 0 ; 

} 

 

OUTPUT :- 

 

LINK OF CODE :- 

https://github.com/parmjeetrao77/oops_file/blob/main/static_members.cpp  

PROGRAM :- 05.  Default ,Parameterized and Copy constructor . 

// Author –Raman kumar-241485 

CODE :- 

#include <iostream> 

using namespace std; 

class Dimension 

{ 

    int x , y; 

public: 

    Dimension() 

    { 

        x=0; 

        y=0; 

        cout<<"Default Constructor "<<"("<<x<<" , "<<y<<")"<<endl; 

    } 

    Dimension(int a , int b) 

    { 

        x=a; 

        y=b; 

        cout<<"Parameterized Constructor "<<"("<<x<<" , "<<y<<")"<<endl; 

    } 

    Dimension(Dimension &n) 

    { 

        x=n.x; 

        y=n.y; 

        cout<<"Copy Constructor "<<"("<<x<<" , "<<y<<")"<<endl; 

    } 

}; 

int main() 

{ 

    Dimension n1; 

    Dimension n2(10,15); 

    Dimension n3(n2); 

    return 0; 

} 
