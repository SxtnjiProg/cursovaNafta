#include <iostream>
 #include <conio.h>
 #include <stdlib.h>
 #include <cstdlib>
 #include <fstream>
 #include <string>
 #include <sstream>
 #include <vector>
 #include <cstring>
 #include <iomanip>
 #include <algorithm>
 #include <iterator>
 #include <random>
 #include <ctime>
 
using namespace std;

class Vehicle {
public: 
    string typeofVehicle,
    number;
    int year;
    double engineVolume;
    string engineNumber,
    chassisNumber,
    bodyNumber,
    color;
    bool inAccident;
    bool isInspected;
    
    string gettypeofVehicle() const {
    return typeofVehicle;
}
	
	string getNumber() const {
        return number;
    }
    
    bool getInAccident() const { 
	return inAccident; 
	}
	
	void setVehicleDetails(string tTypeofVehicle, string tNumber)
{
    typeofVehicle = tTypeofVehicle;
    number = tNumber;

}
	
    friend ostream& operator<<(ostream& out, const Vehicle& obj) {
        out << obj.typeofVehicle << endl <<  obj.number << endl;
        return out;
    }
    friend istream& operator>>(istream& in, Vehicle& obj) {
	in >> obj.typeofVehicle >> obj.number ;
 	return in;
	   }
}; 

class PrivateOwner : public Vehicle {
public:
    std::string ownerName;
    std::string address;
    std::string carBrand;

void setPrivateOwner(std::string tofVehicle, std::string tNumber, std::string tOwnerName, std::string tAddress,
                     std::string tCarBrand, int tYear, double tEngineVolume, std::string tEngineNumber,
                     std::string tChassisNumber, std::string tBodyNumber, std::string tColor, bool tinAccident, bool tisInspected) {
    typeofVehicle = tofVehicle;
    number = tNumber;
    ownerName = tOwnerName;
    address = tAddress;
    carBrand = tCarBrand;
    year = tYear;
    engineVolume = tEngineVolume;
    engineNumber = tEngineNumber;
    chassisNumber = tChassisNumber;
    bodyNumber = tBodyNumber;
    color = tColor;
   	inAccident = tinAccident;
   	isInspected = tisInspected;
}

void getPrivateOwner() const {
	 cout << "------------------------" << endl;
    cout << "Type of vehicle: " << typeofVehicle << "\nCar number: " << number << "\nOwner name: " << ownerName << "\nAddress: " << address
        << "\nCar brand: " << carBrand << "\nYear of manufacture: " << year << "\nEngine volume: " << engineVolume
        << "\nEngine number: " << engineNumber << "\nChassis number: " << chassisNumber
        << "\nBody number: " << bodyNumber << "\nColor: " << color << "\nHas been in accident: " << std::boolalpha << inAccident
        << "\nHas passed inspection: " << boolalpha << isInspected << endl;
         cout << "------------------------" << endl;
}

friend std::istream& operator>>(std::istream& in, PrivateOwner& obj) {
    in >> obj.typeofVehicle >> obj.number >> obj.ownerName >> obj.address >> obj.carBrand >> obj.year >> obj.engineVolume
        >> obj.engineNumber >> obj.chassisNumber >> obj.bodyNumber >> obj.color >> obj.inAccident >> obj.isInspected;
    return in;
}

friend std::ostream& operator<<(std::ostream& out, const PrivateOwner& obj) {
    out << obj.typeofVehicle << " " << obj.number << " " << obj.ownerName << " " << obj.address << " " << obj.carBrand << " " << obj.year << " "
        << obj.engineVolume << " " << obj.engineNumber << " " << obj.chassisNumber << " " << obj.bodyNumber << " "
        << obj.color << " " << obj.inAccident << " " << obj.isInspected;
    return out;
}
};

class OrganizationOwner : public Vehicle {
public:
    string organizationName;
    string district;
    string address;
    string directorName;
    string brand;

    	string getOrganizationName() const {
        return organizationName;
    }
   
    	void setOrganizationOwner(std::string tofVehicle, std::string tNumber, std::string tOrganizationName, std::string tDistrict,
                          std::string tAddress, std::string tDirectorName, std::string tBrand, int tYear,
                          double tEngineVolume, std::string tEngineNumber, std::string tChassisNumber,
                          std::string tBodyNumber, std::string tColor, bool tinAccident, bool tisInspected){
						  
    typeofVehicle = tofVehicle;
    number = tNumber;
    organizationName = tOrganizationName;
    district = tDistrict;
    address = tAddress;
    directorName = tDirectorName;
    brand = tBrand;
    year = tYear;
    engineVolume = tEngineVolume;
    engineNumber = tEngineNumber;
    chassisNumber = tChassisNumber;
    bodyNumber = tBodyNumber;
    color = tColor;
    inAccident = tinAccident;
    isInspected = tisInspected;
}

void getOrganizationOwner() const {
    cout << "------------------------" << endl;
    cout << "Type of vehicle: " << typeofVehicle << "\nCar number: " << number << "\nOrganization name: " << organizationName << "\nDistrict: " << district
        << "\nAddress: " << address << "\nDirector name: " << directorName << "\nCar brand: " << brand << "\nYear of manufacture: " << year
        << "\nEngine volume: " << engineVolume << "\nEngine number: " << engineNumber << "\nChassis number: " << chassisNumber
        << "\nBody number: " << bodyNumber << "\nColor: " << color << "\nHas been in accident: " << boolalpha << inAccident
        << "\nHas passed inspection: " << boolalpha << isInspected << endl;
    cout << "------------------------" << endl;
}

friend std::istream& operator>>(std::istream& in, OrganizationOwner& obj) {
    in >> obj.typeofVehicle >> obj.number >> obj.organizationName >> obj.district >> obj.address >> obj.directorName >> obj.brand >> obj.year
        >> obj.engineVolume >> obj.engineNumber >> obj.chassisNumber >> obj.bodyNumber >> obj.color >> obj.inAccident >> obj.isInspected;
    return in;
}

friend ostream& operator<<(ostream& out, const OrganizationOwner& obj) {
    out << obj.typeofVehicle << " " << obj.number << " " << obj.organizationName << " " << obj.district << " " << obj.address << " " << obj.directorName << " " << obj.brand << " " <<	
         obj.year << " " << obj.engineVolume << " " << obj.engineNumber << " " << obj.chassisNumber << " "
        << obj.bodyNumber << " " << obj.color << " " << obj.inAccident << " " << obj.isInspected;
    return out;
}
    
};

