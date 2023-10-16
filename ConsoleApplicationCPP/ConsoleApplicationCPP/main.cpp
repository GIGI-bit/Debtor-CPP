#include<iostream>
#include<list>
#include<string>
#include<iomanip>
#include<vector>
#include<fstream>
#include <chrono>
#include <ctime>
#include<algorithm>
#pragma warning(disable : 4996)
using namespace std;
#include"DateTime.h"
#include"Debtor.h"
#include"Functions.h"

void main()
{
	vector<Debtor> debtors = {
		 Debtor("Shirley T. Qualls", DateTime(3, 30, 1932), "530-662-7732", "ShirleyTQualls@teleworm.us", "3565 Eagles Nest Drive Woodland, CA 95695", 2414),
		   Debtor("Danielle W. Grier", DateTime(10, 18, 1953), "321-473-4178", "DanielleWGrier@rhyta.com", "1973 Stoneybrook Road Maitland, FL 32751", 3599),
		   Debtor("Connie W. Lemire",  DateTime(6, 18, 1963), "828-321-3751", "ConnieWLemire@rhyta.com", "2432 Hannah Street Andrews, NC 28901", 1219),
		   Debtor("Coy K. Adams",      DateTime(5, 1, 1976), "410-347-1307", "CoyKAdams@dayrep.com", "2411 Blue Spruce Lane Baltimore, MD 21202", 3784),
		   Debtor("Bernice J. Miles",  DateTime(6, 1, 1988), "912-307-6797", "BerniceJMiles@armyspy.com", "4971 Austin Avenue Savannah, GA 31401", 4060),
		   Debtor("Bob L. Zambrano",   DateTime(2, 28, 1990), "706-446-1649", "BobLZambrano@armyspy.com", "2031 Limer Street Augusta, GA 30901", 6628),
		   Debtor("Adam D. Bartlett",  DateTime(5,6, 1950), "650-693-1758", "AdamDBartlett@rhyta.com", "2737 Rardin Drive San Jose, CA 95110", 5412),
		   Debtor("Pablo M. Skinner",  DateTime(8, 26, 1936), "630-391-2034", "PabloMSkinner@armyspy.com", "16 Fraggle Drive Hickory Hills, IL 60457", 11097),
		   Debtor("Dorothy J. Brown",  DateTime(7,9, 1971), "270-456-3288", "DorothyJBrown@rhyta.com", "699 Harper Street Louisville, KY 40202", 7956),
		   Debtor("Larry A. Miracle",  DateTime(5, 22, 1998), "301-621-3318", "LarryAMiracle@jourrapide.com", "2940 Adams Avenue Columbia, MD 21044", 7150),
		   Debtor("Donna B. Maynard",  DateTime(1, 26, 1944), "520-297-0575", "DonnaBMaynard@teleworm.us", "4821 Elk Rd Little Tucson, AZ 85704", 2910),
		   Debtor("Jessica J. Stoops", DateTime(4, 22, 1989), "360-366-8101", "JessicaJStoops@dayrep.com", "2527 Terra Street Custer, WA 98240", 11805),
		   Debtor("Audry M. Styles",   DateTime(1,7, 1937), "978-773-4802", "AudryMStyles@jourrapide.com", "151 Christie Way Marlboro, MA 01752", 1001),
		   Debtor("Martin S. Malinowski",DateTime(1, 17, 1992),  "7675993523", "MartinSMalinowski@dayrep.com",   "3749 Capitol Avenue New Castle, IN 47362",		1816),
		   Debtor("Melissa R. Arner",    DateTime(5, 24, 1974),  "5305087328", "MelissaRArner@armyspy.com",	   "922 Hill Croft Farm Road Sacramento, CA 95814", 5037),
		   Debtor("Kelly G. Hoffman",    DateTime(9, 22, 1969),  "5058768935", "KellyGHoffman@armyspy.com",	   "4738 Chapmans Lane Grants, NM 87020",			7755),
		   Debtor("Doyle B. Short",      DateTime(6, 15, 1986),  "9892214363", "DoyleBShort@teleworm.us",		   "124 Wood Street Saginaw, MI 48607",			    11657),
		   Debtor("Lorrie R. Gilmore",   DateTime(12, 23, 1960), "7243067138", "LorrieRGilmore@teleworm.us",     "74 Pine Street Pittsburgh, PA 15222",			9693),
		   Debtor("Lionel A. Cook",      DateTime(4, 16, 1972),  "2016275962", "LionelACook@jourrapide.com",     "29 Goldleaf Lane Red Bank, NJ 07701",			2712),
		   Debtor("Charlene C. Burke",   DateTime(1,18, 1990),   "4843349729", "CharleneCBurke@armyspy.com",     "4686 Renwick Drive Philadelphia, PA 19108",	    4016),
		   Debtor("Tommy M. Patton",     DateTime(6, 30, 1981),  "7745716481", "TommyMPatton@rhyta.com",		   "748 Rockford Road Westborough, MA 01581",		349),
		   Debtor("Kristin S. Bloomer",  DateTime(6,16, 1944),   "4436520734", "KristinSBloomer@dayrep.com",	   "15 Hewes Avenue Towson, MD 21204",				9824),
		   Debtor("Daniel K. James",     DateTime(11, 10, 1997), "8014074693", "DanielKJames@rhyta.com",		   "3052 Walton Street Salt Lake City, UT 84104",	8215),
		   Debtor("Paula D. Henry",      DateTime(9,6, 1976),    "6183785307", "PaulaDHenry@rhyta.com",		   "3575 Eagle Street Norris City, IL 62869",		5766),
		   Debtor("Donna C. Sandoval",   DateTime(12,13, 1947),  "5404825463", "DonnaCSandoval@rhyta.com",	   "675 Jehovah Drive Martinsville, VA 24112",		8363),
		   Debtor("Robert T. Taylor",    DateTime(8, 17, 1932),  "2705966442", "RobertTTaylor@armyspy.com",	   "2812 Rowes Lane Paducah, KY 42001",				7785),
		   Debtor("Donna W. Alamo",      DateTime(12,9, 1948),   "9787782533", "DonnaWAlamo@teleworm.us",		   "4367 Christie Way Marlboro, MA 01752",			10030),
		   Debtor("Amy R. Parmer",       DateTime(5, 19, 1995),  "4808834934", "AmyRParmer@armyspy.com",		   "85 Elmwood Avenue Chandler, AZ 85249",			5347),
		   Debtor("Newton K. Evans",     DateTime(10, 8, 1986),  "3032079084", "NewtonKEvans@rhyta.com",		   "3552 Columbia Road Greenwood Village, CO 80111",9838),
		   Debtor("Kathleen C. Chaney",  DateTime(1, 5, 1949),   "6052453513", "KathleenCChaney@rhyta.com",	    "316 Elsie Drive Fort Thompson, SD 57339",		1672),
		   Debtor("Manuel C. Johnson",   DateTime(2, 23, 1957),  "6062472659", "ManuelCJohnson@jourrapide.com",  "4146 May Street Sharpsburg, KY 40374",			9195),
		   Debtor("Carla A. Creagh",     DateTime(11, 21, 1988), "6153028974", "CarlaACreagh@dayrep.com",		  "3106 Bates Brothers Road Columbus, OH 43215",   11271),
		   Debtor("Norma M. New",		 DateTime(5, 18, 1988),  "8574928703", "NormaMNew@jourrapide.com",	     "965 Metz Lane Woburn, MA 01801",				9761),
		   Debtor("Roy D. Green",		 DateTime(1, 27, 1983),  "3083405981", "RoyDGreen@jourrapide.com",	     "401 Romrog Way Grand Island, NE 68801",			10771),
		   Debtor("Cristy J. Jensen",	 DateTime(11, 2, 1935),  "4406269550", "CristyJJensen@jourrapide.com",   "2177 Harley Vincent Drive Cleveland, OH 44113", 5205),
		   Debtor("Nancy J. Fergerson",  DateTime(6, 10, 1993),  "2199878498", "NancyJFergerson@dayrep.com",	 "3584 Jadewood Drive Demotte, IN 46310",		    1276),
		   Debtor("Dave N. Rodriguez",   DateTime(1, 21, 1938),  "2145402499", "DaveNRodriguez@rhyta.com",	     "1890 Poco Mas Drive Dallas, TX 75247",		    9132),
		   Debtor("James E. Denning",    DateTime(5, 4, 1988),   "5042898640", "JamesEDenning@jourrapide.com",   "1444 Rose Avenue Metairie, LA 70001",		    8176),
		   Debtor("Richard M. Thomas",   DateTime(2, 13, 1972),  "5107353359", "RichardMThomas@jourrapide.com",  "4454 Green Avenue Oakland, CA 94609",		    7875),
		   Debtor("Lakisha R. Forrest",  DateTime(12, 1, 1973),  "3348301181", "LakishaRForrest@armyspy.com",    "3121 Quarry Drive Montgomery, AL 36117",	    3088),
		   Debtor("Pamela H. Beauchamp", DateTime(11, 20, 1959), "8015596347", "PamelaHBeauchamp@jourrapide.com","3239 Tori Lane Salt Lake City, UT 84104",	    6588)
	};


	//2) rhyta.com ve ya dayrep.com domenlerinde emaili olan borclulari cixartmag
	//vector<Debtor> list;
	//copy_if(debtors.begin(), debtors.end(), back_inserter(list), [](Debtor debtor) {
	//	string mail = "rhyta.com";
	//	string debtorMail = debtor.getEmail();
	//	int index = debtorMail.find('@') + 1;
	//	int j = 0;
	//	for (size_t i = index; i < debtorMail.length(); i++)
	//	{
	//		if (debtorMail[i] != mail[j])return false;
	//		j++;
	//	}
	//	return true;
	//	});

	//copy_if(debtors.begin(), debtors.end(), back_inserter(list), [](Debtor debtor) {
	//	string mail = "dayrep.com";
	//	string debtorMail = debtor.getEmail();
	//	int index = debtorMail.find('@') + 1;
	//	int j = 0;
	//	for (size_t i = index; i < debtorMail.length(); i++)
	//	{
	//		if (debtorMail[i] != mail[j])return false;
	//		j++;
	//	}
	//	return true;
	//	});

	//for (Debtor debtor : list)
	//{
	//	debtor.Show();
	//	cout << endl;
	//}


	//3) Yashi 26 - dan 36 - ya qeder olan borclulari cixartmag

	//vector<Debtor>ages;
	//copy_if(debtors.begin(), debtors.end(), back_inserter(ages), [](Debtor debtor) {
	//	if ((debtor.getBirthday().getYear() >= 1987) && (debtor.getBirthday().getYear() <= 1997))return true;
	//	else return false;
	//	});
	//for (Debtor debtor : ages) {
	//	debtor.Show();
	//	cout << endl;
	//}

	//4) Borcu 5000 - den cox olmayan borclularic cixartmag

	//vector<Debtor> debts;
	//copy_if(debtors.begin(), debtors.end(), back_inserter(debts), [](Debtor debtor) {
	//	if (debtor.getDebt() < 5000)return true;
	//	else return false;
	//	});

	//for (Debtor debtor : debts) {
	//	debtor.Show();
	//	cout << endl;
	//}
	//5) Butov adi 18 simvoldan cox olan ve telefon nomresinde 2 ve ya 2 - den cox 7 reqemi olan borclulari cixartmaq
	//vector<Debtor>number;
	//copy_if(debtors.begin(), debtors.end(), back_inserter(number), [&](Debtor debtor) {
	//	return (debtor.getFullname().length() > 18) && (checkNumber(debtor.getPhone()) == true);
	//	});
	//for (Debtor debtor : number) {
	//	debtor.Show();
	//	cout << endl;
	//}
	//7) Qishda anadan olan borclulari cixardmaq
	//vector<Debtor>months;
	//copy_if(debtors.begin(), debtors.end(), back_inserter(months), [](Debtor debtor) {
	//	if (debtor.getBirthday().getMonth() == 12 || debtor.getBirthday().getMonth() == 1 || debtor.getBirthday().getMonth() == 2)return true;
	//	else return false;
	//	});
	//for (Debtor debtor : months) {
	//	debtor.Show();
	//	cout << endl;
	//}

	//8) Borcu, umumi borclarin orta borcunnan cox olan borclulari cixarmaq ve evvel familyaya gore sonra ise meblegin azalmagina gore sortirovka etmek
	//vector<Debtor>debts;
	//int avarage = calculateAvarage(debtors);
	//copy_if(debtors.begin(), debtors.end(), back_inserter(debts), [avarage](Debtor debtor) {

	//	if (debtor.getDebt() > avarage)return true;
	//	else return false;
	//	});
	//sort(debts.begin(), debts.end(), [](Debtor debtor_1,Debtor debtor_2) {
	//	if (firstLetterOfSurname(debtor_1.getFullname()) <firstLetterOfSurname(debtor_2.getFullname()))return true;
	//	else return false;
	//	});

	//sort(debts.begin(), debts.end(), [](Debtor debtor_1,Debtor debtor_2) {
	//	if (debtor_1.getDebt() < debtor_2.getDebt())return true;
	//	else return false;
	//	});
	//for (Debtor debtor : debts) {
	//	debtor.Show();
	//	cout << endl;
	//}

	//9) Telefon nomresinde 8 olmayan borclularin yalniz familyasin, yashin ve umumi borcun meblegin cixarmaq
//vector<Debtor>Debtors;
//copy_if(debtors.begin(), debtors.end(), back_inserter(Debtors), [](Debtor debtor) {
//	if (containsEight(debtor.getPhone()))return true;
//	else return false;
//	});
//for (Debtor debtor : Debtors) {
//	cout << "Surname: ";
//	for (int i=debtor.getFullname().find('.')+2; i<debtor.getFullname().length(); i++)
//	{
//		cout << debtor.getFullname()[i];
//	}
//	cout << endl;
//	cout << "Age: " <<2023- debtor.getBirthday().getYear()<<endl;
//	cout << "Debt: " << debtor.getDebt()<<endl;
//	cout << endl;
//}
	//11)Adinda ve familyasinda hec olmasa 3 eyni herf olan borclularin siyahisin cixarmaq ve onlari elifba sirasina gore sortirovka elemek
//vector<Debtor>Debtors;
//copy_if(debtors.begin(), debtors.end(), back_inserter(Debtors), [](Debtor debtor) {
//	if (CheckFullName(debtor.getFullname()))return true;
//	else return false;
//	});
//sort(debtors.begin(), debtors.end(), [](Debtor debtor_1, Debtor debtor_2) {
//	if (debtor_1.getFullname()[0] > debtor_2.getFullname()[0])return true;
//	else return false;
//	});
//for (Debtor debtor:Debtors)
//{
//	debtor.Show();
//	cout << endl;
//}

	//13)borclulardan en coxu hansi ilde dogulubsa hemin ili cixartmaq
//	int year=0;
//	int counter = 0;
//	int tempCounter = 0;
//for (size_t i = 0; i < debtors.size(); i++)
//{
//	for (size_t j = 0; j < debtors.size(); j++)
//	{
//		if (j + 1 != debtors.size()) {
//			if (debtors[i].getBirthday().getYear() == debtors[j].getBirthday().getYear())tempCounter++;
//		}
//		
//	}
//	if (counter < tempCounter) {
//		counter = tempCounter;
//		year = debtors[i].getBirthday().getYear();
//	}
//	tempCounter = 0;
//}
//for (Debtor debtor:debtors)
//{
//	if (debtor.getBirthday().getYear() == year) {
//		debtor.Show();
//		cout << endl;
//	}
//}
	//14)Borcu en boyuk olan 5 borclunun siyahisini cixartmaq
	//vector<Debtor>Debtors;
	//sort(debtors.begin(), debtors.end(), [](Debtor debtor_1, Debtor debtor_2) {
	//	if (debtor_1.getDebt() > debtor_2.getDebt())return true;
	//	else return false;
	//	});
	//for (size_t i = 0; i < 5; i++)
	//{
	//	Debtors.push_back(debtors[i]);
	//}
	//for (Debtor debtor : Debtors)
	//{
	//	debtor.Show();
	//	cout << endl;
	//}
	//15)Butun borcu olanlarin borcunu cemleyib umumi borcu cixartmaq
//int totalDebt = 0;
//
//for_each(debtors.begin(), debtors.end(), [&totalDebt](Debtor debtor) {
//	totalDebt += debtor.getDebt();
//	});
//cout << totalDebt;

	//16)2ci dunya muharibesin gormush borclularin siyahisi cixartmaq
//vector<Debtor>Debtors;
//copy_if(debtors.begin(), debtors.end(), back_inserter(Debtors), [](Debtor debtor) {
//	if (debtor.getBirthday().getYear() < 1945)return true;
//	else return false;
//	});
//for (Debtor debtor:Debtors)
//{
//	debtor.Show();
//	cout << endl;
//}

	//18)Nomresinde tekrar reqemler olmayan borclularin ve onlarin borcunun meblegin cixartmaq
//vector<Debtor>Debtors;
//copy_if(debtors.begin(), debtors.end(), back_inserter(Debtors), [](Debtor debtor) {
//	if (checkRepeatInNumber(debtor.getPhone()))return true;
//	else return false;
//	});
//for (Debtor debtor : Debtors) {
//	debtor.Show();
//	cout << endl;
//}

	//19)Tesevvur edek ki, butun borclari olanlar bugunden etibaren her ay 500 azn pul odeyecekler.Oz ad gunune kimi borcun oduyub qurtara bilenlerin siyahisin cixartmaq
//vector<Debtor>Debtors;
//DateTime date(10, 16, 2023);
//copy_if(debtors.begin(), debtors.end(), back_inserter(Debtors), [date](Debtor debtor) {
//	if (debtor.getBirthday().getMonth() > date.getMonth()) {
//		return (debtor.getBirthday().getMonth() - date.getMonth()) * 500 >= debtor.getDebt();
//	}
//	else {
//		return (date.getMonth() - debtor.getBirthday().getMonth()) * 500 >= debtor.getDebt();
//	}
//	});
//
//for (Debtor debtor:Debtors)
//{
//	debtor.Show();
//	cout << endl;
//}
	//20)Adindaki ve familyasindaki herflerden "smile" sozunu yaza bileceyimiz borclularin siyahisini cixartmaq
//vector<Debtor>Debtors;
//copy_if(debtors.begin(), debtors.end(), back_inserter(Debtors), [](Debtor debtor) {
//	if (checkSmile(debtor.getFullname()))return true;
//	else return false;
//	});
//
//for (Debtor debtor:Debtors)
//{
//	debtor.Show();
//	cout << endl;
//}

}