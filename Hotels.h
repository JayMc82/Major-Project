#include <iostream>
#include <string>

using namespace std;

class HotelRoom{
private:
    int RoomNum;
    int RoomCapacity;
    int OccupancyStatus;
    double DailyRate;
    string Season;
    
public:public:
    HotelRoom();//default constructor 
    ~HotelRoom();//default destructor
    
      
    /* Accessor functions */
	//get functions
     int Get_Number()
    {
        return RoomNum;
    }
    
    int Get_Capacity()
    {
        return RoomCapacity;
    }
    
    int Get_Status()
    {
        return OccupancyStatus;
    }
    
    double Get_Rate()
    {
        return DailyRate;
    }
    
    string Get_Season()
	{
		return Season;
	}
	
	
    //set functions
    void Set_Number(int num)
    {
    	RoomNum = num;
	}
	
	void Set_Capacity(int Capacity)
	{
		RoomCapacity = Capacity;
	}
	
	void Set_Status(int Occupancy)
	{
		OccupancyStatus = Occupancy;
	}
	
	void Set_Rate(double rate)
	{
		DailyRate = rate;
	}
	
	void Set_Season(string season)
	{
		Season = season;
	}
	
    /** Function Prototypes **/
    int Change_Status(int); 
    void Change_Rate(double);
    void Print();
	void Display();
	void Create_Rooms(int ,int ,double ,string );
};



//Constructor Defined outside of class
HotelRoom::HotelRoom()
{ 
}


//Destructor Defined outside of class
HotelRoom::~HotelRoom()
{
}


void HotelRoom::Print()
{
   
}

void HotelRoom::Create_Rooms(int num,int cap,double rate,string season)
{
	Set_Number(num);
	Set_Capacity(cap);
	Set_Rate(rate);
	Set_Season(season);
}

void HotelRoom::Display()
{
	system("cls");
	cout << "Room Number: " << RoomNum << endl;
	cout << "Capacity: " << RoomCapacity << endl;
	cout << "Rate: " << DailyRate << endl;
	cout << "Status: " << OccupancyStatus << endl;
	cout << "Season: " << Season << endl;
	system("pause");
}

int HotelRoom::Change_Status(int NumOfPersons)
{
	//HotelRoom rooms;
	if(NumOfPersons > Get_Capacity()) 
	{
   		NumOfPersons= -1;
	} else {
 		Set_Status(NumOfPersons);
	}

	return NumOfPersons;
}

void HotelRoom::Change_Rate(double rate)
{
	Set_Rate(rate);
}