class Accident : public Vehicle {
public:
    string date;
    string typeOfEvent;
    string location;
    int numberOfInjuries;
    double totalDamage;
    string causeofacc;
	vector<Vehicle> vehicles;
    
	void setAccidentDetails(string tDate, string tTypeOfEvent, string tLocation,
                            int tNumberOfInjuries, double tTotalDamage, string tcauseofacc, const vector<Vehicle>& tVehicles) {
        date = tDate;
        typeOfEvent = tTypeOfEvent;
        location = tLocation;
        vehicles = tVehicles;
        causeofacc = tcauseofacc;
        numberOfInjuries = tNumberOfInjuries;
        totalDamage = tTotalDamage;
        
    }
     void getAccidentDetails() const {
    cout << "Date: " << date << endl;
    cout << "Type of event: " << typeOfEvent << endl;
    cout << "Location: " << location << endl;
    cout << "Number of injuries: " << numberOfInjuries << endl;
    cout << "Total damage: " << totalDamage << endl;
    cout << "Cause: " << causeofacc << endl;
    cout << "Vehicles involved:" << endl;

    for (const auto& v : vehicles) {
        cout << v.typeofVehicle << endl;
        cout << v.number << endl;
    }

    cout << endl;
}
 	string getCause() const {
	 	 return causeofacc; 
	 
	 }

friend ostream& operator<<(ostream& out, const Accident& obj) {
        out << obj.date << " " << obj.typeOfEvent << " " << obj.location << " " << obj.numberOfInjuries << " " << obj.totalDamage << " " << obj.causeofacc << " " << obj.vehicles.size() << endl;
        for (const auto& vehicle : obj.vehicles) {
            out << vehicle << endl;
        }
        return out;
    }
    friend istream& operator>>(istream& in, Accident& obj) {
        size_t numVehicles;
        in >> obj.date >> obj.typeOfEvent >> obj.location >> obj.numberOfInjuries >> obj.totalDamage >> obj.causeofacc >> numVehicles;
        obj.vehicles.clear();
        for (size_t i = 0; i < numVehicles; i++) {
            Vehicle vehicle;
            in >> vehicle;
            obj.vehicles.push_back(vehicle);
        }
        return in;
    }

}; 

class stolencars : public Vehicle {

public:
	string date;
	string brand;
    bool isStolen;
    bool isSearchInProgress;
    bool isfound;
    bool escaped; 
    string alarmType;
    string alarmBypassMethod;

	void setStolencar(string tDate, string tbrand,  string tTypeofVehicle, string tNumber, bool tIsStolen, bool tIsSearchInProgress, bool tIsFound, bool tescaped,
        string tAlarmType, string tAlarmBypassMethod) {
        date = tDate;
        brand = tbrand;
		typeofVehicle = tTypeofVehicle;
        number = tNumber;
        isStolen = tIsStolen;
        isSearchInProgress = tIsSearchInProgress;
        isfound = tIsFound;
        escaped = tescaped; 
        alarmType = tAlarmType;
        alarmBypassMethod = tAlarmBypassMethod;
        
    }

    void getStolencar() const {
        cout << "Date: " << date << "\nCar Brand: "<< brand << "\nType of vehicle: " << typeofVehicle << "\nCar number: " << number << "\nIs stolen: " << boolalpha << isStolen
            << "\nIs search in progress: " << isSearchInProgress << "\nIs found: " << isfound << "\nFled the scene of an accident: " << escaped << "\nAlarm type: " << alarmType
            << "\nAlarm bypass method: " << alarmBypassMethod << endl;
    }


    friend ostream& operator<<(ostream& out, const stolencars& obj) {
    const Vehicle& baseObj = obj;
    out << baseObj << " " << obj.date << " " << obj.brand << ""
        << obj.isStolen << " " << obj.isSearchInProgress << " " << obj.isfound << " " << obj.escaped << " "<< obj.alarmType << " " << obj.alarmBypassMethod;
    return out;
}

friend istream& operator>>(istream& in, stolencars& obj) {
    Vehicle& baseObj = obj;
    in >> obj.date >> obj.brand >>  baseObj >> obj.isStolen >> obj.isSearchInProgress >> obj.isfound >> obj.escaped
        >> obj.alarmType >> obj.alarmBypassMethod;
    return in;
}
};


