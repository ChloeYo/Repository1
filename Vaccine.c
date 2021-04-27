#include<time.h>
#include<stdio.h>
#include<string.h>

//holds user data
struct user_data{
	char firstn[30];
	char lastn[30];
	char sex[6];
	int dd, mm, yy;
	int predd,premm,preyy;
	int dose_num;
	char vaccineType[30];
	char zip[6];
};
//function for birthdate/date
int Age(int currdd, int currmm, int curryy, int bdd, int bmm, int byy){
	int month[]= {31,28,31,30,31,30,31,31,30,31,30,31};
	if(bdd > currdd){
	currdd = currdd + month[bmm -1];
	currmm = currmm -1;
}
	if(bmm > currmm){
	curryy = curryy - 1;
	currmm = currmm + 12;
}
	int agedd= currdd - bdd;
	int agemm= currmm - bmm;
	int ageyy = curryy - byy;
	return ageyy;
}

int main(void){
	struct user_data num1[10];
	int choice;
	char id[8];
	char age[2];
	int i=0;

for(i; i<10; i++){
	printf("Data for %d Recipient: \n", i+1);
	//recipient's first name
	printf("First Name: ");
	scanf("%s", num1[i].firstn);

	//recipient's last name
	printf("Last Name: ");
	scanf("%s", num1[i].lastn);

	//recipient's birthday
	printf("Birhtdate(mm/dd/yy): ");
	scanf("%d/%d/%d", &num1[i].mm, &num1[i].dd, &num1[i].yy);

	//recipient's gender
	printf("Enter Gender(1 for male, 2 for female\n");
	printf("\t1. Male\n");
	printf("\t2. Female\n\tChoice: ");
	scanf("%d", &choice);
	if(choice ==1)
	strcpy(num1[i].sex, "Male");
	else 
	strcpy(num1[i].sex, "Female");
	
	//doe number
	printf("Enter Current Dose Number: ");
	scanf("%d", &num1[i].dose_num);
	if(num1[i].dose_num == 2){
	printf("Enter Previous Dose Date(mm/dd/yy): ");
	scanf("%d/%d/%d" , &num1[i].dd, &num1[i].mm, &num[i].yy);
	
	//vaccine type
	printf("Choose Vaccine Type(1,2,3): \n");
	printf("\t1. Pfizer\n");
	printf("t2. Moderna\n");
	printf("t3. Johnson&Johnson\n");
	scanf("%d", &choice);
	if(choice == 1)
	strcpy(num1[i].vaccineType, "Pfizer");
	else if(choice == 2)
	strcpy(num1[i].vaccineType, "Moderna");
	else if(choice == 3)
	strcpy(num1[i].vaccineType, "Johnson&Johnson");
	else{
	printf("Enter Vaccine Type");
	}

	//recipient's zip code
	printf("Enter last 3 digits of zip: ");
	scanf("%s", num1[i].zip);

	//makes identification with first initials of first and last name
	id[0]= num1[i].firstn[0];
	id[1]= num1[i].lastn[0];
	//current date
	time_t today= time(NULL);
	struct tm tm= *localtime(&t);

	//calculate the age
	int aging= Age(tm.tm_mon+1, tm,.tm_mday, tm.tm_year +1900, num1[i].mm, num1[i].dd, num1[i].yy);
	id[2] = (char)(aging/10 +'0');
	id[3] = (char)(aging/10 + '0');

	//first letter of vaccine
	id[4] = num1.vaccineType[0];
	//last 3 digits of zip
	id[5]= num1[i].zip[3];
	id[6]=num1[i].zip[4];
	id[7]= num1[i].zip[5];

	//display information
	printf("\nFirst Name: %s\n", num1[i].firstn);
	printf("Last Name: %s\n", num1[i].lastn);
	printf("Birthdate: %d/%d/%d\n", num1[i].mm, num1[i].dd, num1[i].yy);
	printf("Sex: %s\n", num1[i].sex);
	printf("Dose Number: %d\n", num1[i].dose_num);
	if(num1[i].dose_num == 2){
	printf("Previous Dose Date: %d/%d/%d\n", num1[i].currmm, num1[i].currdd, num1[i].curryy);
	printf("Vaccine Type: %s\n", num1[i].vaccineType);
	printf("Zip: %s\n", num1[i].zip);
	printf("Code: %s\n\n", id);

}

}
}
}
return 0;
}

