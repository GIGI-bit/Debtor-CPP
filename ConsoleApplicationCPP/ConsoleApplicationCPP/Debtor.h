#pragma once

class Debtor {
	string FullName;
	DateTime BirthDay;
	string Phone;
	string Email;
	string Address;
	int Debt;
public:
	Debtor(string fullname, DateTime birthDay, string phone, string email, string address, int debt) 
	{
		setFullname(fullname);
		setPhone(phone);
		setAddress(address);
		setDebt(debt);
		setEmail(email);
		setBirthday(birthDay);
	}
	Debtor(){}

	void setFullname(string name) {
		if (name != "") {
			FullName = name;
		}
		else
			throw exception("Fullname cannot be empty");

	}

	void setBirthday(DateTime birthDate) {
		BirthDay = birthDate;
	}

	void setPhone(string phoneNumber) {
		if (phoneNumber != "") {
			Phone = phoneNumber;
		}
		else
			throw exception("Phone number cannot be empty");

	}

	void setEmail(string emailAddress) {
		if (emailAddress != "") {
			Email = emailAddress;
		}
		else {
			throw exception("Email address cannot be empty");
		}
	}

	void setAddress(string address) {
		if (address != "") {
			Address = address;
		}
		else {
			throw exception("Address cannot be empty");
		}
	}

	void setDebt(int amount) {
		if (amount >= 0)
			Debt = amount;
	}

	
	string getFullname() const {
		return FullName;
	}

	DateTime getBirthday() const {
		return BirthDay;
	}

	string getPhone() const {
		return Phone;
	}

	string getEmail() const {
		return Email;
	}

	string getAddress() const {
		return Address;
	}

	int getDebt() const {
		return Debt;
	}

	void Show() const {
		cout << "Full Name: " << getFullname() << endl;
		cout << "Birthday: ";
		BirthDay.Show();
		cout << "Phone: " << getPhone() <<endl;
		cout << "Email: " << getEmail() <<endl;
		cout << "Address: " << getAddress() <<endl;
		cout << "Debt: " << getDebt() << endl;
	}


};


 //Debtor("Shirley T. Qualls", DateTime(3, 30, 1932), "530-662-7732", "ShirleyTQualls@teleworm.us", "3565 Eagles Nest Drive Woodland, CA 95695", 2414),
	//	   Debtor("Danielle W. Grier", DateTime(10, 18, 1953), "321-473-4178", "DanielleWGrier@rhyta.com", "1973 Stoneybrook Road Maitland, FL 32751", 3599),
	//	   Debtor("Connie W. Lemire",  DateTime(6, 18, 1963), "828-321-3751", "ConnieWLemire@rhyta.com", "2432 Hannah Street Andrews, NC 28901", 1219),
	//	   Debtor("Coy K. Adams",      DateTime(5, 1, 1976), "410-347-1307", "CoyKAdams@dayrep.com", "2411 Blue Spruce Lane Baltimore, MD 21202", 3784),
	//	   Debtor("Bernice J. Miles",  DateTime(6, 1, 1988), "912-307-6797", "BerniceJMiles@armyspy.com", "4971 Austin Avenue Savannah, GA 31401", 4060),
	//	   Debtor("Bob L. Zambrano",   DateTime(2, 28, 1990), "706-446-1649", "BobLZambrano@armyspy.com", "2031 Limer Street Augusta, GA 30901", 6628),
	//	   Debtor("Adam D. Bartlett",  DateTime(5,6, 1950), "650-693-1758", "AdamDBartlett@rhyta.com", "2737 Rardin Drive San Jose, CA 95110", 5412),
	//	   Debtor("Pablo M. Skinner",  DateTime(8, 26, 1936), "630-391-2034", "PabloMSkinner@armyspy.com", "16 Fraggle Drive Hickory Hills, IL 60457", 11097),
	//	   Debtor("Dorothy J. Brown",  DateTime(7,9, 1971), "270-456-3288", "DorothyJBrown@rhyta.com", "699 Harper Street Louisville, KY 40202", 7956),
	//	   Debtor("Larry A. Miracle",  DateTime(5, 22, 1998), "301-621-3318", "LarryAMiracle@jourrapide.com", "2940 Adams Avenue Columbia, MD 21044", 7150),
	//	   Debtor("Donna B. Maynard",  DateTime(1, 26, 1944), "520-297-0575", "DonnaBMaynard@teleworm.us", "4821 Elk Rd Little Tucson, AZ 85704", 2910),
	//	   Debtor("Jessica J. Stoops", DateTime(4, 22, 1989), "360-366-8101", "JessicaJStoops@dayrep.com", "2527 Terra Street Custer, WA 98240", 11805),
	//	   Debtor("Audry M. Styles",   DateTime(1,7, 1937), "978-773-4802", "AudryMStyles@jourrapide.com", "151 Christie Way Marlboro, MA 01752", 1001),