//���������� �� ����� ��������� ��������
void saveToFile(const vector<PrivateOwner>& owners, const string& filename) {
    std::ofstream file(filename, std::ios::out | std::ios::trunc); 
    if (!file.is_open()) {
        std::cerr << "Error: could not open file " << filename << " for writing." << std::endl;
        return;
    }
    for (const auto& owner : owners) {
        file << owner << std::endl;
    }
    file.close();
}
//���������� �� ����� �������� ����������
void saveToFileOrg(const vector<OrganizationOwner>& owners2, const string& filename) {
    std::ofstream file(filename, std::ios::out | std::ios::trunc); 
    if (!file.is_open()) {
        std::cerr << "Error: could not open file " << filename << " for writing." << std::endl;
        return;
    }
    for (const auto& owner : owners2) {
        file << owner << endl;
    }
    file.close();
}
//���������� �� ����� ���
void saveToFileAcc(const vector<Accident>& accidents, const string& filename) {
    std::ofstream file(filename, ios::out | std::ios::trunc);
    if (!file.is_open()) {
        cerr << "Error: could not open file " << filename << " for writing." << endl;
        return;
    }

    for (const auto& accident : accidents) {
        file << accident << endl;
    }

    file.close();
}
//������� ���������� ��� ��������� ��������
void readDataPowners(vector<PrivateOwner>& owners) { 

    ifstream file("owners.txt");

    if (!file.is_open()) {
        cerr << "Failed to open file." << std::endl;
        return;
    }
	else{
	
    string line;
    while (getline(file, line)) {
        PrivateOwner owner;
        stringstream ss(line);
        string vehicleType, number, ownerName, address, carBrand, engineNumber, chassisNumber, bodyNumber, color;
        int year;
        double engineVolume;
         bool inAccident;
    	 bool isInspected;

        // read data from line
        ss >> vehicleType >> number >> ownerName >> address >> carBrand >> year >> engineVolume >> engineNumber >> chassisNumber >> bodyNumber >> color >> inAccident >> isInspected ;
		
        // set data to owner object
        owner.typeofVehicle = vehicleType;
        owner.number = number;
        owner.ownerName = ownerName;
        owner.address = address;
        owner.carBrand = carBrand;
        owner.year = year;
        owner.engineVolume = engineVolume;
        owner.engineNumber = engineNumber;
        owner.chassisNumber = chassisNumber;
        owner.bodyNumber = bodyNumber;
        owner.color = color;
        owner.inAccident = inAccident;
		owner.isInspected =	isInspected;

        owners.push_back(owner);
    }
}
    file.close();
}
//������� ���������� ��� ��������� ��������
void readDataOowners(vector<OrganizationOwner>& owners2) {
	 ifstream file("owners2.txt");
  	  if (!file.is_open()) {
    cerr << "Failed to open file." << std::endl;
    return;
}
 else{

 string line;
 while (std::getline(file, line)) {
    OrganizationOwner owner;
    stringstream ss(line);
    string vehicleType, number, organizationName, district, address, directorName, brand;
    int year;
    double engineVolume;
    string engineNumber, chassisNumber, bodyNumber, color;
    bool inAccident;
    bool isInspected;

    // read data from\ line
    ss >> vehicleType >> number >> organizationName >> district >> address >> directorName >> brand >> year >> engineVolume >> engineNumber >> chassisNumber >> bodyNumber >> color >> inAccident >> isInspected;
	
    // set data to owner object
    owner.typeofVehicle = vehicleType;
    owner.number = number;
    owner.organizationName = organizationName;
    owner.district = district;
    owner.address = address;
    owner.directorName = directorName;
    owner.brand = brand;
    owner.year = year;
    owner.engineVolume = engineVolume;
    owner.engineNumber = engineNumber;
    owner.chassisNumber = chassisNumber;
    owner.bodyNumber = bodyNumber;
    owner.color = color;
    owner.inAccident = inAccident;
	owner.isInspected = isInspected;

    owners2.push_back(owner);
				}
 	}
	file.close();
 }

void printAccidents(const vector<Accident>& accidents) {
    for (const auto& accident : accidents) {
        cout << "Date: " << accident.date << endl;
        cout << "Type of event: " << accident.typeOfEvent << endl;
        cout << "Location: " << accident.location << endl;
        cout << "Number of injuries: " << accident.numberOfInjuries << endl;
        cout << "Total damage: " << accident.totalDamage << endl;
        cout << "Vehicles involved:" << endl;
        for (const auto& vehicle : accident.vehicles) {
            cout << vehicle.typeofVehicle << endl;
            cout << vehicle.number << endl;
            cout << endl;
        }

        cout << endl;
    }
}
//��������� ���������� ��������
void addOwner(vector<PrivateOwner>& owners) {
    PrivateOwner owner;
    cout << "Enter owner details:" << endl;
    cout << "Type of vehicle: ";
    cin >> owner.typeofVehicle;
    cout << "Number: ";
    cin >> owner.number;

    // �������� �� �������� ������ � ������
    for (const auto& existing_owner : owners) {
        if (existing_owner.number == owner.number) {
            cerr << "Error: This number is already registered to another owner." << endl;
            return addOwner(owners);
        }
    }

    cout << "Owner name: ";
    cin >> owner.ownerName;
    cout << "Address: ";
    cin >> owner.address;
    cout << "Car brand: ";
    cin >> owner.carBrand;
    cout << "Year: ";
    cin >> owner.year;
    cout << "Engine volume: ";
    cin >> owner.engineVolume;
    cout << "Engine number: ";
    cin >> owner.engineNumber;
    cout << "Chassis number: ";
    cin >> owner.chassisNumber;
    cout << "Body number: ";
    cin >> owner.bodyNumber;
    cout << "Color: ";
    cin >> owner.color;
    cout << "Has been in accident? (1 or 0): ";
	cin >> owner.inAccident;
	cout << "Has passed inspection? (1 or 0): "; 
	cin >> owner.isInspected;
    owners.push_back(owner);

    std::ofstream file("owners.txt", ios::app);
    if (file.is_open()) {
        file << owner.typeofVehicle << " " << owner.number << " " << owner.ownerName << " " << owner.address << " " << owner.carBrand << " "
             << owner.year << " " << owner.engineVolume << " " << owner.engineNumber << " " << owner.chassisNumber << " " << owner.bodyNumber << " "
             << owner.color << " " <<  owner.inAccident << " " << owner.isInspected << endl;
        file.close();
    } else {
        std::cerr << "Failed to open file for writing." << std::endl;
    }

    saveToFile(owners, "owners.txt");
}

