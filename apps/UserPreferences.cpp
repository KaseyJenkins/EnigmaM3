#include <memory>
#include "UserPreferences.hpp"

void XMLDeclaration(tinyxml2::XMLDocument &xmlDoc, const std::string &valS) {
    tinyxml2::XMLDeclaration *xmlDeclaration = xmlDoc.NewDeclaration();
    xmlDeclaration->SetValue(valS.c_str());
    xmlDoc.InsertFirstChild(xmlDeclaration);
}

void UserPreferences::Load() {

    std::unique_ptr xmlDocConfiguration = std::make_unique<tinyxml2::XMLDocument>();

    if (xmlDocConfiguration->LoadFile("Configuration.xml") == tinyxml2::XML_SUCCESS) {

        std::unordered_map<std::string, wxString> configurationMap = {
                {"Reflector",              Reflector},
                {"Rotor1",                 Rotor1},
                {"Rotor2",                 Rotor2},
                {"Rotor3",                 Rotor3},

                {"Ring1",                  Ring1},
                {"Ring2",                  Ring2},
                {"Ring3",                  Ring3},

                {"InitialPosition1",       InitialPosition1},
                {"InitialPosition2",       InitialPosition2},
                {"InitialPosition3",       InitialPosition3},

                {"PlugBoardwxStringInput", PlugBoardwxStringInput}
        };

        tinyxml2::XMLElement *pRootRead = xmlDocConfiguration->RootElement();
        for (tinyxml2::XMLElement *e = pRootRead->FirstChildElement(); e != nullptr; e = e->NextSiblingElement()) {
            configurationMap[e->Value()] = e->Attribute("value");
        }

        Reflector = configurationMap["Reflector"];

        Rotor1 = configurationMap["Rotor1"];
        Rotor2 = configurationMap["Rotor2"];
        Rotor3 = configurationMap["Rotor3"];

        Ring1 = configurationMap["Ring1"];
        Ring2 = configurationMap["Ring2"];
        Ring3 = configurationMap["Ring3"];

        InitialPosition1 = configurationMap["InitialPosition1"];
        InitialPosition2 = configurationMap["InitialPosition2"];
        InitialPosition3 = configurationMap["InitialPosition3"];

        PlugBoardwxStringInput = configurationMap["PlugBoardwxStringInput"];
    }
}

void UserPreferences::Save() const {

    std::unique_ptr xmlDocConfiguration = std::make_unique<tinyxml2::XMLDocument>();

    if (xmlDocConfiguration->LoadFile("Configuration.xml") != tinyxml2::XML_SUCCESS) {

        std::cerr << xmlDocConfiguration->ErrorStr() << std::endl;

        // Add Declaration: R"(xml version="1.0" encoding="UTF-8")"
        XMLDeclaration(*xmlDocConfiguration);

        tinyxml2::XMLNode *pRoot = xmlDocConfiguration->NewElement("EnigmaM3");
        xmlDocConfiguration->InsertEndChild(pRoot);

        std::unordered_map<std::string, wxString> configurationMap = {
                {"Reflector",              Reflector},
                {"Rotor1",                 Rotor1},
                {"Rotor2",                 Rotor2},
                {"Rotor3",                 Rotor3},

                {"Ring1",                  Ring1},
                {"Ring2",                  Ring2},
                {"Ring3",                  Ring3},

                {"InitialPosition1",       InitialPosition1},
                {"InitialPosition2",       InitialPosition2},
                {"InitialPosition3",       InitialPosition3},

                {"PlugBoardwxStringInput", PlugBoardwxStringInput}
        };

        // Insert initial values into the newly created xml configuration file
        for (const auto &item: configurationMap) {
            tinyxml2::XMLElement *pElement = xmlDocConfiguration->NewElement(item.first.c_str());
            pElement->SetAttribute("value", item.second.ToUTF8());
            pRoot->InsertFirstChild(pElement);
        }

        if (xmlDocConfiguration->SaveFile("Configuration.xml") != tinyxml2::XML_SUCCESS) {
            std::cerr << xmlDocConfiguration->ErrorStr() << std::endl;
        }

    } else {

        // If there is a configuration xml file
        // put those values into the configuration map

        std::unordered_map<std::string, wxString> configurationMap = {
                {"Reflector",              Reflector},
                {"Rotor1",                 Rotor1},
                {"Rotor2",                 Rotor2},
                {"Rotor3",                 Rotor3},

                {"Ring1",                  Ring1},
                {"Ring2",                  Ring2},
                {"Ring3",                  Ring3},

                {"InitialPosition1",       InitialPosition1},
                {"InitialPosition2",       InitialPosition2},
                {"InitialPosition3",       InitialPosition3},

                {"PlugBoardwxStringInput", PlugBoardwxStringInput}
        };

        for (tinyxml2::XMLElement *e = xmlDocConfiguration->RootElement()->FirstChildElement();
             e != nullptr; e = e->NextSiblingElement()) {
            e->SetAttribute("value", configurationMap[e->Value()].ToUTF8());
        }


        if (xmlDocConfiguration->SaveFile("Configuration.xml") != tinyxml2::XML_SUCCESS) {
            std::cerr << xmlDocConfiguration->ErrorStr() << std::endl;
        }

    }
}


