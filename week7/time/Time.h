class Time
{
private:
  int hour;
  int minute;
  int second;

public:
  void setTime(int, int, int);
  void printTime12(); // 12시간 단위 출력
  void printTime24(); // 24시간 단위 출력
};