void addOrgOwner(vector<OrganizationOwner>& owners2) {
    OrganizationOwner owner;
    cout << "Enter owner details:" << endl;
    cout << "Type of vehicle: ";
    cin >> owner.typeofVehicle;
    cout << "Number: ";
    cin >> owner.number;

    // �������� �� �������� ������ � ������
    for (const auto& existing_owner : owners2) {
        if (existing_owner.number == owner.number) {
            cerr << "Error: This number is already registered to another owner." << endl;
            return addOrgOwner(owners2);
        }
    }

    cout << "Organization name: ";
    cin >> owner.organizationName;
    cout << "District: ";
    cin >> owner.district;
    cout << "Address: ";
    cin >> owner.address;
    cout << "Director name: ";
    cin >> owner.directorName;
    cout << "Car brand: ";
    cin >> owner.brand;
    cout << "Year: ";
    cin >> owner.year;
    cout << "Engine volume: ";
    cin >> owner.engineVolume;
    cout << "Engine number: ";
    cin >> owner.engineNumber;
    cout << "Chassis number: ";
    cin >> owner.chassisNumber;
    cout << "Body number: ";
    cin >> owner.bodyNumber;
    cout << "Color: ";
    cin >> owner.color;
    cout << "Has been in accident? (1 or 0): ";
    cin >> owner.inAccident;
    cout << "Has passed inspection? (1 or 0): ";
    cin >> owner.isInspected;
    owners2.push_back(owner);

    std::ofstream file("owners2.txt", ios::app);
    if (file.is_open()) {
        file << owner.typeofVehicle << " " << owner.number << " " << owner.organizationName << " " << owner.district << " " << owner.address << " " << owner.directorName << " "
             << owner.brand << " " << owner.year << " " << owner.engineVolume << " " << owner.engineNumber << " " << owner.chassisNumber << " " << owner.bodyNumber << " "
             << owner.color << " " <<  owner.inAccident << " " << owner.isInspected << endl;
        file.close();
    } else {
        std::cerr << "Failed to open file for writing." << std::endl;
    }

    saveToFileOrg(owners2, "owners2.txt");
}

void generatePrivateOwnerFile() {
    vector<PrivateOwner> owners;

    ifstream file("owners.txt");
    if (file.good()) {
        return;
    }
	

    PrivateOwner owner, owner1, owner2, owner3, owner4, owner5, owner6, owner7;
	owner.setPrivateOwner("car", "AA1234BB", "Max_Parhomenko", "str._Grushevskogo_4", "Toyota", 2010, 2.5, "3217554", "1234567890", "1234567890", "Red", false, true );

	owner1.setPrivateOwner("car", "AH1234BD", "Mar'yana_Boyko", "Stepana_Banderi_st._12", "Toyota", 2010, 2.5, "3213554", "1234567809", "1234569099", "Red", false, true);

	owner2.setPrivateOwner("car", "BC5678DE", "Oleksandr_Kravets", "8_Bulvarno-Kudryavska_vul.", "Honda", 2015, 1.8, "1288999", "2345678912", "2345678912", "Silver", true , true);

	owner3.setPrivateOwner("car", "CD9012EF", "Natalia_Shevchenko", "16_Sahaydachnogo_St.", "Mazda", 2018, 2.0, "2333788", "3456789123", "3456789123", "Black", false, false );
	
	owner4.setPrivateOwner("car", "DE3456FG", "Oksana_Bila", "vul.Tarasivska_20", "Nissan", 2019, 2.5, "3900999", "4567891234", "4567891234", "Blue", false, false );
     
  	owner5.setPrivateOwner("car", "FG7890GH", "Evgeniya_Ivanenko", "14_Chornovola_St.", "BMW", 2017, 2.2, "4677888", "5678912345", "5678912345", "White", false, true );

    owner6.setPrivateOwner("car", "GH2345IJ", "Vitaliy_Shevchenko", "Knyagini_Olga_st._2", "Audi", 2021, 2.0, "5999555", "6789123456", "6789123456", "Black", true, true);

	owner7.setPrivateOwner("truc", "GH2325IJ", "Vitaliy_Shevchenko", "Knyagini_Olga_st._2", "Ford", 2015, 2.5, "5999555", "6789123456", "6789123456", "Black", true, true);
    owners.push_back(owner);
    owners.push_back(owner1);
    owners.push_back(owner2);
    owners.push_back(owner3);
    owners.push_back(owner4);
    owners.push_back(owner5);
    owners.push_back(owner6);
    owners.push_back(owner7);
	ofstream outfile("owners.txt");


    if (!outfile.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return;
    }
    
    // ����� ����� � ����
    saveToFile(owners, "owners.txt");

    outfile.close();
}

