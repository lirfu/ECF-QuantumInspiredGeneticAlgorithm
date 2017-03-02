//
// Created by lirfu on 27.02.17..
//

#ifndef QUANTUMINSPIREDGENETICALGORITHM_QIGA_H
#define QUANTUMINSPIREDGENETICALGORITHM_QIGA_H

#include "ecf/ECF.h"
#include "QuantumLookupTable.h"

class QIGA : public Algorithm {
public:
    QIGA(QuantumLookupTable *);

    bool advanceGeneration(StateP, DemeP);

private:
    QuantumLookupTable *rotationGate_;

};

typedef boost::shared_ptr<QIGA> QIGAP;


#endif //QUANTUMINSPIREDGENETICALGORITHM_QIGA_H
