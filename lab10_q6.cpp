#include<iostream>
using namespace std;
class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
		ZooAnimal *mother;
    public:
      void Create (char*n, int cn, int wd, int w); // create function
      void Destroy (); // destroy function 
      void changeWeight (int pounds);
      inline void changeWeightDate (int today){weightDate=today;};
		//changeweightDate done here.
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
//compiletr sats scale is not declared . in question there is no hint of scale.
      inline int reptWeightDate ();
      int daysSinceLastWeighed (int today);
		void isMotherOf (ZooAnimal animal);
   };
	inline int ZooAnimal::reptWeightDate ()
	{
		return weightDate;
	}//reptweightdate done here
	void ZooAnimal::isMotherOf(ZooAnimal animal)
	{
	mother=&animal;}//isMotherOf done here

