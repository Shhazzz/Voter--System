 #include<stdio.h>
 #include<string.h>

 //DECLARE A STRUCTURE FOR VOTERS
 struct Voter{
    char name[30],gender,address[50]; //CANDIDATES NAME,GENDER AND ADDRESS
    int age,ID,contact no[10];        //CANDIDATES AGE,UNIQUE ID,CONTACT NO
 };

 //DECLARE A STRUCTURE FOR PARTIES
 struct Party{
    char name[50],ID; //PARTIES NAME AND ID
    int votes;       //NUMBER OF VOTES THE PARTY HAS RECEIVED
 };

