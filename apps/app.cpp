#include <iostream>
#include <array>
#include "enigmaM3/enigma.h"

using namespace enigmaM3;


void
initializationSequence(std::string &, const std::array<int, 3> &, const std::string &,
                       const std::array<int, 3> &, char, std::string &);

int main() {

    std::string toChange = "AAAAAAAAAAAAAAAAAAAAAAAAAAA";
    std::array<int, 3> rotors = {1, 2, 8}; //from left to right
    std::string lAbove = "AAZ"; //from left to right
    std::array<int, 3> ringSetting = {0, 0, 0}; //from left to right
    char reflector = 'B';
    std::string plugboard = "AZKJ"; // A <=> Z, K <=> J

    initializationSequence(toChange, rotors, lAbove, ringSetting, reflector, plugboard);

    std::cout << toChange;

    return 0;
}


void mainSequence(std::string &toChange, Rotor &rotorIII, Rotor &rotorII, Rotor &rotorI,
                  Reflector &reflector, Plugboard &plugboard) {

    //normalize the string: A=0...
    for (auto &i : toChange) {
        i -= 65;
    }

    for (auto &i : toChange) {
        plugboard.plugboardSubstitution(i);

        //the first wheel steps ever time:
        rotorIII.turnOver();
        //perform transformation on the first wheel
        rotorIII.transformationRightToLeft(i);

        if (rotorIII.isAtNotch()) {
            rotorII.turnOver();
        }

        rotorII.transformationRightToLeft(i);

        if (rotorII.isAtNotch()) {
            rotorI.turnOver();
        }

        rotorI.transformationRightToLeft(i);

        reflector.transformationReflector(i);

        rotorI.transformationLeftToRight(i);
        rotorII.transformationLeftToRight(i);
        rotorIII.transformationLeftToRight(i);

        plugboard.plugboardSubstitution(i);
    }

    //denormalize the string
    for (auto &i : toChange) {
        i += 65;
    }

}

void
initializationSequence(std::string &message, const std::array<int, 3> &rotors, const std::string &lAbove,
                       const std::array<int, 3> &ringS, char reflectorL, std::string &plugboardS) {

    Rotor rotorI(rotors[0], lAbove[0], ringS[0]);
    Rotor rotorII(rotors[1], lAbove[1], ringS[1]);
    Rotor rotorIII(rotors[2], lAbove[2], ringS[2]);
    Reflector reflector(reflectorL);
    Plugboard plugboard(plugboardS);

    mainSequence(message, rotorIII, rotorII, rotorI, reflector, plugboard);

}
