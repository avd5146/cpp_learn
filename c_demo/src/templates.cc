#include <iostream>
#include <vector>


template <class T>
class MyClass{

public:

  T myFunc (T in);

};

template <class T> // Needs to be re-written here
T MyClass<T>::myFunc (T in)
{
	std::cout<<"Successfully in.\n";
	return in;
	// if no return type provided, returns some constant
}

int main(){

  MyClass<std::vector<int> > myClass; // something weird syntax about template<template<> >. Needs > > as compared to >>
	// MyClass<int> myClass;
  std::vector<int>in (2,10);
  std::vector<int> out = myClass.myFunc(in);
  // int a = myClass.myFunc(1);
  // std::cout << a;

  return 0;  

}