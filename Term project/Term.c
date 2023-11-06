#include <stdio.h>

////////////////////////////////
double average(double arr[])
{
	
	int counter=0;
{
FILE * data = fopen ("Term.txt", "r");
    char c;  // To store a character read from file
    data = fopen("Term.txt", "r");
    for (c = getc(data); c != EOF; c = getc(data))
        if (c == '\n') // Increment count if this character is newline
            counter = counter + 1;
}
	
	
double lake_f;

    double total=0;//variable declaration
    for(int i=0; i<counter; i++){
        total=total+arr[i];//loop for calculatin total
    }    
    lake_f=total/counter;//calculate average

return(lake_f);
}
///////////////////////////////
double average2(double arr[])
{
	
double lake_f;

    double total=0;//variable declaration
    for(int i=0; i<365; i++){
        total=total+arr[i];//loop for calculatin total
    }    
    lake_f=total/365;//calculate average

return(lake_f);
}
///////////////////////////////
void sort_numbers_ascending(double arr[], int n)
{

int i;
int j;
double a;


for (i=0; i<n; ++i)
 
 {
 
   for (j=i+1; j<n; ++j)
 
   {
 
     if (arr[i] > arr[j])
 
     {
 
       a= arr[i];
 
       arr[i] = arr[j];
 
       arr[j] = a;
     }
   }
 }
}
///////////////////////////////////
void sort_numbers_descending(double arr[], int n)
{

int i;
int j;
double a;


for (i=0; i<n; ++i)
 
 {
 
   for (j=i+1; j<n; ++j)
 
   {
 
     if (arr[i] < arr[j])
 
     {
 
       a= arr[i];
 
       arr[i] = arr[j];
 
       arr[j] = a;
     }
   }
 }
}


////////////////////////////////////////////////////


double coldest_laketemp(double arr[])
{
	int counter=0;
{
FILE * data = fopen ("Term.txt", "r");
    char c;  // To store a character read from file
    data = fopen("Term.txt", "r");
    for (c = getc(data); c != EOF; c = getc(data))
        if (c == '\n') // Increment count if this character is newline
            counter = counter + 1;
}
    double min = arr[0];    
        
    //Loop through the array    
    for (int i = 0; i < counter; i++) {     
        //Compare elements of array with min    
       if(arr[i] < min)    
           min = arr[i];    
    } 
    return(min);     
}
////////////////////////////////////

double warmest_laketemp(double arr[])
{
	int counter=0;
{
FILE * data = fopen ("Term.txt", "r");
    char c;  // To store a character read from file
    data = fopen("Term.txt", "r");
    for (c = getc(data); c != EOF; c = getc(data))
        if (c == '\n') // Increment count if this character is newline
            counter = counter + 1;
}
    double min = arr[0];    
        
    //Loop through the array    
    for (int i = 0; i < counter; i++) {     
        //Compare elements of array with min    
       if(arr[i] > min)    
           min = arr[i];
          }
        return(min);
}
////////////////////////////////////


/////////////////////////////////////////////////////////////////////
double summer_average(double arr[])	
{	
double summer_f;

    double total=0;//variable declaration
   
    for(int i=171; i >= 171 && i <= 264; i++){
        total=total+arr[i];//loop for calculatin total
		
    }    
    summer_f=total/94;//calculate average

return(summer_f);
}

///////////////////////////////////////////////////////////////////////

double winter_average(double arr[])	
{	
double winter_f;

    double total=0;//variable declaration
   
    for(int i=0; i <= 78; i++){
        total=total+arr[i];//loop for calculatin total
		
    }
    for(int i=354; i >= 354 && i <= 365; i++){
        total=total+arr[i];//loop for calculatin total
		
    }
        
    winter_f=total/91;//calculate average

return(winter_f);
}



/////////////////////////////////////////////////////////////
double swim(double arr[])	
{	
double swim_f;

    double total=0;//variable declaration
   
    for(int i=0; i < 366; i++){
		if (arr[i] > 20){
		total++;
		}
       
	}
		
        
    swim_f = total;

return(swim_f);
}

/////////////////////////////////////////////////////////////////////

