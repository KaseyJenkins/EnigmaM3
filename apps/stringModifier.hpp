#ifndef ENIGMA_STRINGMODIFIER_HPP
#define ENIGMA_STRINGMODIFIER_HPP

#include "enigmaM3/enigma.h"
#include "GlobalPreferencesValues.hpp"

inline void
mainSequence(std::string &toChange, enigmaM3::Rotor &rotorIII, enigmaM3::Rotor &rotorII, enigmaM3::Rotor &rotorI,
             enigmaM3::Reflector &reflector, enigmaM3::Plugboard &plugboard) {

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

inline void
initializationSequence(std::string &message, const std::array<int, 3> &rotors, const std::string &lAbove,
                       const std::array<int, 3> &ringS, char reflectorL, std::string &plugboardS) {

    enigmaM3::Rotor rotorI(rotors[0], lAbove[0], ringS[0]);
    enigmaM3::Rotor rotorII(rotors[1], lAbove[1], ringS[1]);
    enigmaM3::Rotor rotorIII(rotors[2], lAbove[2], ringS[2]);
    enigmaM3::Reflector reflector(reflectorL);
    enigmaM3::Plugboard plugboard(plugboardS);

    mainSequence(message, rotorIII, rotorII, rotorI, reflector, plugboard);

}


int rotorIntSettingConversion(const wxString &rotorSettingStringValue) {

    if (rotorSettingStringValue == "I") { return 1; }
    if (rotorSettingStringValue == "II") { return 2; }
    if (rotorSettingStringValue == "III") { return 3; }
    if (rotorSettingStringValue == "IV") { return 4; }
    if (rotorSettingStringValue == "V") { return 5; }
    if (rotorSettingStringValue == "VI") { return 6; }
    if (rotorSettingStringValue == "VII") { return 7; }
    if (rotorSettingStringValue == "VIII") { return 8; }

}

char reflectorCharConversion(const wxString &reflectorValue) {
    if (reflector_Value == "UKW-B") {
        return 'B';
    } else {
        return 'C';
    }
}


inline wxString mainFunc(const wxString &stringToChangeWx) {


    std::string toChange = stringToChangeWx.Upper().ToStdString();

    std::array<int, 3> rotors = {rotorIntSettingConversion(rotor_SettingString_1),
                                 rotorIntSettingConversion(rotor_SettingString_2),
                                 rotorIntSettingConversion(rotor_SettingString_3)}; //from left to right
    std::string lAbove = (initialPosition_1 + initialPosition_2 + initialPosition_3).ToStdString(); //from left to right
    std::array<int, 3> ringSetting = {wxAtoi(ring_SettingString_1), wxAtoi(ring_SettingString_2),
                                      wxAtoi(ring_SettingString_3)}; //from left to right
    char reflector = reflectorCharConversion(reflector_Value);
    std::string plugboard = " "; // "ZAKJ" A <=> Z, K <=> J


    initializationSequence(toChange, rotors, lAbove, ringSetting, reflector, plugboard);

    wxString toChangeWx(toChange);

    return toChangeWx;
}


#endif //ENIGMA_STRINGMODIFIER_HPP
