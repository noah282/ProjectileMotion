//
//  main.cpp
//  Projectile Motion
//
//  
//

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

void DisplayScreen();
void ProjectileMotion(float velocityInitial, float angleInitial);
void CompleteScreen();

const float G = -9.8;
const float PI = 3.14159;

int main(){
    float velocityInitial, angleInitial;
    
    DisplayScreen();
    cout << "Please enter initial velocity and angle below\n";
    cout << "Velocity (ft/s): ";
    cin >> velocityInitial;
    cout << "Angle (degrees): ";
    cin >> angleInitial;
    cout << endl;
    
    ProjectileMotion(velocityInitial, angleInitial);
    cout << endl;
    CompleteScreen();
    return 0;
}


void DisplayScreen(){
    cout << "                           **************" << endl;
    cout << "                            HELLO THERE!" << endl;
    cout << "                           **************" << endl;
    cout << "This program is used to determine the projectile motion of a ball given your inputs." << endl << endl;
}

void ProjectileMotion(float velocityInitial, float angleInitial){
    double xcomponent, ycomponent;
    double angleConversion;
    double time, peakTime, maxHeight;
    double displacement;
    
    //converting degrees to radians
    angleConversion = angleInitial * (PI / 180);
    
    //solving for x and y components
    xcomponent = velocityInitial * cos(angleConversion);
    ycomponent = velocityInitial * sin(angleConversion);
    
    //solving for t
    time = ((-ycomponent) - xcomponent) / G;
    
    //solving for peak height (peak height is when total time is 1/2
    peakTime = (time / 2);
    maxHeight = (ycomponent * peakTime) + ((G * pow(peakTime, 2)) / 2);
    
    //horizontal distance
    displacement = (xcomponent * time);
    
    cout << "Time fo flight: " << time << " seconds" << endl;
    cout << "Max Height: " << maxHeight << " ft." << endl;
    cout << "Displacement: " << displacement << " ft." << endl;
}

void CompleteScreen(){
    cout << "               **************************" << endl;
    cout << "                  PROJECTILE COMPLETED!" << endl;
    cout << "               **************************" << endl << endl;
}