double freeze(double arr[])	
{	
double freeze_f;

    double total=0;//variable declaration
   
    for(int i=0; i < 366; i++){
		if (arr[i] < 0){
		total++;
		}
       
	}
		
        
    freeze_f = total;

return(freeze_f);
}
///////////////////////////////////////////////////////////////////
void practice_day(double arr[], double arr2[], double Element)
{
	double Index;
	int day;
	int a;
		
	for (int i=0; i<366; ++i)
     if (Element == arr[i])
     {
         Index = i;
         a = Index;
		day = arr2[a];
		if(day <= 31){
		printf("%.d/01\n", day);	
		}
		
		if(day > 31 && day <=60) {
			 day = day - 31;
			printf("%.d/02\n", day);
		}
		
		if(day > 60 && day <=91) {
			 day = day - 60;
			printf("%.d/03\n", day);
		}
		
		if(day > 91 && day <=121) {
			 day = day - 91;
			printf("%.d/04\n", day);
		}
		
		if(day > 121 && day <=151) {
			 day = day - 121;
			printf("%.d/05\n", day);
		}
		
		if(day > 151 && day <=182) {
			 day = day - 151;
			printf("%.d/06\n", day);
		}
		
		if(day > 182 && day <=213) {
			 day = day - 182;
			printf("%.d/07\n", day);
		}
		
		if(day > 213 && day <=244) {
			 day = day - 213;
			printf("%.d/08\n", day);
		}
		
		if(day > 244 && day <=274) {
			 day = day - 244;
			printf("%.d/09\n", day);
		}
		
		if(day > 274 && day <=305) {
			 day = day - 274;
			printf("%.d/10\n", day);
		}
		
		if(day > 305 && day <335) {
			 day = day - 305;
			printf("%.d/11\n", day);
		}
		
		if(day > 335 && day <=366) {
			 day = day - 335;
			printf("%.d/12\n", day);
     }
    
	

	


		}
		
	}
//////////////////////////////////////////////////
void name_order(double arr[], double sup, double mich, double huron, double erie, double ont, double stclr)
{
 if (arr[0] == sup){
	printf("Lake Superior with a degree of %.2lf C\n", arr[0]);
}

if (arr[0] == mich){
	printf("Lake Michigan with a degree of %.2lf C\n", arr[0]);
}

if (arr[0] == huron){
	printf("Lake Huron with a degree of %.2lf C\n", arr[0]);
}

if (arr[0] == erie){
	printf("Lake Erie with a degree of %.2lf C\n", arr[0]);
}

if (arr[0] == ont){
	printf("Lake Ontario with a degree of %.2lf C\n", arr[0]);
}

if (arr[0] == stclr){
	printf("Lake Saint Clair with a degree of %.2lf C\n", arr[0]);
}
///////////////////
 if (arr[1] == sup){
	printf("Lake Superior with a degree of %.2lf C\n", arr[1]);
}

if (arr[1] == mich){
	printf("Lake Michigan with a degree of %.2lf C\n", arr[1]);
}

if (arr[1] == huron){
	printf("Lake Huron with a degree of %.2lf C\n", arr[1]);
}

if (arr[1] == erie){
	printf("Lake Erie with a degree of %.2lf C\n", arr[1]);
}

if (arr[1] == ont){
	printf("Lake Ontario with a degree of %.2lf C\n", arr[1]);
}

if (arr[1] == stclr){
	printf("Lake Saint Clair with a degree of %.2lf C\n", arr[1]);
}

//////////////////////
 if (arr[2] == sup){
	printf("Lake Superior with a degree of %.2lf C\n", arr[2]);
}

if (arr[2] == mich){
	printf("Lake Michigan with a degree of %.2lf C\n", arr[2]);
}

if (arr[2] == huron){
	printf("Lake Huron with a degree of %.2lf C\n", arr[2]);
}

if (arr[2] == erie){
	printf("Lake Erie with a degree of %.2lf C\n", arr[2]);
}

if (arr[2] == ont){
	printf("Lake Ontario with a degree of %.2lf C\n", arr[2]);
}

if (arr[2] == stclr){
	printf("Lake Saint Clair with a degree of %.2lf C\n", arr[2]);
}
///////////////////////
 if (arr[3] == sup){
	printf("Lake Superior with a degree of %.2lf C\n", arr[3]);
}

if (arr[3] == mich){
	printf("Lake Michigan with a degree of %.2lf C\n", arr[3]);
}

if (arr[3] == huron){
	printf("Lake Huron with a degree of %.2lf C\n", arr[3]);
}

if (arr[3] == erie){
	printf("Lake Erie with a degree of %.2lf C\n", arr[3]);
}

if (arr[3] == ont){
	printf("Lake Ontario with a degree of %.2lf C\n", arr[3]);
}

if (arr[3] == stclr){
	printf("Lake Saint Clair with a degree of %.2lf C\n", arr[3]);
}
//////////////////////
 if (arr[4] == sup){
	printf("Lake Superior with a degree of %.2lf C\n", arr[4]);
}

if (arr[4] == mich){
	printf("Lake Michigan with a degree of %.2lf C\n", arr[4]);
}

if (arr[4] == huron){
	printf("Lake Huron with a degree of %.2lf C\n", arr[4]);
}

if (arr[4] == erie){
	printf("Lake Erie with a degree of %.2lf C\n", arr[4]);
}

if (arr[4] == ont){
	printf("Lake Ontario with a degree of %.2lf C\n", arr[4]);
}

if (arr[4] == stclr){
	printf("Lake Saint Clair with a degree of %.2lf C\n", arr[4]);
}
//////////////////////
if (arr[5] == sup){
	printf("Lake Superior with a degree of %.2lf C\n", arr[5]);
}

if (arr[5] == mich){
	printf("Lake Michigan with a degree of %.2lf C\n", arr[5]);
}

if (arr[5] == huron){
	printf("Lake Huron with a degree of %.2lf C\n", arr[5]);
}

if (arr[5] == erie){
	printf("Lake Erie with a degree of %.2lf C\n", arr[5]);
}

if (arr[5] == ont){
	printf("Lake Ontario with a degree of %.2lf C\n", arr[5]);
}

if (arr[5] == stclr){
	printf("Lake Saint Clair with a degree of %.2lf C\n", arr[5]);
}
	
}



