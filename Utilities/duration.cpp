#include <chrono>
#include <iostream>
#include <ratio>

int main(){

  std::cout << std::endl;

  typedef std::chrono::duration<long long, std::ratio<1>> MySecondTick;

  MySecondTick aSecond(1);

  std::chrono::nanoseconds nano(aSecond);
  std::cout << nano.count() << " nanoseconds" << std::endl;

  std::chrono::microseconds micro(aSecond);
  std::cout << micro.count() << " microseconds" << std::endl;

  std::chrono::milliseconds milli(aSecond);
  std::cout << milli.count() << " milliseconds" << std::endl;

  std::chrono::seconds seconds(aSecond);
  std::cout << seconds.count() << " seconds" << std::endl;

  // std::chrono::minutes minutes(aSecond);
  std::chrono::minutes minutes(std::chrono::duration_cast<std::chrono::minutes>(aSecond));
  std::cout << minutes.count() << " minutes(truncated value)" << std::endl;

  //std::chrono::hours hours(aSecond);
  std::chrono::hours hours(std::chrono::duration_cast<std::chrono::hours>(aSecond));
  std::cout << hours.count() << " hours( truncated value)" << std::endl;

  std::cout << std::endl;

  typedef std::chrono::duration<double, std::ratio<60>> MyMinuteTick;
  MyMinuteTick myMinute(aSecond);
  std::cout << myMinute.count() << " minutes" << std::endl;

  typedef std::chrono::duration<double, std::ratio<3600>> MyHourTick;
  MyHourTick myHour(aSecond);
  std::cout << myHour.count() << " hours" << std::endl;

  typedef std::chrono::duration<double, std::ratio<2700>> MyLessonTick;
  MyLessonTick myLesson(aSecond);
  std::cout << myLesson.count() << " lessons" << std::endl;

  typedef std::chrono::duration<long long, std::ratio<1, 2>> MyHalfASecondTick;
  MyHalfASecondTick myHalfASecond(aSecond);
  std::cout << myHalfASecond.count() << " HalfASeconds" << std::endl;

  std::cout << std::endl;

}
