#pragma once

bool checkNumber(string number) {
	int num = 0;
	int count = 0;
	for (size_t i = 0; i < number.length(); i++)
	{
		num = (int)number[i]-48;
		if (num == 7)count++;
	}
	if (count >= 2)return true;
	return false;

}

float calculateAvarage(vector<Debtor>debt) {
	int totalDebt = 0;
	for (Debtor debtor:debt)
	{
		totalDebt += debtor.getDebt();
	}
	return totalDebt / debt.size();
}

char firstLetterOfSurname(string surname) {
	return surname[surname.find('.') + 2];
}


bool containsEight(string number) {
	int num = 0;
	for (size_t i = 0; i < number.length(); i++)
	{
		num = (int)number[i] - 48;
		if (num == 8)return true;
	}
	return false;
}

bool CheckFullName(string fullName) {
	for (size_t i = 0; i < fullName.length(); i++)
	{
		fullName[i] = tolower(fullName[i]);
	}
	int counter = 0;
	for (size_t i = 0; i < fullName.length(); i++)
	{
		 counter=count(fullName.begin(), fullName.end(), fullName[i]);
		 if (counter >= 3)return true;
		 else return false;
	}

}

bool checkRepeatInNumber(string number) {
	int num = 0;
	int tempNum = 0;
	for (size_t j = 0; j < number.length(); j++)
	{
		num = (int)number[j] - 48;
		for (size_t i = j+1; i < number.length(); i++)
		{
			tempNum = (int)number[i] - 48;
			if (tempNum == num)return false;
		}
	}
	return true;
}

bool checkSmile(string name) {
	for (size_t i = 0; i < name.length(); i++)
	{
		name[i] = tolower(name[i]);
	}
	if (name.find('s') < name.length() && name.find('m') < name.length() && name.find('i') < name.length() && name.find('l') < name.length() && name.find('e') < name.length())return true;
	else return false;
}