void generateOrganizationOwnerFile() {
    vector<OrganizationOwner> owners2;

    ifstream file("owners2.txt");
    if (file.good()) {
        return;
    }

    // ��������� ��'���� ����� OrganizationOwner
    OrganizationOwner owner1;
    owner1.setOrganizationOwner("Car", "AH7642AD", "Autocentr/Max/", "Sokylyky", "Zelenskogo_21", "Max_Parhomenko", "Ford", 2018, 1.2, "123123433", "123213213", "34324324", "red", true, false);
    
    owners2.push_back(owner1);

    OrganizationOwner owner2;
    owner2.setOrganizationOwner("Car", "AA1234BB", "Coca-Cola.inc", "Podilskyi", "Varinykiv_21", "Bogdan_Derzkiy", "Ford", 2012, 2.3, "32324234", "1233667890", "12334454890", "Coca-cola", true, true);
    owners2.push_back(owner2);

    OrganizationOwner owner3;
    owner3.setOrganizationOwner("Truck", "BC5678DE", "ABC_Company", "Shevchenkivskyi", "Morskaya_12", "John_Doe", "Volvo", 2015, 3.0, "9876543", "0987654321", "0987654321", "Blue", true, true);
    owners2.push_back(owner3);
    
    OrganizationOwner owner4;
    owner4.setOrganizationOwner("Car", "AA1234AA", "Maxmara", "Sokylnyky", "St_Olgy_21", "Max_Kuziv", "ford", 2005, 1.2, "123213", "123123", "12333", "red", true, true);
    owners2.push_back(owner4);


    ofstream outfile("owners2.txt");

    if (!outfile.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return;
    }
    
    // ����� ����� � ����
    saveToFileOrg(owners2, "owners2.txt"); 
    
    outfile.close();
}
vector<Accident> createAccidents() {
    vector<Accident> accidents;
    
    // ��������� ����� ����� �� ������ �� �����
    vector<Vehicle> vehicles1;
    Vehicle vehicle1;
    vehicle1.setVehicleDetails("Truck", "AA9182AP");
    vehicles1.push_back(vehicle1);
    Vehicle vehicle2;
    vehicle2.setVehicleDetails("Car", "BB2345AC");
    vehicles1.push_back(vehicle2);
    Accident accident1;
    accident1.setAccidentDetails("2023-05-13", "Collision", "S.Bandery",  2, 5000.2, "Drunken state of one of the drivers", vehicles1);
    accidents.push_back(accident1);

    // ��������� ����� ����� �� ������ �� �����
    vector<Vehicle> vehicles2;
    Vehicle vehicle3;
    vehicle3.setVehicleDetails("Motorcycle", "CC3456BD");
    vehicles2.push_back(vehicle3);
    Vehicle vehicle4;
    vehicle4.setVehicleDetails("Van", "DD4567CE");
    vehicles2.push_back(vehicle4);
    Accident accident2;
    accident2.setAccidentDetails("2023-07-29", "Rear-end_collision", "Morskaya", 1, 3000.2, "Wet road", vehicles2);
    accidents.push_back(accident2);

	vector<Vehicle> vehicles3;
	Vehicle vehicle5;
	vehicle5.setVehicleDetails("Bus", "AH1239BR");
	vehicles3.push_back(vehicle5);
	Vehicle vehicle6;
	vehicle6.setVehicleDetails("Car", "AP4547CE");
	vehicles3.push_back(vehicle6);
	Accident accident3;
	accident3.setAccidentDetails("2023-05-14", "Head-on_collision", "Morskaya", 7, 54000, "Drunken state of one of the drivers", vehicles3);
	accidents.push_back(accident3);
    saveToFileAcc(accidents, "accidents.txt"); 
	return accidents;
}

vector<stolencars> generatestolencars() {
    vector<stolencars> cars;

    stolencars car1, car2, car3, car4;

	
    car1.setStolencar("2023-01-22", "Ford", "car", "AA1234BB", true, false, true, false, "GPS tracking alarm", "Keyless entry hacking");
  

    car2.setStolencar("2023-06-01", "Mercedes", "car", "AH1234BD", false, true, false, true, "Passive alarm", " ");
    
    car3.setStolencar("2023-06-18", "Mercedes","motocyle", "AP9568HB", false, true, true, true, "Active alarm", " ");
   
   	car4.setStolencar("2023-02-18", "BMW" ,"car", "AP9411HH", true, true, true, false, "Active alarm", "Electronic immobilizer hacking");

    cars.push_back(car1);
    cars.push_back(car2);
    cars.push_back(car3); 
	cars.push_back(car4); 
 
	return cars;
}

void printAccidentDetails(const vector<Accident>& accidents) {
    for (const auto& accident : accidents) {
        accident.getAccidentDetails();
    }
}
//����� �� ������ �������� ���������� ��������
void searchByNumber(const vector<PrivateOwner>& owners) {
	string number;
	cout << "Enter the car number to search: ";
	cin >> number;

	bool found = false;
	for (const auto& owner : owners) {
    	if (owner.getNumber() == number) {
           owner.getPrivateOwner();
           found = true;
        break;
    }
}
 	if (!found) {
    std::cout << "No car owner with the number " << number << " was found" << std::endl;
	}
  
}

void searchByNumberOrg(const vector<OrganizationOwner>& owners2) {
	string number;
	cout << "Enter the car number to search: ";
	cin >> number;

	bool found = false;
	for (const auto& owner : owners2) {
    	if (owner.getNumber() == number) {
           owner.getOrganizationOwner();
           found = true;
        break;
    }
}
 	if (!found) {
    std::cout << "No car owner with the number " << number << " was found" << std::endl;
	}
  
}
//����� �� ���� ������ ����������
void printOrganizationsWithSeries(vector<OrganizationOwner>& owners2) {
    string series;
    cout << "Enter the series: ";
    cin >> series;

    int count = 0;
    for (auto owner : owners2) {
        if (owner.getNumber().find(series) == 0) {
            cout << owner.getOrganizationName() << endl;
            count++;
        }
    }
    cout << "Total organizations with series " << series << ": " << count << endl;
}