/////////////////////////////////////
int 
main () 
{
  
////////
//int year, day;
int year_s, day_s;
  
double sup, mich, huron, erie, ont, stclr;
double sup_s, mich_s, huron_s, erie_s, ont_s, stclr_s;
double avg_lakes;  


double avg_arr[5];


int n=6;
double cold_sup, cold_mich, cold_huron, cold_erie, cold_ont, cold_stclr;
double warm_sup, warm_mich, warm_huron, warm_erie, warm_ont, warm_stclr;

//////////
int counter=0;
{
FILE * data = fopen ("Term.txt", "r");
    char c;  // To store a character read from file
    data = fopen("Term.txt", "r");
    for (c = getc(data); c != EOF; c = getc(data))
        if (c == '\n') // Increment count if this character is newline
            counter = counter + 1;
}	

///////////////
//int year_arr[counter];
double day_arr[counter];
double sup_arr[counter];
double mich_arr[counter];
double huron_arr[counter];
double erie_arr[counter];
double ont_arr[counter];
double stclr_arr[counter];

///////////////  

FILE * data = fopen ("Term.txt", "r");


FILE*year_file=fopen("year.txt", "a"); 
FILE*day_file=fopen("day.txt", "a"); 
FILE*sup_file=fopen("sup.txt", "a"); 
FILE*mich_file=fopen("mich.txt", "a"); 
FILE*huron_file=fopen("huron.txt", "a"); 
FILE*erie_file=fopen("erie.txt", "a"); 
FILE*ont_file=fopen("ont.txt", "a"); 
FILE*stclr_file=fopen("stclr.txt", "a"); 

  
while (!feof (data))
{     
fscanf (data, "%d", &year_s);
fscanf (data, "%d", &day_s);
fscanf (data, "%lf", &sup_s);
fscanf (data, "%lf", &mich_s);
fscanf (data, "%lf", &huron_s);
fscanf (data, "%lf", &erie_s);
fscanf (data, "%lf", &ont_s);
fscanf (data, "%lf", &stclr_s);


fprintf(year_file,"%d\n",year_s);
fprintf(day_file,"%d\n",day_s);  
fprintf(sup_file,"%.2lf\n",sup_s);  
fprintf(mich_file,"%.2lf\n",mich_s);  
fprintf(huron_file,"%.2lf\n",huron_s);  
fprintf(erie_file,"%.2lf\n",erie_s);  
fprintf(ont_file,"%.2lf\n",ont_s);  
fprintf(stclr_file,"%.2lf\n",stclr_s);    



}

fclose(year_file);
fclose(day_file);
fclose(sup_file);
fclose(mich_file);
fclose(huron_file);
fclose(erie_file);
fclose(ont_file);
fclose(stclr_file);
////////////////////////////////////////////////////////////////////////////////////////////////////
{
	FILE *day_file= fopen("day.txt", "r");
	FILE *sup_file= fopen("sup.txt", "r");
	FILE *mich_file= fopen("mich.txt", "r");
	FILE *huron_file= fopen("huron.txt", "r");
	FILE *erie_file= fopen("erie.txt", "r");
	FILE *ont_file= fopen("ont.txt", "r");
	FILE *stclr_file= fopen("stclr.txt", "r");

	/* reading file - filling array */
	for (int i=0; i<counter; ++i){
		fscanf(day_file, "%lf", &day_arr[i]);
		fscanf(sup_file, "%lf", &sup_arr[i]);
		fscanf(mich_file, "%lf", &mich_arr[i]);
        fscanf(huron_file, "%lf", &huron_arr[i]);
        fscanf(erie_file, "%lf", &erie_arr[i]);
        fscanf(ont_file, "%lf", &ont_arr[i]);
        fscanf(stclr_file, "%lf", &stclr_arr[i]);
}

}


  
//////////////////////////////////////////////////////////////////////////////////////////////////////
printf ("The yearly average temperature for each of the lakes:\n");

printf ("=================================================================================\n");
sup=average(sup_arr);
printf ("The average temprature throughout the year on Lake Superior is %.2lf C\n", sup);

mich=average(mich_arr);
printf ("The average temprature throughout the year on Lake Michigan is %.2lf C\n", mich);

huron=average(huron_arr);
printf ("The average temprature throughout the year on Lake Huron is %.2lf C\n", huron);

erie=average(erie_arr);
printf ("The average temprature throughout the year on lake Erie is %.2lf C\n", erie);

ont=average(ont_arr);
printf ("The average temprature throughout the year on Lake Ontario is %.2lf C\n", ont);

stclr=average(stclr_arr);
printf ("The average temprature throughout the year on Lake Saint Clair is %.2lf C\n", stclr);

printf ("=================================================================================\n\n\n\n");
printf ("The yearly average for all six lakes put together:\n");
printf ("=================================================================================\n");

avg_lakes=(sup+ mich+ huron+ erie+ ont+ stclr)/6;

printf ("the average temperature of all the lakes is %.2lf C\n", avg_lakes);
printf ("=================================================================================\n\n\n\n");

///////////////////////////////////////////////////////////////////////////////////////////////////////////
avg_arr[0]=sup;               
avg_arr[1]=mich;
avg_arr[2]=huron;
avg_arr[3]=erie;
avg_arr[4]=ont;
avg_arr[5]=stclr;

printf ("The coldest and warmest lakes and lakes with above average and below average results:\n");
printf ("==========================================================================================\n");

sort_numbers_ascending(avg_arr, n);

 if (avg_arr[0] == sup){
	printf("The coldest lake on average is Lake Superior with a degree of %.2lf C\n", avg_arr[0]);
}

if (avg_arr[0] == mich){
	printf("The coldest lake on average is Lake Michigan with a degree of %.2lf C\n", avg_arr[0]);
}

if (avg_arr[0] == huron){
	printf("The coldest lake on average is Lake Huron with a degree of %.2lf C\n", avg_arr[0]);
}

if (avg_arr[0] == erie){
	printf("The coldest lake on average is Lake Erie with a degree of %.2lf C\n", avg_arr[0]);
}

if (avg_arr[0] == ont){
	printf("The coldest lake on average is Lake Ontario with a degree of %.2lf C\n", avg_arr[0]);
}

if (avg_arr[0] == stclr){
	printf("The coldest lake on average is Lake Saint Clair with a degree of %.2lf C\n", avg_arr[0]);
}

if (avg_arr[5] == sup){
	printf("The warmest lake on average is Lake Superior with a degree of %.2lf C\n", avg_arr[5]);
}

if (avg_arr[5] == mich){
	printf("The warmest lake on average is Lake Michigan with a degree of %.2lf C\n", avg_arr[5]);
}

if (avg_arr[5] == huron){
	printf("The warmest lake on average is Lake Huron with a degree of %.2lf C\n", avg_arr[5]);
}

if (avg_arr[5] == erie){
	printf("The warmest lake on average is Lake Erie with a degree of %.2lf C\n", avg_arr[5]);
}

if (avg_arr[5] == ont){
	printf("The warmest lake on average is Lake Ontario with a degree of %.2lf C\n", avg_arr[5]);
}

if (avg_arr[5] == stclr){
	printf("The warmest lake on average is Lake Saint Clair with a degree of %.2lf C\n", avg_arr[5]);
}

/////////////////////
if (sup > avg_lakes)             
    { 
        printf("Lake Superior is above average of all lakes average teperature\n");
    }
    
    else {
		
		printf("Lake Superior is below average of all lakes average teperature\n");
		
	     }  
/////////////////////	     
if (mich > avg_lakes)             
    { 
        printf("Lake Michigan is above average of all lakes average teperature\n");
    }
    
    else {
		
		printf("Lake Michigan is below average of all lakes average teperature\n");
		
	     } 	     
/////////////////////
if (huron > avg_lakes)             
    { 
        printf("Lake Huron is above average of all lakes average teperature\n");
    }
    
    else {
		
		printf("Lake Huron is below average of all lakes average teperature\n");
		
	     } 
/////////////////////
if (erie > avg_lakes)             
    { 
        printf("Lake Erie is above average of all lakes average teperature\n");
    }
    
    else {
		
		printf("Lake Erie is below average of all lakes average teperature\n");
		
	     }
/////////////////////
if (ont > avg_lakes)             
    { 
        printf("Lake Ontario is above average of all lakes average teperature\n");
    }
    
    else {
		
		printf("Lake Ontario is below average of all lakes average teperature\n");
		
	     }
/////////////////////
if (stclr > avg_lakes)             
    { 
        printf("Lake Saint Clair is above average of all lakes average teperature\n");
    }
    
    else {
		
		printf("Lake Saint Clair is below average of all lakes average teperature\n");
		
	     }
	     
printf ("==========================================================================================\n\n\n\n");
/////////////////////


cold_sup = coldest_laketemp(sup_arr);
printf("Coldest temperature in Lake Superior is %.2lf on:\n", cold_sup);
practice_day(sup_arr, day_arr, cold_sup); 

cold_mich = coldest_laketemp(mich_arr);
printf("Coldest temperature in Lake Michigan is %.2lf on:\n", cold_mich);
practice_day(mich_arr, day_arr, cold_mich);  

cold_huron = coldest_laketemp(huron_arr);
printf("Coldest temperature in Lake Huron is %.2lf on:\n", cold_huron);
practice_day(huron_arr, day_arr, cold_huron);  

cold_erie = coldest_laketemp(erie_arr); 
printf("Coldest temperature in Lake Erie is %.2lf on:\n", cold_erie);
practice_day(erie_arr, day_arr, cold_erie);  

cold_ont = coldest_laketemp(ont_arr);  
printf("Coldest temperature in Lake Ontario is %.2lf on:\n", cold_ont);
practice_day(ont_arr, day_arr, cold_ont);

cold_stclr = coldest_laketemp(stclr_arr);
printf("Coldest temperature in Saint Clair is %.2lf on:\n", cold_stclr);
practice_day(stclr_arr, day_arr, cold_stclr);  

printf ("==========================================================================================\n");
warm_sup = warmest_laketemp(sup_arr);
printf("Warmest temperature in Lake Superior is %.2lf on:\n", warm_sup);
practice_day(sup_arr, day_arr, warm_sup);

warm_mich = warmest_laketemp(mich_arr);
printf("Warmest temperature in Lake Michigan is %.2lf on:\n", warm_mich);
practice_day(mich_arr, day_arr, warm_mich);
 
warm_huron = warmest_laketemp(huron_arr);
printf("Warmest temperature in Lake Huron is %.2lf on:\n", warm_huron); 
practice_day(huron_arr, day_arr, warm_huron);

warm_erie = warmest_laketemp(erie_arr);
printf("Warmest temperature in Lake Erie is %.2lf on:\n", warm_erie); 
practice_day(erie_arr, day_arr, warm_erie);

warm_ont = warmest_laketemp(ont_arr);
printf("Warmest temperature in Lake Ontario is %.2lf on:\n", warm_ont);
practice_day(ont_arr, day_arr, warm_ont);

warm_stclr = warmest_laketemp(stclr_arr);
printf("Warmest temperature in Lake Saint Clair is %.2lf on:\n", warm_stclr); 
practice_day(stclr_arr, day_arr, warm_stclr); 
////////////////////////
printf("==================================================================================================\n");
double cold_arr[5];
cold_arr[0]=cold_sup;               
cold_arr[1]=cold_mich;
cold_arr[2]=cold_huron;
cold_arr[3]=cold_erie;
cold_arr[4]=cold_ont;
cold_arr[5]=cold_stclr;

sort_numbers_ascending(cold_arr, n);

if (cold_arr[0] == cold_sup){
	printf("The coldest overall water temperature is at Lake Superior with a degree of %.2lf C on\n", cold_arr[0]);
	practice_day(sup_arr, day_arr, cold_sup); 
}

if (cold_arr[0] == cold_mich){
	printf("The coldest overall water temperature is at Lake Michigan with a degree of %.2lf C on\n", cold_arr[0]);
	practice_day(mich_arr, day_arr, cold_mich); 
}

if (cold_arr[0] == cold_huron){
	printf("The coldest overall water temperature is at Lake Huron with a degree of %.2lf C on\n", cold_arr[0]);
	practice_day(huron_arr, day_arr, cold_huron);
}

if (cold_arr[0] == cold_erie){
	printf("The coldest overall water temperature is at Lake Erie with a degree of %.2lf C on\n", cold_arr[0]);
	practice_day(erie_arr, day_arr, cold_erie); 
}

if (cold_arr[0] == cold_ont){
	printf("The coldest overall water temperature is at Lake Ontario with a degree of %.2lf C on\n", cold_arr[0]);
	practice_day(ont_arr, day_arr, cold_ont);
}

if (cold_arr[0] == cold_stclr){
	printf("The coldest overall water temperature is at Lake Saint Clair with a degree of %.2lf C on\n", cold_arr[0]);
	practice_day(stclr_arr, day_arr, cold_stclr);  
}

double warm_arr[5];
warm_arr[0]=warm_sup;               
warm_arr[1]=warm_mich;
warm_arr[2]=warm_huron;
warm_arr[3]=warm_erie;
warm_arr[4]=warm_ont;
warm_arr[5]=warm_stclr;

sort_numbers_ascending(warm_arr, n);

if (warm_arr[5] == warm_sup){
	printf("The warmest overall water temperature is at Lake Superior with a degree of %.2lf C on\n", warm_arr[5]);
	practice_day(sup_arr, day_arr, warm_sup); 
}

if (warm_arr[5] == warm_mich){
	printf("The warmest overall water temperature is at Lake Michigan with a degree of %.2lf C on\n", warm_arr[5]);
	practice_day(mich_arr, day_arr, warm_mich); 
}

if (warm_arr[5] == warm_huron){
	printf("The warmest overall water temperature is at Lake Huron with a degree of %.2lf C on\n", warm_arr[5]);
	practice_day(huron_arr, day_arr, warm_huron);
}

if (warm_arr[5] == warm_erie){
	printf("The warmest overall water temperature is at Lake Erie with a degree of %.2lf C on\n", warm_arr[5]);
	practice_day(erie_arr, day_arr, warm_erie); 
}

if (warm_arr[5] == warm_ont){
	printf("The warmest overall water temperature is at Lake Ontario with a degree of %.2lf C on\n", warm_arr[5]);
	practice_day(ont_arr, day_arr, warm_ont);
}

if (warm_arr[5] == warm_stclr){
	printf("The warmest overall water temperature is at Lake Saint Clair with a degree of %.2lf C on\n", warm_arr[5]);
	practice_day(stclr_arr, day_arr, warm_stclr);  
}


////////////////////////
printf("===================================================\n");

double summer_sup;
double summer_mich;
double summer_huron;
double summer_erie;
double summer_ont;
double summer_stclr;

summer_sup = summer_average(sup_arr);
printf("The summer average for Lake Superior is %.2lf\n", summer_sup);

summer_mich = summer_average(mich_arr);
printf("The summer average for Lake Michigan is %.2lf\n", summer_mich);

summer_huron = summer_average(huron_arr);
printf("The summer average for Lake Huron is %.2lf\n", summer_huron);

summer_erie = summer_average(erie_arr);
printf("The summer average for Lake Erie is %.2lf\n", summer_erie);

summer_ont = summer_average(ont_arr);
printf("The summer average for Lake Ontario is %.2lf\n", summer_ont);

summer_stclr = summer_average(stclr_arr);
printf("The summer average for Lake Saint Clair is %.2lf\n\n", summer_stclr);
//Figure out how to add lake names after being rearranged

double summer_arr[6];

summer_arr[0]=summer_sup;               
summer_arr[1]=summer_mich;
summer_arr[2]=summer_huron;
summer_arr[3]=summer_erie;
summer_arr[4]=summer_ont;
summer_arr[5]=summer_stclr;

sort_numbers_descending(summer_arr, n); ///////////


printf("Names of the lakes in order from warmest to coldest:\n\n");

name_order(summer_arr, summer_sup, summer_mich, summer_huron, summer_erie, summer_ont, summer_stclr);



///////////////////////


printf("============================================================================\n");

double winter_sup;
double winter_mich;
double winter_huron;
double winter_erie;
double winter_ont;
double winter_stclr;

winter_sup = winter_average(sup_arr);
printf("The winter average for Lake Superior is %.2lf\n", winter_sup);

winter_mich = winter_average(mich_arr);
printf("The winter average for Lake Michigan is %.2lf\n", winter_mich);

winter_huron = winter_average(huron_arr);
printf("The winter average for Lake Huron is %.2lf\n", winter_huron);

winter_erie = winter_average(erie_arr);
printf("The winter average for Lake Erie is %.2lf\n", winter_erie);

winter_ont = winter_average(ont_arr);
printf("The winter average for Lake Ontario is %.2lf\n", winter_ont);

winter_stclr = winter_average(stclr_arr);
printf("The winter average for Lake Saint Clair is %.2lf\n\n", winter_stclr);

double winter_arr[6];

winter_arr[0]=winter_sup;               
winter_arr[1]=winter_mich;
winter_arr[2]=winter_huron;
winter_arr[3]=winter_erie;
winter_arr[4]=winter_ont;
winter_arr[5]=winter_stclr;

sort_numbers_descending(winter_arr, n); ///////////


printf("Names of the lakes in order from warmest to coldest:\n\n");

name_order(winter_arr, winter_sup, winter_mich, winter_huron, winter_erie, winter_ont, winter_stclr);



////////////////////////////////////////////////////////////
double swim_sup;
double swim_mich;
double swim_huron;
double swim_erie;
double swim_ont;
double swim_stclr;

printf("===============================================================\n");
swim_sup = swim(sup_arr);
printf("The total days allowed to swim in Lake Superior is %.lf\n", swim_sup);

swim_mich = swim(mich_arr);
printf("The total days allowed to swim in Lake Michigan is %.lf\n", swim_mich);

swim_huron = swim(huron_arr);
printf("The total days allowed to swim in Lake Huron is %.lf\n", swim_huron);

swim_erie = swim(erie_arr);
printf("The total days allowed to swim in Lake Erie is %.lf\n", swim_erie);

swim_ont = swim(ont_arr);
printf("The total days allowed to swim in Lake Ontario is %.lf\n", swim_ont);

swim_stclr = swim(stclr_arr);
printf("The total days allowed to swim in Lake Saint Clair is %.lf\n", swim_stclr);

printf("========================================================\n");

double freeze_sup;
double freeze_mich;
double freeze_huron;
double freeze_erie;
double freeze_ont;
double freeze_stclr;

freeze_sup = freeze(sup_arr);
printf("The total days Lake Superior is frozen %.lf\n", freeze_sup);

freeze_mich = freeze(mich_arr);
printf("The total days Lake Michigan is frozen %.lf\n", freeze_mich);

freeze_huron = freeze(huron_arr);
printf("The total days Lake Huron is frozen %.lf\n", freeze_huron);

freeze_erie = freeze(erie_arr);
printf("The total days Lake Erie is frozen %.lf\n", freeze_erie);

freeze_ont = freeze(ont_arr);
printf("The total days Lake Ontario is frozen %.lf\n", freeze_ont);

freeze_stclr = freeze(stclr_arr);
printf("The total days Lake Saint Clair is frozen %.lf\n", freeze_stclr);


printf("================================================================\n");

//////////////////////////////////////////////////////////////////////////////////////
//part 9

int year_s2, day_s2;
  
double sup2, mich2, huron2, erie2, ont2, stclr2;
double sup_s2, mich_s2, huron_s2, erie_s2, ont_s2, stclr_s2;
double avg_lakes2;  



double day_arr2[365];
double sup_arr2[365];
double mich_arr2[365];
double huron_arr2[365];
double erie_arr2[365];
double ont_arr2[365];
double stclr_arr2[365];


FILE * data2 = fopen ("Term2.txt", "r");


FILE*year_file2=fopen("year2.txt", "a"); 
FILE*day_file2=fopen("day2.txt", "a"); 
FILE*sup_file2=fopen("sup2.txt", "a"); 
FILE*mich_file2=fopen("mich2.txt", "a"); 
FILE*huron_file2=fopen("huron2.txt", "a"); 
FILE*erie_file2=fopen("erie2.txt", "a"); 
FILE*ont_file2=fopen("ont2.txt", "a"); 
FILE*stclr_file2=fopen("stclr2.txt", "a"); 

  
while (!feof (data2))
{     
fscanf (data2, "%d", &year_s2);
fscanf (data2, "%d", &day_s2);
fscanf (data2, "%lf", &sup_s2);
fscanf (data2, "%lf", &mich_s2);
fscanf (data2, "%lf", &huron_s2);
fscanf (data2, "%lf", &erie_s2);
fscanf (data2, "%lf", &ont_s2);
fscanf (data2, "%lf", &stclr_s2);


fprintf(year_file2,"%d\n",year_s2);
fprintf(day_file2,"%d\n",day_s2);  
fprintf(sup_file2,"%.2lf\n",sup_s2);  
fprintf(mich_file2,"%.2lf\n",mich_s2);  
fprintf(huron_file2,"%.2lf\n",huron_s2);  
fprintf(erie_file2,"%.2lf\n",erie_s2);  
fprintf(ont_file2,"%.2lf\n",ont_s2);  
fprintf(stclr_file2,"%.2lf\n",stclr_s2);    



}

fclose(year_file2);
fclose(day_file2);
fclose(sup_file2);
fclose(mich_file2);
fclose(huron_file2);
fclose(erie_file2);
fclose(ont_file2);
fclose(stclr_file2);
////////////////////
{
	FILE *day_file2= fopen("day2.txt", "r");
	FILE *sup_file2= fopen("sup2.txt", "r");
	FILE *mich_file2= fopen("mich2.txt", "r");
	FILE *huron_file2= fopen("huron2.txt", "r");
	FILE *erie_file2= fopen("erie2.txt", "r");
	FILE *ont_file2= fopen("ont2.txt", "r");
	FILE *stclr_file2= fopen("stclr2.txt", "r");

	/* reading file - filling array */
	for (int i=0; i<365; ++i){
		fscanf(day_file2, "%lf", &day_arr2[i]);
		fscanf(sup_file2, "%lf", &sup_arr2[i]);
		fscanf(mich_file2, "%lf", &mich_arr2[i]);
        fscanf(huron_file2, "%lf", &huron_arr2[i]);
        fscanf(erie_file2, "%lf", &erie_arr2[i]);
        fscanf(ont_file2, "%lf", &ont_arr2[i]);
        fscanf(stclr_file2, "%lf", &stclr_arr2[i]);
}

}
///////////////

printf ("The yearly average temperature for each of the lakes:\n");

printf ("=================================================================================\n");
sup2=average2(sup_arr2);
printf ("The average temprature throughout the year on Lake Superior is %.2lf C\n", sup2);

mich2=average2(mich_arr2);
printf ("The average temprature throughout the year on Lake Michigan is %.2lf C\n", mich2);

huron2=average2(huron_arr2);
printf ("The average temprature throughout the year on Lake Huron is %.2lf C\n", huron2);

erie2=average2(erie_arr2);
printf ("The average temprature throughout the year on lake Erie is %.2lf C\n", erie2);

ont2=average2(ont_arr2);
printf ("The average temprature throughout the year on Lake Ontario is %.2lf C\n", ont2);

stclr2=average2(stclr_arr2);
printf ("The average temprature throughout the year on Lake Saint Clair is %.2lf C\n", stclr2);

printf ("\n\n\n\n");
printf ("The yearly average for all six lakes put together:\n");


avg_lakes2=(sup2+ mich2+ huron2+ erie2+ ont2+ stclr2)/6;

printf ("the average temperature of all the lakes is %.2lf C\n", avg_lakes2);
printf ("=================================================================================\n\n\n\n");

///////////////
printf("Final Table\n"); 
printf ("==========\n\n");                                 
printf("Lake            Average 2019   Average 2020\n");
printf ("==============================================\n");
printf("Superior          %.2lf          %.2lf\n",sup2,sup);
printf("Michigan          %.2lf          %.2lf\n",mich2,mich);
printf("Huron             %.2lf          %.2lf\n",huron2,huron);
printf("Erie              %.2lf         %.2lf\n",erie2, erie);
printf("Ontario           %.2lf          %.2lf\n",ont2, ont);
printf("Saint Clair       %.2lf         %.2lf\n",stclr2,stclr);
printf("Overall Average   %.2lf          %.2lf\n",avg_lakes2,avg_lakes);

////////////////////////////////////////

return (0);
}
















