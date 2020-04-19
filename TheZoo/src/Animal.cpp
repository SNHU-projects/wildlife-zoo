/*
 * Animal.cpp
 *
 *  Created on: Apr 16, 2020
 *      Author: 1715254_snhu
 */

#include "Animal.h"

Animal::Animal(int t_TrackNum, string t_name, string t_type, string t_subType, int additionalData) {
	this->TrackNum = t_TrackNum;
	this->name = t_name;
	this->type = t_type;
	this->subType = t_subType;
	this->additionalData = additionalData;
}

Animal::~Animal() {
	// Auto-generated destructor stub
}