void deleteByNumber(vector<PrivateOwner>& owners, const string& number){
    auto it = find_if(owners.begin(), owners.end(), [&](const PrivateOwner& owner) {
        return owner.number == number;
    }); 
    if (it != owners.end()) { 
        owners.erase(it); 
        cout << "Owner with number " << number << " has been deleted." << endl;
        saveToFile(owners, "owners.txt"); 
    } else {
        cout << "Owner with number " << number << " was not found." << endl;
    }
}

void deleteByNumberOrg(vector<OrganizationOwner>& owners2, const string& number){
    auto it = find_if(owners2.begin(), owners2.end(), [&](const OrganizationOwner& owner2) {
        return owner2.number == number;
    }); 
    if (it != owners2.end()) { 
        owners2.erase(it); 
        cout << "Owner with number " << number << " has been deleted." << endl;
        saveToFileOrg(owners2, "owners2.txt"); 
    } else {
        cout << "Owner with number " << number << " was not found." << endl;
    }
}

string generateCarNumber(const string& series, int range) {
    static random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1000, 9999);

    int number = dis(gen) % range + 1;
    string carNumber = series + to_string(number / 1000) + to_string((number / 100) % 10)
        + to_string((number / 10) % 10) + to_string(number % 10) + (char)(dis(gen) % 26 + 'A') + (char)(dis(gen) % 26 + 'A');
    return carNumber;
}

void generateCarNumberMenu() {
    string series;
    int range;

    cout << "Enter series of car number: ";
    cin >> series;
    cout << "Enter range: ";
    cin >> range;

    // ��������� �'��� ������ � ���������� �� � ������
    vector<string> carNumbers;
    for (int i = 0; i < 5; i++) {
        string carNumber = generateCarNumber(series, range);
        carNumbers.push_back(carNumber);
    }

    // ³������� ����� ��� ������ ������
    ofstream outfile("generated_numbers.txt", ios::trunc);
    if (!outfile) {
        cerr << "Error: Failed to create file!" << endl;
        return;
    }

    // ����� ��� ��������� � ����
    outfile << series << ":" << endl;

    // ��������� ��� ��������� �� ������ � ������� � ����� �� � ����
    for (int i = 0; i < carNumbers.size(); i++) {
        cout << series << " " << carNumbers[i] << endl;
        outfile << series << " " << carNumbers[i] << endl;
    }

    // �������� �����
    outfile.close();
    
}

void printGeneratedCarNumbers() {
    ifstream infile("generated_numbers.txt");
    if (!infile) {
        cerr << "Error: Failed to open file!" << endl;
        return;
    }

    string carNumber;
    cout << "Generated car numbers:" << endl;
    while (getline(infile, carNumber)) {
        cout << carNumber << endl;
    }

    infile.close();
}

void searchPrvtInf(const vector<PrivateOwner>& owners) {
	 string number;
	 cout << "Enter the car number to search: ";
	 cin >> number;

	 bool found = false;
	 for (const auto& owner : owners) {
    if (owner.getNumber() == number) {
    	cout << "------------------------" << endl;
        cout << "Owner name: " << owner.ownerName <<endl;
        cout << "Address: " << owner.address << endl;
        cout << "------------------------" << endl;
        found = true;
        break;
    }
}
if (!found) {
    std::cout << "No car owner with the number " << number << " was found" << std::endl;
}
}

void searchOwners12(bool isInspected, const std::vector<PrivateOwner>& owners1, const vector<OrganizationOwner>& owners2) {
    bool found = false;
    for (const auto& owner : owners1) {
        if (owner.isInspected == isInspected) {
            std::cout << "Private owner found:\n";
            std::cout << "Number: " << owner.number << "\n";
            std::cout << "Owner name: " << owner.ownerName << "\n";
            std::cout << "Address: " << owner.address << "\n\n";
            found = true;
        }
    }
    for (const auto& owner : owners2) {
        if (owner.isInspected == isInspected) {
            std::cout << "Organization owner found:\n";
            std::cout << "Number: " << owner.number << "\n";
            std::cout << "Organization name: " << owner.organizationName << "\n";
            std::cout << "District: " << owner.district << "\n";
            std::cout << "Address: " << owner.address << "\n";
            std::cout << "Director name: " << owner.directorName << "\n\n";
            found = true;
        }
    }
    if (!found) {
        std::cout << "No owner found with the given isInspected value.\n";
    }
}

void getAccidentsStatisticsByPeriod(const vector<Accident>& accidents) {
    string startDate, endDate;
    cout << "Enter the start date (YYYY-MM-DD): ";
    cin >> startDate;
    cout << "Enter the end date (YYYY-MM-DD): ";
    cin >> endDate;

    int totalAccidents = 0;
    int totalInjuries = 0;
    double totalDamage = 0.0;

    for (const auto& accident : accidents) {
        if (accident.date >= startDate && accident.date <= endDate) {
            totalAccidents++;
            totalInjuries += accident.numberOfInjuries;
            totalDamage += accident.totalDamage;
        }
    }

    cout << "Accident statistics for the period " << startDate << " to " << endDate << ":" << endl;
    cout << "Total accidents: " << totalAccidents << endl;
    cout << "Total injuries: " << totalInjuries << endl;
    cout << "Total damage: " << totalDamage << endl;
}

