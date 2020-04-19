/*
 * SeaLion.h
 *
 *  Created on: Apr 11, 2020
 *      Author: 1715254_snhu
 */

#ifndef SEALION_H_
#define SEALION_H_

#include "Mammal.h"

class SeaLion : public Mammal {
public:
	SeaLion(int t_TrackNum, string t_name, string t_type, string t_subType, int t_Nurse);
	virtual ~SeaLion();
};

#endif /* SEALION_H_ */
