/*
 * Mammal.cpp
 *
 *  Created on: Apr 11, 2020
 *      Author: 1715254_snhu
 */

#include "Mammal.h"

Mammal::Mammal(int t_TrackNum,
		string t_name,
		string t_type,
		string t_subType,
		int t_Nurse) : Animal(t_TrackNum, t_name, t_type, t_subType, t_Nurse) {
	this->Nurse = t_Nurse;
}

Mammal::~Mammal() {
	// Auto-generated destructor stub
}


