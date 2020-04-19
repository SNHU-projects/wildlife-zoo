/*
 * Animal.h
 *
 *  Created on: Apr 16, 2020
 *      Author: 1715254_snhu
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include<iostream>
using namespace std;

class Animal {
public:
	Animal(int t_TrackNum, string t_name, string t_type, string t_subType, int additionalData);
	virtual ~Animal();
	int TrackNum;
	string name;
	string type;
	string subType;
	int additionalData;
};

#endif /* ANIMAL_H_ */
