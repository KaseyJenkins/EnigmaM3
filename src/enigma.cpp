#include "enigmaM3/enigma.h"

int enigmaM3::myMod(int const &a, int const &b) {
    return (a % b + b) % b;
}

void enigmaM3::normalizeASCIIindex(std::string &stringToNormalize) {
    for (auto &i : stringToNormalize) {
        i -= 65;
    }
}

std::string enigmaM3::Rotor::rotorWiringSequenceInitialization() const {
    if (rotorNumber == 1) {
        return "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
    } else if (rotorNumber == 2) {
        return "AJDKSIRUXBLHWTMCQGZNPYFVOE";
    } else if (rotorNumber == 3) {
        return "BDFHJLCPRTXVZNYEIWGAKMUSQO";
    } else if (rotorNumber == 4) {
        return "ESOVPZJAYQUIRHXLNFTGKDCMWB";
    } else if (rotorNumber == 5) {
        return "VZBRGITYUPSDNHLXAWMJQOFECK";
    } else if (rotorNumber == 6) {
        return "JPGVOUMFYQBENHZRDKASXLICTW";
    } else if (rotorNumber == 7) {
        return "NZJHGRCXMYSWBOUFAIVLPEKQDT";
    } else if (rotorNumber == 8) {
        return "FKQHTLXOCBJSPDZRAMEWNIUYGV";
    } else {
        return "";
    }
}

void enigmaM3::Rotor::rotorWiringSequenceReversedInitialization() {
    for (int i = 0; i < rotorWiringSequence.size(); ++i) {
        rotorWiringSequenceReversed[rotorWiringSequence[i]] = static_cast<char>(i);
    }
}

void enigmaM3::Rotor::RingSetting(int ringSet) {
    int dotposition;
    //the position of the A (dot position):
    dotposition = rotorWiringSequenceReversed[0];
    //the new dot position of the A after the shifting up:
    dotposition = myMod((dotposition + ringSet), 26); //not really needed

    //shifting the letters up
    for (auto &i : rotorWiringSequence) {
        i = static_cast<char>(myMod((i + ringSet), 26));
    }

    //the ring setting should be at the new dot position
    rotorWiringSequenceReversedInitialization();

    dotposition -= rotorWiringSequenceReversed[ringSet];
    std::string Temp = rotorWiringSequence;

    //rotating the new wiring according to the position we want our ring setting to be
    for (int i = 0; i < rotorWiringSequence.size(); ++i) {
        rotorWiringSequence[i] = Temp[myMod((i - dotposition), 26)];
    }
}

enigmaM3::Rotor::Rotor(int rNumber, char lAbove, int ringSetting) :
        rotorNumber(rNumber),
        letterAbove(static_cast<int>(lAbove) - 65),
        rotorWiringSequence(rotorWiringSequenceInitialization()),
        rotorWiringSequenceReversed(std::string(rotorWiringSequence.size(), ' ')) {

    normalizeASCIIindex(rotorWiringSequence);
    rotorWiringSequenceReversedInitialization();
    RingSetting(ringSetting);
    rotorWiringSequenceReversedInitialization();
}

void enigmaM3::Rotor::turnOver() {
    //step up the letter above
    letterAbove = myMod((++letterAbove), 26);
}

bool enigmaM3::Rotor::isAtNotch() const {
    bool turnOver = false;

    switch (rotorNumber) {
        case 1 :
            if (letterAbove == 17) {
                turnOver = true;
            }
            break;
        case 2 :
            if (letterAbove == 4) {
                turnOver = true;
            }
            break;
        case 3 :
            if (letterAbove == 22) {
                turnOver = true;
            }
            break;
        case 4 :
            if (letterAbove == 10) {
                turnOver = true;
            }
            break;
        case 5 :
            if (letterAbove == 0) {
                turnOver = true;
            }
            break;
        case 6 :
        case 7 :
        case 8 :
            if (letterAbove == 0 || letterAbove == 13) {
                turnOver = true;
            }
            break;
    }
    return turnOver;
}

void enigmaM3::Rotor::transformationRightToLeft(char &c) {

    //what letter goes into the wheel
    c = myMod((c + letterAbove), 26);

    c = rotorWiringSequence[c]; //transform

    //what goes into the next wheel
    c = myMod((c - letterAbove), 26);

}

void enigmaM3::Rotor::transformationLeftToRight(char &c) {

    //what letter goes into the wheel
    c = myMod((c + letterAbove), 26);

    c = rotorWiringSequenceReversed[c]; //transform

    //what goes into the next wheel
    c = myMod((c - letterAbove), 26);
}

std::string enigmaM3::Reflector::reflectorWiringSequenceInitialization(char const cR) {
    if (cR == 'B') {
        return "YRUHQSLDPXNGOKMIEBFZCWVJAT";
    } else if (cR == 'C') {
        return "FVPJIAOYEDRZXWGCTKUQSBNMHL";
    } else {
        return "";
    }
}

enigmaM3::Reflector::Reflector(char const c) :
        ReflectorWiringSequence(reflectorWiringSequenceInitialization(c)) {
    normalizeASCIIindex(ReflectorWiringSequence);
}

void enigmaM3::Reflector::transformationReflector(char &c) {
    c = ReflectorWiringSequence[static_cast<int>(c)];
}

enigmaM3::Plugboard::Plugboard(std::string const &s) :
        PlugboardWiringSequence(s) {
    normalizeASCIIindex(PlugboardWiringSequence);
}

void enigmaM3::Plugboard::plugboardSubstitution(char &c) {

    for (int i = 0; i < PlugboardWiringSequence.size(); ++i) {
        if (c == PlugboardWiringSequence[i]) {
            if (i == 0 || (i % 2) == 0) {
                c = PlugboardWiringSequence[i + 1];
                break;
            } else {
                c = PlugboardWiringSequence[i - 1];
                break;
            }
        }
    }
}
