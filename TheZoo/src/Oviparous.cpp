/*
 * Oviparous.cpp
 *
 *  Created on: Apr 11, 2020
 *      Author: 1715254_snhu
 */

#include "Oviparous.h"

Oviparous::Oviparous(int t_TrackNum,
		string t_name,
		string t_type,
		string t_subType,
		int t_NumberOfEggs) : Animal(t_TrackNum, t_name, t_type, t_subType, t_NumberOfEggs) {
	this->NumberOfEggs = t_NumberOfEggs;
}

Oviparous::~Oviparous() {
	// Auto-generated destructor stub
}

