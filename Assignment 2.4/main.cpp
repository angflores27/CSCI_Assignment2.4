//  Assignment 2.4
//  Angela Flores Figueroa
//  CSCI 40 Fall 2022

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    //Use only two variables and a while loop statement to ask a user enter 500 integers and then produce and display the smallest number that user entered.
    cout<<"----------- Part 1: Smallest Integer ------------"<<endl;
    int a, min;
    cout <<"Enter 500 integers:"<<endl;
    cin>>a;
    min=a;
    
    int i=0;
    while (i<500){ //changed to 500
        cin>>a;
        if (a<min){
            min=a;}
        i++;
        }
    
    cout << "The smallest number you entered is: "<<min<<endl;
    
    
    //Use only two variable and a while loop statement to ask a user to enter 200 integers and produce and display the average of those numbers that user entered.
    
    cout<<"----------- Part 2: Average of Integers -----------"<<endl;
    
    int b, sum=0;
    cout <<"Enter 200 integers: "<<endl;
    cin>>b;
    sum=b;
    
    int y=1;
    while (y<200){ //changed to 200
        cin>>b;
        sum=sum+b;
        y++;}
    
    cout<<"The average of the integers you entered is: "<< (sum/200.0)<<endl; //changed to 200
    
    
    //Use a while loop statement to allow a user to calculate 20 persons' body mass indices (BMI) based on their body weights and heights
    
    cout<<"----------- Part 3: BMI calculations -------------"<<endl;
    
    double height, weight, bmi, person=1;
    
    while(person<=20){ //changed to 20
        cout<<"Please enter the body weight in pounds of person "<<person<<endl;
        cin>> weight;
        cout<<"Please enter the body height in inches of person "<<person<<endl;
        cin>>height;
        weight = weight*0.45359237;
        height = height*0.0254;
        bmi=weight/(height*height);
        cout<<"The BMI of person "<<person<<" is: "<<bmi<<endl;
        person++;}

    cout<<"-------------------------------------------------"<<endl;
    cout<< "End of assignment."<<endl;
    
    return 0;
}
