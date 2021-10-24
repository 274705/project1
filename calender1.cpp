#include<iostream>
using namespace std;
int feb(int);
int feb(int y){
 if(y%100==0 && y%400==0) 
          return 1;
    else if(y%100!=0 && y%4==0)
    return 1;
    else
    return 0;   
    }
int main()
{   
    
    int date,month,year,y1,y2,y3,e,ye,j;
    cout<<"Enter the date : ";
    cin>>date;
    cout<<endl<<"enter the month in digit : ";
    cin>>month;
    cout<<endl<<"enter the year ";
    cin>>year;
//for odd day calculation of years(year-1)    
    int y=year-1;
    y1=y/100;
    y2=y%100;
    y3=y2/4;
    int y4=y1/4;
    int total=y2+y3+y4+(y1*5);
//for for odd day calculation in months(month-1)
  int yf,j1;
   switch(month-1)
   {   
       case 0:
        j=0;
       break;
       case 1:
       j=3;
       break;
      case 2:  
       j=feb(year)+3;
        break;
        case 3:
     j=feb(year)+6;
        break;
        case 4:
        j=feb(year)+8;
         break;
        case 5:
        j=feb(year)+11;
         break;
        case 6:
    j=feb(year)+13;
         break;
        case 7:
        j=feb(year)+16;
         break;
        case 8:
        j=feb(year)+19;
         break;
        case 9:
        j=feb(year)+21;
         break;
        case 10:
        j=feb(year)+24;
         break;
        case 11:
        j=feb(year)+26;
         break;
        default:
        cout<<"wrong input";

   }
   //total odd day %7
   yf=(date+j+total)%7;
   
  cout<<endl<<"the day on "<<date<<"/"<<month<<"/"<<year<<" is : ";
   switch(yf)
   {
       case 0:
       cout<<"sunday";
       break;
       case 1:
       cout<<"monday";
       break;
       case 2:
       cout<<"tuesday";
       break;
       case 3:
       cout<<"wednesday";
       break;
       case 4:
       cout<<"thursday ";
       break;
       case 5:
       cout<<"friday";
       break;
       default:
       cout<<"saturday";
       break;

   }

    return 0;

}
