#include <bits/stdc++.h>
using namespace std;

 string GPA_grade (double g)
   {
   if(g>=96 && g<=100)
     return "A+";
   else if(92<=g)
     return "A";
   else if(88<=g)
     return "A-";
   else if(84<=g)
     return "B+";
   else if(80<=g)
     return "B";
     else if(76<=g)
     return "B-";
     else if(72<=g)
     return "C+";
     else if(68<=g)
     return "C";
     else if(64<=g)
     return "C-";
     else if(60<=g)
     return "D+";
     else if(56<=g)
     return "D";
     else if(50<=g)
     return "D-";
   else 
      return "F";

   }
   double GPA_points(double g) {
    if (g>=96 && g<=100) return 4.0;   
    else if (g >= 92) return 4.0;          
    else if (g >= 88) return 3.7;          
    else if (g >= 84) return 3.3;          
    else if (g >= 80) return 3.0;          
    else if (g >= 76) return 2.7;          
    else if (g >= 72) return 2.3;          
    else if (g >= 68) return 2.0;          
    else if (g >= 64) return 1.7;          
    else if (g >= 60) return 1.3; 
    else if (g >= 56) return 1.0;                   
    else if (g >= 50) return 0.7;          
    else return 0.0;                       
   }


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   
   double oldgpa,oldcred;
   cout<<"Enter the previous GPA (if not exist enter 0) : "<<endl;
   cin>>oldgpa;
   cout<<"Enter the previous credit hours (if not exist enter 0) : "<<endl;
   cin>>oldcred;
   int courses_num,hours;
   string name;
   double grade;
      cout<<"Enter the number of courses in this semester: "<<endl;
      cin>>courses_num;          
      cin.ignore();
      double semcred_sum=0,sempoints_sum=0;
      cout<<"The courses details => "<<endl;
     for (int i = 1; i <= courses_num; i++)
      {
      
         cout<<"Enter the course "<<i<<" name :" <<endl;
         getline(cin,name);
         cout<<"Enter the course "<<i<<" credit hours: "<<endl;
         cin>>hours;
         cout<<"Enter the course "<<i<<" grade (from 100): "<<endl;
         cin>>grade;
         double points = GPA_points(grade)*hours;
         semcred_sum+=hours;
         sempoints_sum+=points;
         string cor_grade=GPA_grade(grade);
         cout<<" => The " << name << " grade is: " << cor_grade<<endl;
         cout<<"===================="<<endl;
         cin.ignore();
      }
      double total_credits = oldcred+semcred_sum;
      double total_points  = sempoints_sum+(oldcred*oldgpa);
      double GPA_sem = sempoints_sum/semcred_sum;
      double final_GPA =total_points/total_credits;
      cout<<fixed<<setprecision(2);
      cout<<"The overall CGPA : "<<final_GPA<<endl;

   return 0;
}