void getMostDangerousLocation(const vector<Accident>& accidents) {
    int maxCount = 0;
    string mostDangerousLocation;

    for (const auto& accident : accidents) {
        string currentLocation = accident.location;
        int currentCount = 0;

        for (const auto& otherAccident : accidents) {
            if (otherAccident.location == currentLocation) {
                currentCount++;
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostDangerousLocation = currentLocation;
        }
    }

    cout << "The most dangerous location: " << mostDangerousLocation << endl;
    cout << "Number of accidents at the most dangerous location: " << maxCount << endl;
}

void getMostFrequentCause(const vector<Accident>& accidents) {
    int maxCount = 0;
    string mostFrequentCause;

    for (const auto& accident : accidents) {
        string currentCause = accident.causeofacc;
        int currentCount = 0;

        for (const auto& otherAccident : accidents) {
            if (otherAccident.causeofacc == currentCause) {
                currentCount++;
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequentCause = currentCause;
        }
    }

    cout << "The most frequent cause of accidents: " << mostFrequentCause << endl;
}

void getDrunkDrivingStats(const vector<Accident>& accidents) {
    int totalAccidents = accidents.size();
    int drunkDrivingAccidents = 0;

    for (const auto& accident : accidents) {
        if (accident.getCause() == "Drunken state of one of the drivers") {
            drunkDrivingAccidents++;
        }
    }

    double drunkDrivingPercentage = (drunkDrivingAccidents * 100.0) / totalAccidents;

    cout << "Number of accidents caused by drunk drivers: " << drunkDrivingAccidents << endl;
    cout << "Percentage of accidents caused by drunk drivers: " << drunkDrivingPercentage << "%" << endl;
}
void printStolenCars(const vector<stolencars>& cars) {
    cout << "The list of wanted cars with drivers who disappeared from the scene of the accident or the cars were stolen:" << endl;
    for (const auto& car : cars) {
        if (car.isSearchInProgress || car.isStolen) {
            car.getStolencar();
            cout << endl;
        }
    }
}

void calculateSearchEfficiency(const vector<stolencars>& cars) {
    int totalCars = cars.size();
    int foundCars = 0;

    for (const auto& car : cars) {
        if (car.isfound) {
            foundCars++;
        }
    }

    double efficiency = (foundCars * 100.0) / totalCars;

   cout << "Search efficiency: " << efficiency << "% (" << foundCars << " out of " << totalCars << " cars found)" << endl;
}
void getStolenCarsStatisticsByPeriod(const vector<stolencars>& cars) {
    string startDate, endDate;
    cout << "Enter the start date (YYYY-MM-DD): ";
    cin >> startDate;
    cout << "Enter the end date (YYYY-MM-DD): ";
    cin >> endDate;

    int totalStolenCars = 0;

    for (const auto& car : cars) {
        if (car.date >= startDate && car.date <= endDate) {
            totalStolenCars++;
            car.getStolencar();
            cout << endl;
        }
    }

    cout << "Stolen cars statistics for the period " << startDate << " to " << endDate << ":" << endl;
    cout << "Total stolen cars: " << totalStolenCars << endl;
}

void getStolenCarsStatistics(const vector<stolencars>& cars) {
    string mostFrequentBrand;
    int maxBrandFrequency = 0;

    string mostReliableAlarmType;
    int maxAlarmTypeFrequency = 0;

    // ����������� �� ��� ���������� ����������
    for (const auto& car : cars) {
        // ϳ�������� ������� ��������� ��� ����� ����� ������
        int brandFrequency = 0;
        for (const auto& otherCar : cars) {
            if (car.brand == otherCar.brand) {
                brandFrequency++;
            }
        }
        if (brandFrequency > maxBrandFrequency) {
            maxBrandFrequency = brandFrequency;
            mostFrequentBrand = car.brand;
        }

        // ϳ�������� ������� ������������ ������� ���� �����������
        int alarmTypeFrequency = 0;
        for (const auto& otherCar : cars) {
            if (car.alarmType == otherCar.alarmType) {
                alarmTypeFrequency++;
            }
        }
        if (alarmTypeFrequency > maxAlarmTypeFrequency) {
            maxAlarmTypeFrequency = alarmTypeFrequency;
            mostReliableAlarmType = car.alarmType;
        }
    }

    // ��������� ���������� ��������� ���������� ����� �����
    cout << "Most frequently stolen car brand: " << mostFrequentBrand << " (" << maxBrandFrequency << " times)" << endl;

    // ��������� ���������� �������� �����������
    cout << "Most reliable alarm type: " << mostReliableAlarmType << " (" << maxAlarmTypeFrequency << " times)" << endl;
}



void privateOwnerMenu() {
	 vector<PrivateOwner> owners;
	 readDataPowners(owners);
    int choice = -1;
    string number;
    while (choice != 0) {
        cout << "Private Owner Menu" << endl;
        cout << "1 - Display all Private owners" << endl;
        cout << "2 - Search for an owner by car number" << endl;
        cout << "3 - Add a new owner" << endl;
        cout << "4 - Get full specification for car by number " << endl;
        cout << "5 - Remove an owner by number of car" << endl;
        cout << "0 - Back to main menu" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 0:
            	system("cls");
                cout << "Returning to main menu..." << endl;
                break;
            case 1:
            	system("cls");
                // ��������� �������, �� ���������� �� ����������� ��� ��������� ��������
                for (const auto& owner : owners) {
                owner.getPrivateOwner();
                cout << endl;
            }
                break;
            case 2:
            	system("cls");
                // ��������� �������, �� ���������� �� ����� �������� �� ������� ���������
                searchPrvtInf(owners);
                break;
            case 3:
            	system("cls");
                // ��������� �������, �� ���������� �� ��������� ������ ��������
            addOwner(owners);
                break;
                case 4: 
                system("cls");
                searchByNumber(owners);
                break;
            case 5:
            	system("cls");
                // ��������� �������, �� ���������� �� ��������� �������� �� ������� ���������
            cout << "Enter number: ";
            cin >> number;
            deleteByNumber(owners, number);
                break;
            default:
                cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }
}

void organizOwnerMenu() {
	 vector<OrganizationOwner> owners2;
 
	 readDataOowners(owners2);
    int choice = -1;
    string number;
    while (choice != 0) {
        cout << "Organization Owner Menu" << endl;
        cout << "1 - Display all Organization owners" << endl;
        cout << "2 - Search for an owner by car number" << endl;
        cout << "3 - Add a new owner" << endl;
        cout << "4 - Get full specification for car by number " << endl;
        cout << "5 - Remove an owner by number of car" << endl;
        cout << "0 - Back to main menu" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 0:
            	system("cls");
                cout << "Returning to main menu..." << endl;
                break;
            case 1:
            	system("cls");
                // ��������� �������, �� ���������� �� ����������� ��� ��������� ��������
                for (const auto& owner : owners2) {
                owner.getOrganizationOwner();
                cout << endl;
            }
                break;
            case 2:
            	system("cls");
                // ��������� �������, �� ���������� �� ����� �������� �� ������� ���������
                printOrganizationsWithSeries(owners2);
                break;
            case 3:
            	system("cls");
                // ��������� �������, �� ���������� �� ��������� ������ ��������
            	addOrgOwner(owners2);
                break;
                case 4: 
                searchByNumberOrg(owners2); 
                break;
            case 5:
            	system("cls");
                // ��������� �������, �� ���������� �� ��������� �������� �� ������� ���������
            cout << "Enter number: ";
            cin >> number;
            deleteByNumberOrg(owners2, number); 
		
                break;
            default:
                cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }
}

int main() {
	//����������� �������
	vector<PrivateOwner> owners;
	vector<OrganizationOwner> owners2;
	//��������� ����� ���� ������ �� ���� 
	generatePrivateOwnerFile();
 	generateOrganizationOwnerFile();
 	vector<Accident> accidents = createAccidents();
    vector<stolencars> cars =  generatestolencars();
    // ���������� � �����
 	readDataPowners(owners);
 	readDataOowners(owners2); 
 	

string number;
int choice = -1;

    while (choice != 0) {
		  
        cout << "Choose an action:" << endl;
        cout << "1 - Private Owner Menu" << endl;
        cout << "2 - Organization Owner Menu" << endl;
        cout << "3 - Generate Free Car Numbers" << endl;
        cout << "4 - Print Free Car Numbers" << endl;
        cout << "5 - find owners who did not pass technical inspection on time" << endl;
        cout << "6 - Print all accidents" << endl;
        cout << "7 - Get accidents statistics by period" << endl;
        cout << "8 - Get most dangerous location" << endl;
        cout << "9 - Get drunk driving Stats" << endl;
        cout << "10 - Get a list of wanted cars:" << endl;
        cout << "11 - Get data on the effectiveness of investigative work:" << endl;
        cout << "12 - Get a list and the total number of thefts for the specified period:" << endl;
        cout << "13 - Get car theft statistics:" << endl;
        cout << "0 - Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 0:
            	system("cls");
                cout << "Exiting program..." << endl;
                break;
            case 1:
            	system("cls");
                privateOwnerMenu();
                // ��������� �������, �� ���������� �� Private Owner Menu
                break;
            case 2:
            	system("cls");
                organizOwnerMenu();
                // ��������� �������, �� ���������� �� Organization Owner Menu
                break;
            case 3:
            	system("cls");
                // ��������� �������, �� ���������� �� Generate Free Car Numbers
                generateCarNumberMenu();
                break;
            case 4:
            	system("cls");
			//  ��������� �������, �� ���������� �� printGeneratedCarNumbers
				printGeneratedCarNumbers(); 
				break;
			case 5:
				system("cls");
			searchOwners12(false, owners, owners2);
            break;
           	case 6:
            	system("cls");	
			printAccidentDetails(accidents);
            break;
            case 7:
            	system("cls");
          	getAccidentsStatisticsByPeriod(accidents);		
			
            break;
	  		case 8:
            		system("cls");
            cout << "------------------------" << endl; 
			getMostDangerousLocation(accidents);
			getMostFrequentCause(accidents);
			cout << "------------------------" << endl; 
   
			break;
			case 9:
				system("cls"); 
				cout << "------------------------" << endl; 
				getDrunkDrivingStats(accidents); 
				cout << "------------------------" << endl; 
				break;
			case 10:
			system("cls");
			printStolenCars(cars);
			break;
			case 11:
			system("cls");
			cout << "------------------------" << endl; 
			calculateSearchEfficiency(cars);
			cout << "------------------------" << endl; 
			break;
			case 12:
			system("cls");
			cout << "------------------------" << endl; 
			getStolenCarsStatisticsByPeriod(cars); 
			cout << "------------------------" << endl; 
			break;
			case 13:
			system("cls");
			cout << "------------------------" << endl; 
			getStolenCarsStatistics(cars); 
			cout << "------------------------" << endl; 
			break;
			default:
                cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }
    return 0;
}





