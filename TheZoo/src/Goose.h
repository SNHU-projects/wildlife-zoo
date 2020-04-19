/*
 * Goose.h
 *
 *  Created on: Apr 11, 2020
 *      Author: 1715254_snhu
 */

#ifndef GOOSE_H_
#define GOOSE_H_

#include "Oviparous.h"

class Goose : public Oviparous {
public:
	Goose(int t_TrackNum, string t_name, string t_type, string t_subType, int t_NumberOfEggs);
	virtual ~Goose();
};

#endif /* GOOSE_H_ */
