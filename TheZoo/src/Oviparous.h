/*
 * Oviparous.h
 *
 *  Created on: Apr 11, 2020
 *      Author: 1715254_snhu
 */

#ifndef OVIPAROUS_H_
#define OVIPAROUS_H_

#include "Animal.h"

class Oviparous : public Animal{
public:
	Oviparous(int t_TrackNum, string t_name, string t_type, string t_subType, int t_NumberOfEggs);
	virtual ~Oviparous();
	int NumberOfEggs;
};

#endif /* OVIPAROUS_H_ */
