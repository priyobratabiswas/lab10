#include<iostream>
using namespace std;
class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      // prototype of create function goes here
		void create(char*n,int cn,int wd, int w);
      void Destroy (); // destroy function 
      char* reptName (); // Returns the reptile name
      int daysSinceLastWeighed (int today);
   };
	//the create function
	void ZooAnimal::create(char*n,int cn,int wd, int w)
	{
		name=n;
		cageNumber=cn;
		weightDate=wd;
		weight=w;
	}
   // -------- member function to return the animal's name
  	char* ZooAnimal::reptName ()
   {
    return name;
   }
	void ZooAnimal::Destroy ()
   {    
    delete [] name;
   }
	int ZooAnimal::daysSinceLastWeighed (int today)
   {
    int startday, thisday;
	//** Edits on Nov 7, 2017
    thisday = today/100*30 + today - (today/100)*100;
    startday = weightDate/100*30 + weightDate - (weightDate/100)*100;
    //if (thisday < startday) 
        //thisday += 360;
    //return (thisday-startday);

	if (today < weightDate) 
        today += 360;
      return (today-weightDate);
   }
   
   // ========== an application to use the ZooAnimal class
	//compiler is unable ti take main function as void
   int main ()
   {
    ZooAnimal bozo;
    bozo.create ("Bozo", 408, 1027, 400);

    cout<< "This animal's name is " << *(bozo.reptName()) << endl;

    bozo.Destroy ();
	 return 0;
   }

