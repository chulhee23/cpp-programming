/** File: calendar.cpp* ----------------
 * This program is used to generate a calendar for a year* entered by the user.
*/ 
#include <iostream> 
#include <iomanip> 
using namespace std; 
/** Constants:* ----------
  * Days of the week are represented by the integers 0-6.
  * Months of the year are identified by the integers 1-12;
  * because this numeric representation for months is in
  * common use, no special constants are defined.
*/

#define Sunday 0 
#define Monday 1 
#define Tuesday 2 
#define Wednesday 3 
#define Thursday 4 
#define Friday 5 
#define Saturday 6 
/* Function prototypes */ 
void GiveInstructions(void);
int GetYearFromUser(void);
void PrintCalendar(int year);
void PrintCalendarMonth(int month, int year);
void IndentFirstLine(int weekday);
int MonthDays(int month, int year);
int FirstDayOfMonth(int month, int year);
string MonthName(int month);
bool IsLeapYear(int year); /* Main program */

int main()
{
  int year;
  GiveInstructions();
  year = GetYearFromUser();
  PrintCalendar(year);
} 

/** Function: GiveInstructions* Usage: GiveInstructions();* --------------------------* This procedure prints out instructions to the user.*/

void GiveInstructions(void)
{
  cout << "This program displays a calendar for a full year\n";
  cout << "The year must not be before 1900.\n";
} /** Function: GetYearFromUser* Usage: year = GetYearFromUser();* --------------------------------*This function reads in a year from the user and returns* that value.  If the user enters a year before 1900, the* function gives the user another chance.*/

int GetYearFromUser(void)
{
  int year;
  while (true)
  {
    cout << "Which year? ";
    cin >> year;
    if (year >= 1900)
      return (year);
    cout << "The year must be at least 1900.\n";
  }
} 

/** Function: PrintCalendar* Usage: PrintCalendar(year);* ---------------------------* This procedure prints a calendar for an entire year.*/
void PrintCalendar(int year)
{
  int month;
  for (month = 1; month <= 12; month++)
  {
    PrintCalendarMonth(month, year);
    cout << endl;
  }
} 

/** Function: PrintCalendarMonth* Usage: PrintCalendarMonth(month, year);* ---------------------------------------* This procedure prints a calendar for the given month* and year.*/
void PrintCalendarMonth(int month, int year)
{
  int weekday, nDays, day;
  cout << MonthName(month) << " " << year << endl;
  cout << " Su Mo Tu We Th Fr Sa\n";
  nDays = MonthDays(month, year);
  weekday = FirstDayOfMonth(month, year);
  IndentFirstLine(weekday);
  for (day = 1; day <= nDays; day++)
  {
    cout << setw(3) << day;
    if (weekday == Saturday)
      cout << endl;
    weekday = (weekday + 1) % 7;
  }
  if (weekday != Sunday)
    cout << endl;
} 

/** Function: IndentFirstLine* Usage: IndentFirstLine(weekday);* --------------------------------* This procedure indents the first line of the calendar* by printing enough blank spaces to get to the position* on the line corresponding to weekday.*/
void IndentFirstLine(int weekday)
{
  int i;
  for (i = 0; i < weekday; i++)
  {
    cout << "   ";
  }
} 

/** Function: MonthDays* Usage: ndays = MonthDays(month, year);* --------------------------------------* MonthDays returns the number of days in the indicated* month and year.  The year is required to handle leap years.*/
int MonthDays(int month, int year)
{
  switch (month)
  {
  case 2:
    if (IsLeapYear(year))
      return (29);
    return (28);
  case 4:
  case 6:
  case 9:
  case 11:
    return (30);
  default:
    return (31);
  }
} 

/** Function: FirstDayOfMonth* Usage: weekday = FirstDayOfMonth(month, year);* ----------------------------------------------* This function returns the day of the week on which the
* indicated month begins.  This program simply counts* forward from January 1, 1900, which was a Monday.*/
int FirstDayOfMonth(int month, int year)
{ 
  // 이부분은스스로해결해보세요!!!}
  /** Function: MonthName* Usage: name = MonthName(month);
   * * -------------------------------
   * * MonthName converts a numeric month in the range 1-12
   * * into the string name for that month.
   * */

  int sum = 1;
  for(int i=1900; i<year; i++){
    if (IsLeapYear(i)){
      sum += 366;

    } else {
      sum += 365;
    }
  }
  for(int i=1; i< month; i++){
    sum += MonthDays(i, year);
  }
  return sum % 7;
}

string MonthName(int month)
{
  switch (month) 
  {
    case  1:
      return ("January");
    case  2: return ("February");
    case  3: return ("March");
    case  4: return ("April");
    case  5: return ("May");
    case  6: return ("June");
    case  7: return ("July");
    case  8: return ("August");
    case  9: return ("September");
    case 10: return ("October");
    case 11: return ("November");
    case 12: return ("December");
    default: return ("Illegal month");
  }
}
/** Function: IsLeapYear* Usage: if (IsLeapYear(year)) . . .* ----------------------------------* This function returns TRUE if year is a leap year.*/
bool IsLeapYear(int year)
{
  return ( ((year % 4 == 0) && (year % 100 != 0))|| (year % 400 == 0) );
}