#ifndef ENIGMA_ENIGMA_H
#define ENIGMA_ENIGMA_H

#include <string>

namespace enigmaM3 {

    int myMod(const int &, const int &);

    // A = 0, B = 1... Z = 25
    void normalizeASCIIindex(std::string &);

    class Rotor {

    public:
        Rotor(int, char, int);

        void turnOver();

        bool isAtNotch() const;

        void transformationRightToLeft(char &);

        void transformationLeftToRight(char &);

    private:
        int rotorNumber;

        int letterAbove;
        std::string rotorWiringSequence;

        std::string rotorWiringSequenceReversed;

        std::string rotorWiringSequenceInitialization() const;

        void rotorWiringSequenceReversedInitialization();

        //https://crypto.stackexchange.com/a/71327
        void RingSetting(int);

    };


    class Reflector {

    public:

        explicit Reflector(char const);

        void transformationReflector(char &);

    private:

        std::string ReflectorWiringSequence;

        std::string reflectorWiringSequenceInitialization(char const);

    };

    class Plugboard {

    public:

        explicit Plugboard(std::string const &);

        void plugboardSubstitution(char &);

    private:

        std::string PlugboardWiringSequence;

    };

}
#endif //ENIGMA_ENIGMA_H
