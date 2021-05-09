#ifndef ENIGMA_ENIGMA_H
#define ENIGMA_ENIGMA_H

#include <string>

namespace enigmaM3 {

    int myMod(const int &a, const int &b);

    // A = 0, B = 1... Z = 25
    void normalizeASCIIindex(std::string &stringToNormalize);

    class Rotor {

    public:
        Rotor(int rNumber, char lAbove, int ringSetting);

        void turnOver();

        bool isAtNotch() const;

        void transformationRightToLeft(char &c);

        void transformationLeftToRight(char &c);

    private:
        int rotorNumber;

        int letterAbove;
        std::string rotorWiringSequence;

        std::string rotorWiringSequenceReversed;

        std::string rotorWiringSequenceInitialization() const;

        void rotorWiringSequenceReversedInitialization();

        //https://crypto.stackexchange.com/a/71327
        void RingSetting(int ringSet);

        friend void normalizeASCIIindex(std::string &);
    };


    class Reflector {

    public:

        explicit Reflector(char c);

        void transformationReflector(char &c);

    private:

        std::string ReflectorWiringSequence;

        std::string reflectorWiringSequenceInitialization(char cR);

        friend void normalizeASCIIindex(std::string &);
    };

    class Plugboard {

    public:

        explicit Plugboard(std::string &s);

        void plugboardSubstitution(char &c);

    private:

        std::string PlugboardWiringSequence;

        friend void normalizeASCIIindex(std::string &);
    };

}
#endif //ENIGMA_ENIGMA_H
